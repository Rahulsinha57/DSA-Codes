#include<iostream>
using namespace std;

int FirstIndex(int arr[],int n,int item){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start +(end-start)/2;
    while(start<=end){
        if (arr[mid]==item)
        {
            ans=mid;
            end=mid-1;
        }
        else if(item>arr[mid])
        {
            start=mid+1;
        }
       // else if (item<arr[mid])
       else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int LastIndex(int arr[],int n,int item){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start +(end-start)/2;
    while(start<=end){
        if (arr[mid]==item)
        {
            ans=mid;
            start=mid+1;
        }
        else if(item>arr[mid])
        {
            start=mid+1;
        }
        else if (item<arr[mid])
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}



int main(){
   int n=6; 
    int arr[]={1,1,2,3,4,5};
    int item=1;
    
    int call1=FirstIndex(arr,n,item);
    cout<<" first index is" " "<<call1<<endl;

    int call2=LastIndex(arr,n,item);
    cout<<" last index is" " "<<call2<<endl;

}