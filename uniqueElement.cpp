#include<iostream>
using namespace std;
/*void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<ans;
    }
    
}*/
int Unique(int arr[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
    
}

int main(){
    int n=5;
    int arr[5];
    cout<<"enter the number";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   int unique= Unique( arr,n);
   cout<<"output is:"<<unique<<endl;
    //print(arr,n);

}