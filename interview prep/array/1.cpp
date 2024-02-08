#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n )
{
    int low=0;
    int high=n-1;
    while (low<high)
    {
        swap(arr[low],arr[high]);
        high--;
        low++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}
void largest(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
           if(arr[j]>arr[i])
           {
            cout<<arr[j]<<endl;
            break;
           }
        }
        
    }
    
}
void left_rotatebyone(int arr[],int n )
{
    int temp=arr[n-1];
    for (int i = 1; i < n-1; i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }

}
void leader_of_arr(int arr[],int n )
{
    int leader=arr[n-1];
    cout<<leader;
    for (int i = n-2; i >=0 ;i--)
    {
        if(arr[i]>leader)
        {
            leader=arr[i];
            cout<<leader;
        }
    }
    
}
int get_water(int arr[],int n )
{
    int left[n];
    int right[n];
    int res=0;

     left[0]=right[0];
        for (int i = 1; i < n; i++)
        {
            left[i]=max(left[i-1],arr[i]);
        }
        right[n-1]=arr[n-1];

        for (int i = n-2; i <=0; i--) 
        {
          right[i]=max(right[i+1],arr[i]);
        }
        
    for (int i = 0; i < n-1; i++)
    {
        res=res+min(left[i],right[i])-arr[i];
    }
    
    
}


void maxsubarray(int arr[],int n )
{
                    
       int maxi=0;
      for (int i = 0; i < n; i++)
      {
          int curr=0;
          for (int j = 0; j < n; j++)
          {
            curr=curr+arr[j];
            maxi=max(maxi,curr);
          }
          
      }
      
       
}
void max_subarray(int arr[],int n)
{
    int maxending
}

int max_subarray(vector<int>&nums)
{
    int n = nums.size();
    int max_so_far=INT_MIN;
    int max_up_to=0;
    for (int i = 0; i < n; i++)
    {
        max_up_to=max_up_to+nums[i];

        max_so_far=max(max_so_far,max_up_to);

        if(max_up+)

    }
    

}
int odd_even(int arr[],int n )
{
    int curr=1;
    int res=1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]%2==0 && arr[i-1]%2!=0)
        {
            curr++;
            res=max(curr,res);
        }
        else
        {
            curr=1;
        }
    }
    
}
int sliding_window(int n , int arr[],int k )
{
  int curr=0;
  for (int i = 0; i < k; i++)
  {
     curr=curr+arr[i];
  } 
  int res=curr;
  for (int i = k; i < n; i++)
  {
    curr=curr+arr[i]-arr[i-k];
    res=max(res,curr);

  }
  return res;
  
  
}

int subarraygivensum(int arr[],int n)
{
    int current_sum=0;
    for (int i = 0; i < n; i++)
    {
        if(current_sum=arr[i])
        {
            cout<<"Found";
        }
        for (int i = i+1; i < n; i++)
        {
           current_sum=current_sum+arr[j];
        }
        
    }
    
}
bool equilibrium_point(int arr[],int n )
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    int left_sum=0;

    for (int i = 0; i < n; i++)
    {
        sum=sum-arr[i];
        if(left_sum==sum)
        {
            cout<<"Found";
        }

        left_sum=left_sum+arr[i];
        
    }
    
}
int kadane(int arr[],int n)
{
    int max_sum=0;
    int max_upto=0;
    for (int i = 0; i < n; i++)
    {
        max_sum=max_sum+arr[i];
        max_upto=max(max_sum,max_upto);
        if(max_upto<0)
        {
            max_upto=0;
        }
    }
    
}
int sort_colors(int arr[],int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)
    {
       if(mid==0)
       {
        swap(arr[low],arr[high]);
        low++;
        high--;
       }
       else if(mid==1)
       {
         mid++;
       }
       else if(arr[mid]==2)
       {
        swap(arr[high--],arr[mid]);
       }
    }
}
int main()
{

    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // largest(arr,n);
    // reverse(arr,n);
    // left_rotatebyone(arr,n);
    print_subarray(arr,n);
return 0;
}