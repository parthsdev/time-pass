#include<bits/stdc++.h>
using namespace std;
class hero
{
 public:
 
 int health;
 char level;

 void print(int heath1,char level1)
 {
    health=heath1;
    level=level1;
 }
 void print_ans()
 {
    cout<<health<<" "<<level;
 }

};



int main()
{
    hero h1;
    h1.print(5,'A');
    h1.print_ans();

return 0;
}