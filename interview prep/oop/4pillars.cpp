#include <bits/stdc++.h>
using namespace std;
class human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }

    int setweight(int w)
    {
        this->weight = w;
    }
    void print_weight()
    {
        cout << this->weight;
    }
};

class male : public human
{
public:
    int voice;

    void loud()
    {
        cout << "Male";
    }
};

int main()
{

    male m1;
    m1.setweight(5);
    m1.print_weight();

    return 0;
}