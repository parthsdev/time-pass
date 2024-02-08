/*#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void merge(int arr[],int n,int brr[],int m)
{
    int i=n-1;int j=0;
    while (i>=0 && j<m)
    {
        if (arr[i]>brr[j])
        {
            swap(arr[i],brr[j]);
            i++;j--;
        }
        else
        {
            break;
        }
    }
    sort(arr,arr+n);
    sort(brr,brr+m);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    for (int i = 0; i < m; i++)
    {
        cout<<brr[i]<<" ";
    }
    
    
}
#define boast ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
      int t;
       cin>>t;
      while(t--)
{
   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
   int m;cin>>m;int brr[m];
   for (int i = 0; i < m; i++)
   {
       cin>>brr[i];
   }
   merge(arr,n,brr,m);

}

 cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define boast ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
    cout<<"Enter the total number of testcases:"<<"\n";
      int t;
       cin>>t;
      while(t--)
{
    cout<<"Enter the size of array:"<<"\n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"ENTER ELEMENTS OF ARRAY"<<"\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"ENTER SUM OF WHICH YOU WANT TO FIND THE SUM IS PRESENT FOR NOT PAIR WISE:"<<"\n";
    int sum;cin>>sum;
    int i=0;
    int j=n-1;
    bool flag=false;
   while (j>=i)
   {
       if (arr[j]+arr[i]==sum)
       {
           flag=true;
           break;
       }
       else if (arr[j]+arr[i]>sum)
       {
           j--;
       }
       else
       {
           i++;
       }
       
   }
   if (flag)
   {
       cout<<"ELEMENTS FOUND"<<"\n";
   }
   else
   {
       cout<<"ELEMENTS ARE NOT PRESENT"<<"\n";
       
   }
   

}

 cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}*/

// ALTERNING +VE/-VE
/*#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define boast ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
      int t;
       cin>>t;
      while(t--)
{
     int n;cin>>n;
     int arr[n];
     int temp[n+5];
     int pivot=0;
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }
     int index=0;
     for (int i = 0; i < n; i++)
     {
        if (arr[i]>=0)
        {
            temp[index]=arr[i];
           index++;
        }
       
        
         
     }
     for (int i = 0; i < n; i++)
     {
        if (arr[i]<=0)
        {
           temp[index]=arr[i];
            index++;
        }
       
        
         
     }
     for (int i = 0; i < index; i++)
     {
         cout<<temp[i]<<" ";
     }
     

}

 cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}*/







/*#include<bits/stdc++.h>
using namespace std;
void partion(int arr[],int l,int h,int p)
{
    int temp[h-l+1];
    int index=0;
    for (int i = l; i <=h; i++)
    {
       if (arr[i]<=arr[p])
       {
           temp[index]=arr[i];
           index++;
       }
       
    }
    for (int i = l; i <=h; i++)
    {
        if (arr[i]>=arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
        
    }
   
    for (int i = 0; i < h; i++)
    {
        cout<<temp[i]<<" ";
    }
    
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int p,l,h;
    cin>>p>>l>>h;
    partion(a,l,h,p);
return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long 
#define boast ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
      int t;
       cin>>t;
      while(t--)
{

    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int i=0;
    int j=n-1;
    while (j>=i)
    {
        if (a[j]>0 && a[i]<0)
        {
            swap(a[i],a[j]);
            j--;i++;
        }
        

      else if (a[i]>=0 && a[j]<0)
      {
          i++;j--;
      }
      else if (a[i]>0 )
      {
          i++;
      }
      else if(a[j]<0)
      {
          j--;
      }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    


}

 cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back;
#define boast ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
    
      int t;
       cin>>t;
      while(t--)
{
  int n,m,k1;
  cin>>n>>m>>k1;
  int a[n];
  int b[m];
  int c[k1];
  for (int i = 0; i < n; i++)
  {
      cin>>a[i];
  }
  for (int i = 0; i < m; i++)
  {
      cin>>b[i];
  }
  for (int i = 0; i < k1; i++)
  {
      cin>>c[i];
  }
  int i=0, j=0, k=0;
  vector<int>v;
  while (i<n && j<m && k<k1)
  {
      if (a[i]==a[j] && a[j]==c[k])
      {
          v.push_back(a[i]);
          i++;j++;k++;
      }
      else if (a[i]<a[j])
      {
          i++;
      }
      else if (b[j]<c[k])
      {
          j++;
      }
      else
      {
          k++;
      }
  }
  
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}


}

 cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}*/


