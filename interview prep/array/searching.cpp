#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int element)
{
    int low=0;
    int high=n-1;
     
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==element)
        {
           std:: cout<<"Found";
        }
        else if(arr[mid]<element)
        {
            low=mid+1;
        }
        else if(arr[mid]>element)
        {
            high=mid-1;
        }
    }
    
}

int first_occurance(int arr[],int n ,int element)
{
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid=low+high/2;

        if(arr[mid]<element)
        {
            low=mid+1;
        }
        else if(arr[mid]>element)
        {
            high=mid-1;
        }
        else
        {
            if(arr[mid-1]!=arr[mid])
            {
                return arr[mid];
            }
            else
            {
                high=mid-1;
            }
        }


    }
    
}

int square_root(int number,int element )
{
  int low=1;
  int high=number;
  int ans;
  while (low<=high)
  {
    int mid=(low+high)/2;
    int midsq=mid*mid;
    if(midsq==element)return midsq;
    else if(midsq>element)
    {
       

    }
  }
  
    
}
bool rotated_search(int low,int high,int arr[],int n,int element)
{
    int low=0;
    int high=n-1;
    int x;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==element)return arr[mid];

       else if(arr[low]<=arr[mid])
       {
        if(x>arr[low] && x<=arr[high])
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
        if(x>arr[mid] && x<arr[high])
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