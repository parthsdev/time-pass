#include <bits/stdc++.h>
using namespace std;
bool balanced_parelnthis(string s)
{
    int n = s.size();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else if (st.top() == '(' && s[i] == ')' || st.top() == '[' && s[i] == ']' || st.top() == '{' && s[i] == '}')
        {
            st.pop();
        }
       else if(st.empty())
       {
         st.push(s[i]);
       }
    }
    if(st.empty())return true;
    else return false;
}

void previos_greater(int arr[],int n )
{
    stack<int>st;
    st.push(arr[0]);
    std::cout<<"-1"<<endl;

    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && st.top()<=arr[i])
        {
            st.pop();
        }
        int pg=(st.empty()) ? -1:st.top();
        std::cout<<pg;
        st.push(arr[i]);
        
    }
    

}
void next_greaterelement(int arr[],int n)
{
    stack<int>st;
    int last=arr[n-1];
    st.push(last);
    std::cout<<"-1"<<endl;
    for(int i=n-2;i>=0;i--)
    {
       while (!st.empty() && arr[i]>= st.top())
       {
        st.pop();
       }

       int ans= (st.empty()) ? -1:st.top();

       std::cout<<ans;
      st.push(arr[i]);

  


       
    }
}
string remove_duplicates(string s)
{
    int n = s.size();
    stack<char>st;
    for (int i = 0; i < n; i++)
    {
        if(st.empty() || st.top()!=s[i])
        {
            st.push(s[i]);
        }
        else
        {
            st.pop();
        }
        
    }
    
}
string adjacent2(string s,int k)
{
    int n = s.size();

    vector<pair<char,int>>st;

    for (int i = 0; i < n; i++)
    {
        if(st.size()==0 || st.back().first!=s[i])
        {
            st.push_back({s[i],1});
        }

        else if(s[i]==st.back().first)
        {
            st.pop_back();
        }

        if(st.back().second==k)
        {
            st.pop_back();
        }
    }
    

}
int main()
{
    return 0;
}