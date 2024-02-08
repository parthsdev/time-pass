#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>s;
    s.push_back("parth");
    s.push_back("hello");
  //  sort(s.begin(), s.end());
   for(int i=0;i<s.size();i++)
   {
       for(int j=0;j<s[i].size();j++)
       {
          cout<<s[i][j];
       }
       cout<<endl;
   }

    
return 0;
}