#include<bits/stdc++.h>
using namespace std;
void kth_largest_element(int k)
{

    int n;std::cin>>n;
    int arr[n];
     priority_queue<int>pq;

    for (int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }
    
    int count=0;
 
   
    while (!pq.empty() )
    {
        if(count==k)break;
        count++;
       std:: cout<<pq.top()<<" ";
        pq.pop();
    }
    
     
}
int main()
{
    // priority_queue<int>pq;
    // pq.push(1);
    // pq.push(2);
    // pq.push(3);

    // while (!pq.empty())
    // {
    //    std:: cout<<pq.top();
    //    pq.pop();
    // }
    //  priority_queue<int , vector<int> , greater<int>>pqq;

    //  pqq.push(1);
    //  pqq.push(2);
    //  pqq.push(3);

    //  while (!pqq.empty())
    //  {
    //     std::cout<<pqq.top();
    //     pqq.pop();
    //  }
     kth_largest_element(2);

return 0;
}