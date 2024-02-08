#include<bits/stdc++.h>
using namespace std;
class hero
{
    private:
    int health;
    public:
    char level;
   int gethealth()
   {
    return health;
   }

   char getlevel()
   {
     return level;
   }

   void sethealth(int h)
   {
     health=h;
   }
   void setlevel(char ch)
   {
     level=ch;
   }
};
int main()
{
    hero h1;
    h1.sethealth(54);
    h1.setlevel('A');
    cout<<h1.gethealth();
    cout<<h1.getlevel();



    hero *a = new hero;
    cout<<"Level is"<<a->gethealth();
return 0;
}