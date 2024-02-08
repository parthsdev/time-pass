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
   int arr[4];
   for (int i = 0; i < 4; i++)
   {
       cin>>arr[i];
   }
   
   sort(arr,arr+4);
   cout<<arr[3]-arr[0]<<" "<<arr[3]-arr[2]<<" "<<arr[3]-arr[1];
   return 0;
   
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
