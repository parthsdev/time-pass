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
///priority_queue<int> pqq;
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
    
    
        int n1;
        
        ll a;cin>>a;
        for (int i = a; i <=1100; i++)
        {
            int x=i;
            ll sum=0;
            while(x!=0)
            {
                int k=x%10;
                sum=sum+k;
                x=x/10;
            }
            if(sum%4==0)
            {
               n1=i;
               break;
            }
        }
        cout<<n1<<endl;
        
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
