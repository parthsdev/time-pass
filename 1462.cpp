#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forr(i, a, b) for (int i = a; i < b; i++)
#define reversefor(i, a, b) for (int i = b; i >= a; i--)
unordered_map<int, int> ump;
unordered_set<int> usp;
#define boast                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
/// priority_queue<int> pqq;
priority_queue<int, vector<int>, greater<int>> pqq;
stack<int> st;
queue<int> q;
pair<int, int> p;
#define pb push_back
#define pp pop_back;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minheap;
/***************************************************************************/
int main()
{
    // boast;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> v(n);
        vector<int> ans(n);

        int a, b;

        vector<vector<int>> ans(n, vector<int>(n));
        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int left = 0;
        int right = n - 1;
        if(right%2==0)
        {
            right--;
            left++;
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
                ans[i] = v[left++];
            }
            else
            {
                ans[i] = v[right--];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n-2; i++)
    {
        int low=i+1;
        int high=n-1;
        while(high>low)
        {
            if(arr[i]+arr[high]+arr[low]==sum)return true;
            else if(arr[i]+arr[high]+arr[low]<sum)
            {
                high--;
            }
            else if(arr[i]+arr[high]+arr[low]>sum)
            {
                low++;
            }


           
        }
    }
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
void