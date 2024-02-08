#include<bits/stdc++.h>
using namespace std;
void pair_sum(int arr[],int n)
{
    unordered_set<int>ss;
    int total_sum;
    cin>>total_sum;
    for (int i = 0; i < n; i++)
    {
        if(ss.find(total_sum-arr[i])!=ss.end())
        {
            return true;
        }
        else
        {
            ss.insert(arr[i]);
        }
      
    }
    
}
int main()
{

    unordered_set<int>ump;


return 0;
}