#include<iostream>
using namespace std;
void readArr(int arr[] ,int n){
    //int n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}
void printArr(int arr[],int n){
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }

}

int main(){
    int n=5;
    int arr[n];
    readArr(arr,n);
    printArr(arr,n);

    int arr2[n];
    readArr(arr2,n);
    printArr(arr2,n);
    return 0;
}