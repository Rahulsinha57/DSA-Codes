#include<iostream>
using namespace std;
int SumArr(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
    
}

int main(){
    int n=5;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<"sum of array is"<<SumArr(arr,n);
    
}