#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    int n, m;
    cin >> n >> m;
    int arr[n];
    int brr[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    for (int i = 0; i < m; i++)
    {
        if (s.find(brr[i]) != s.end())
        {
            res++;
            s.erase(brr[i]);
        }
    }

    return 0;
}

bool subarraywithzer0()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum == 0 || s.find(arr[i]) != s.end())
        {
            return true;
        }



        

        s.insert(arr[i]);
    }
}