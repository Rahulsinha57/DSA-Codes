#include<iostream>
using namespace std;
int Minvalue(int arr[],int n){
    int min=INT_MAX;
   for (int i = 0; i < n; i++)
   {
    if (arr[i]<min)
    {
        min=arr[i];
    }
   }
   return min;
}

int Maxvalue(int arr[],int n){
    int max=INT_MIN;
   for (int i = 0; i < n; i++)
   {
    if (arr[i]>max)
    {
        max=arr[i];
    }
   }
   return max;
}

int main(){
    int n=10;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"maxvalue is"<<Maxvalue(arr,n)<<endl;
    cout<<"minvalue is"<<Minvalue(arr,n)<<endl;

}