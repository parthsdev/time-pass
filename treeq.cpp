//NAME:PARTH SHARMA
//MIS:112015098
//LAB-4


#include<bits/stdc++.h>
#define ll long long
#define forl(i,x,n) for(ll i=x;i<n;i++)
#define forr(i,x,n) for(ll i=n-1;i>=x;i--)
using namespace std;

int main(){
    ll t;
    cout<<"\nEnter number of testcases: ";
    cin >> t;
    while(t--){
        cout << "\nEnter String: ";
        string s;
        cin >> s;
        map<char, vector<ll>> m;
        bool ans = true;
        forl(i, 0, s.size())
        {
            if (s[i] == 'a')
            {
                m['a'].push_back(i);
            }
            else if (s[i] == 'b')
            {
                m['b'].push_back(i);
            }

        }
    if(s=="")
        cout << "String Accepted" << endl;
    else if(m['a'].size()!=m['b'].size() || m.size()>2)
        cout << "String not Accepted" << endl;
    else if(m['a'].size()==0)
        cout << "String Accepted" << endl;
        
    else{
        ll x = m['a'][m['a'].size() - 1], y = m['b'][0];
        if(x+1==y)
            cout << "String Accepted" << endl;
        else
            cout << "String String not Acceptedt Accepted" << endl;
        }
    }
    return 0;
  }
