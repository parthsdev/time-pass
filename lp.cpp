#include<bits/stdc++.h>
using namespace std;
bool ismatching(char a,char b)
{
    if (a=='{' && b=='}'|| a=='[' && b==']'  || a=='(' && b==')')
    {
       return true;
    }
    
}
bool isbanced(string str)
{
    stack<char>s;
   
    for (int i = 0; i < s.size(); i++)
    {
     if (str[i]=='('|| str[i]=='['|| str[i]=='{')
     {
         s.push(str[i]);
     }
     else
     {
        if (s.empty()==true)
        {
            return false;
        }
        else if (ismatching(s.top(),str[i])==false)
        {
           return false;
        }
        
        else
        {
            s.pop();
        }
        
     }
     
        
    }
    
}
int main()
{

   

return 0;
}