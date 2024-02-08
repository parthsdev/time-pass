#include <bits/stdc++.h>
using namespace std;
class base1
{
protected:
    int data1;

public:
    void set_base1(int num)
    {
        data1 = num;
    }
    void print_base1()
    {
        cout<<data1;
    }
};
class base2 : virtual public base1
{
protected:
    int data2;

public:
    void set_base2(int num2)
    {
        data2 = num2;
    }
      virtual void print_base2()
    {
        cout<<data2;
    }
};

class base3 : virtual public base2
{
protected:
    int data3;

public:
    void set_base3(int num3)
    {
        data3 = num3;
    }
    void print_base3()
    {
        cout<<data3;
    }
};
class derived :   virtual public base1, virtual public base2,virtual public base3
{
   int dervied1;
   public:
   void dervied_1(int num4)
   {
       num4=dervied1;
   }
   void disaply()
   {
       print_base1();
       print_base2();
       print_base3();
   }
};

int main()
{
    derived d1;
    d1.set_base1(5);
    d1.set_base2(4);
    d1.set_base3(5);
    d1.disaply();

    return 0;
}
