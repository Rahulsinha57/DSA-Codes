#include<iostream>
using namespace std;
int duplicate(int arr[],int n){
    int ans=0;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        ans=ans^i;
        
    }
    return ans;
    
}
//input ko hamesha n-1 tak he lena hai
int main(){
    int n=5;
    int arr[5];
    cout<<"enter the array element"<<endl;
    for (int i = 0; i < n; i++)
    {
    cin>>arr[i];
    }
    int print=duplicate(arr,n);
    cout<<endl<<"dupicate element is"<<" "<<print;

}