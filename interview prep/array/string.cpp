#include<bits/stdc++.h>
using namespace std;
bool palindrome_check(string s)
{
    int n = s.size();

    int low=0;
    int high=n-1;

    while (high>low)
    {
        if(s[low]!=s[high])
        {
            return false;
        }
        high--;low++;

    }
    return true;

}
bool anagram(string s1 , string s2)
{
    int n = s1.size();int m =s2.size();
    if(n!=m)return false;
    unordered_map<char,int>ump;
    for (int i = 0; i < n; i++)
    {
        ump[s1[i]]++;
    }
    
    for (int i = 0; i < m; i++)
    {
        ump[s2[i]]--;
    }
    for(auto it:ump)
    {
        if(it.second!=0)return false;
    }
}
int main()
{
    std::cout<<palindrome_check("madam");
return 0;
}