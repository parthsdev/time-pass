#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)
using namespace std;

void merge(int arr[],int l,int mid,int r){
    int a=mid-l+1;
    int b=r-mid;

    int x[a],y[b];
    for(int i=0;i<a;i++){
        x[i]=arr[l+i];
    }

    for(int i=0;i<a;i++){
        y[i]=arr[mid+1+i]; 
    }

    int i=0,j=0,k=l;
    while(i<a && j<b){
        if(x[i]<y[j]){
            arr[k]=x[i];
            k++; i++;
        }

        else{
            arr[k]=y[j];
            k++; j++;
        }
    }
    while(i<a){
            arr[k]=x[i];
            k++; i++;
    }
    while(i<b){
        arr[k]=y[j];
            k++; j++;
    }
}

void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

         merge(arr,l,mid,r);
    }
}

int main(){

    clock_t start_time,end_time;
    start_time = clock();

    // your process
    ll n;
    cout<<"Enter how many elements you want to insert in the array"<<endl;
    cin>>n;
    int arr[n];
   f(i,0,n){
        arr[i]=rand();
    }

   mergeSort(arr,0,n-1);

    end_time=clock();
    cout<<"Elements after sorting are:"<<endl;
    f(i,0,n){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Time Taken "<<double(end_time - start_time)/CLOCKS_PER_SEC<<endl;
    return 0;
}