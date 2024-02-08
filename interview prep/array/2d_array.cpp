#include<bits/stdc++.h>
using namespace std;
const int R = 4, C = 4;
void printSnake(int mat[R][C])
{
    for (int i = 0; i < R; i++)
    {
        if(i%2==0)
        {
            for (int j = 0; j < C; j++)
            {
                cout<<mat[i][j];
            }
            
        }
        else 
        {
            for (int i = C-1; i >=0; i--)
            {
                cout<<arr[i][j];
            }
            
        }
    }
    
}

const int R = 4, C = 4;
void printSnake(int mat[R][C])
{
    for (int i = 0; i < C; i++)
    {
        cout<<arr[0][i];
    }
    for (int i = 1; i < R; i++)
    {
        cout<<arr[0][C-1];
    }
   for (int j = 0; j < count; j++)
   {
    
   }
   
    
}
void transpose(int arr[C][R])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j< m; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
        
    }
    
}
void 90(int arr[C][R])
{
     for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j< m; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        int low=0;
        int high=n-1;
        while (low<high)
        {
            swap(arr[low][i],arr[high][i]);
        }
        
    }
    
}
void transpose(int arr[C][R])
{
    int top=0;
    int left=0;
    int bottom=R-1;
    int right=C-1;
    while (top<=bottom && left<=right )
    {
        for (int i = left; i <= right; i++)
        {
            cout<<arr[top][i]<<" ";
        }
        top++;
        for (int i = top; i <=bottom; i++)
        {
            cout<<arr[i][right];
        }
        right--;

         for (int i = right; i =left; i--)
        {
            cout<<arr[bottom][i];
        }
        bottom--;
        for (int i = bottom; i >=top; i--)
        {
           cout<<arr[i][left]<<endl;
        }
        left++;
        
        
        
    }
    
}
int main()
{


return 0;
}