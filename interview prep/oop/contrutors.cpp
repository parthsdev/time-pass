#include<bits/stdc++.h>
using namespace std;
class hero{
    public:
    int health;
    char level;
    hero()
    {
        cout<<"Constructer called";
    }

    hero(int health)
    {
        this->health=health;
    }

};
int main()
{

  hero h1;

return 0;
}