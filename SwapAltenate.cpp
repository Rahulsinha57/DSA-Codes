#include<iostream>
using namespace std;
void Print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    cout<<" ";
    
}

void SwapAllternate(int arr[],int n){
    for (int i = 0; i < n; i+=2)
    {
        if (i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}
void Input(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}
int main(){
    int n=5;
    int arr1[5];
    cout<<"enter the array 1 element"<<endl;
    Input(arr1,n);
    cout<<"new array is"<<endl;
    SwapAllternate(arr1,n);
    Print(arr1,n);

    int c=6;
    int arr2[5];
    cout<<"enter the array 2 element"<<endl;
    Input(arr2,c);
    cout<<"new array is"<<endl;
    SwapAllternate(arr2,c);
    Print(arr2,c);
}