#include<bits/stdc++.h>
using namespace std;
class animal
{
    public:
    int age;
    int weight;
    public:
    void speak()
    {
        cout<<"Speaking";
    }
};

class dog : public animal
{
    public:
   void bark()
   {
    cout<<"Barking";
   }
};

class german:public dog
{
    public:
    void special_bark()
    {
        cout<<"Bark-german";
    }
};
int main()
{

    dog d;
    d.speak();
    german g1;
    g1.special_bark();
    g1.bark();
    g1.speak();
return 0;
}