#include <iostream>

#include <fstream>

using namespace std;

int main()
{
    fstream st; 
    st.open("D:\\Software\\Dev C++\\parth.txt",ios::in|ios::out);   
    if(!st) 
    {
        cout<<"No such file";
    }
    else
    {
        char ch[20];
        while (!st.eof())
        {
            st >>ch;  
            cout << ch;   
        }
        st.close();
    }
    
    return 0;
}