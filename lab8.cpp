/*#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int element)
{
   for (int i = 0; i < n; i++)
   {
     if (arr[i]==element)
     {
       return i;
     }
     
   }
   return -1;
   
}
int main()
{
  cout<<"Enter no of elements"<<endl;
  int n;cin>>n;
  cout<<"enter elements of array"<<endl;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter element to be searched"<<endl;
  int element;cin>>element;
  cout<<search(arr,n,element);
}*/

/*#include <bits/stdc++.h>
using namespace std;
int binary(int arr[], int n, int element)
{
  int low = 0, high = n - 1;
  while (high >= low)
  {
    int mid = (high + low) / 2;
    if (arr[mid] == element)
    {
      return mid;
    }
    else if (arr[mid] < element)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return -1;
}
int main()
{
  cout << "Enter no of elements" << endl;
  int n;
  cin >> n;
  cout << "enter elements of array" << endl;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter element to be searched" << endl;
  int element;
  cin >> element;
  cout << binary(arr, n, element);
  return 0;
}*/
