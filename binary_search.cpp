#include<bits/stdc++.h>
using namespace std;
void binary(vector<int>&arr,int k)
{
    int low=0;
    int n=arr.size();
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==k)
        {
            cout<<"Element found";
        }
        else if(arr[mid]<k)
        {
            low=mid+1;
        }
        else if(arr[mid]>k)
        {
            high=mid-1;
        }
    }
}
void first_sorted(int n , vector<int>&arr)
{
    int low=0;
    int high=n-1;

    while(low < high)
    {
        int mid=low+high/2;
        if(arr[mid]<k)
        {
            low=mid+1;
        }
        else if(arr[mid]>k)
        {
            high=mid-1;

        }
        else 
        {
            if(arr[mid]==arr[mid-1] || arr[mid]==0)
            {
                high=mid-1;
            }
            else
            {
                return arr[mid];
            }
        }
    }

}
void last_occurance()
{
    int low=0;
    int high=n-1;
    while(high>low)
    {
        int mid=low+high/2;
       if(arr[mid]<k)
       {
        low=mid+1;
       }
       else if(arr[mid]>k)
       {
        high=mid-1;
       }
       else 
       {
        if(arr[mid]==arr[mid+1] )
        {
            low=mid+1;
        }
        else
        {
            return arr[mid];
        }
       }
    }
}
int square_root(int n)
{
    int low=1;
    int ans;
    int high=n;
    while(low<=high)
    {
        int mid=(low/high)/2;
        int midsq=mid*mid;
        if(midsq==n)
        {
            cout<<"Found";

        }
        else if(midsq>n)
        {
           high=mid-1;
        }
        else
        {
            ans=mid;
            low=mid+1;
        }
    }
}

void search()
{
    vector<int>arr;
    int n = arr.size();
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid = low+high/2;
       if(arr[mid]==k)return mid;
       if(arr[low]<arr[mid])
       {
        if(n >=arr[low] && n<=arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
       }
       else 
       {
        if(n >arr[mid] && n<=arr[high])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
       }

    }


}
int main()
{
return 0;
}
this->