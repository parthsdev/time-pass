#include<bits/stdc++.h>
using namespace std;
void binary_search(int arr[],int n )
{
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==element)
        {
            cout<<"Found";
        }
        else if(arr[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    
}

void first_occurance(int arr[],int n )
{
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid=low+high/2;

        if(x>arr[mid])
        {
            low=mid+1;
        }
    }
    
}
void merge(int arr[],int l , int r,int mid)
{
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i]=arr[l+i];
    }
    for (int j = 0; j < n2; j++)
    {
        b[j]=arr[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;k++;
        }
        else
        {
            arr[k]=b[j];
            k++;j++;
        }
    }

    while(i<n1)
    {
        arr[k]=a[i];
        k++;i++;
    }

     while(j<n2)
    {
        arr[k]=b[j];
        k++;j++;
    }
}
void merge_sort(int arr[],int l , int r)
{
  if(l<r)
  {
    int mid=(l+r)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);

    merge( arr,l,r,mid);

  }


}



int partition(int arr[],int l,int r)
{
   int pivot=arr[r];
   int i = l-1;
   for (int j = 0; j< r; j++)
   {
      if(arr[j]<pivot)
      {
        i++;
        swap(arr[i],arr[j]); 
      }
   }
   swap(arr[i+1],arr[r]);

   return i+1;

}









void quick_sort(int arr[],int l  ,int r)
{
    if(l<r)
    {
        int pi=partition(arr,l,r);

        quick_sort(arr,l,pi-1);
        quick_sort(arr,pi+1,r);
    }
}
int main()
{
return 0;
}