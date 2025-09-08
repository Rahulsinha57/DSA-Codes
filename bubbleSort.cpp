#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                 swap(arr[j],arr[j+1]);
            }
        }
       // swap(arr[minIndex],arr[i]);
    }
}
void printArray(int arr[],int n){
    cout<<"the sorted array is "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n=5;
    int arr[n];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
   BubbleSort(arr,n);
    printArray(arr,n);
    
return 0;
}