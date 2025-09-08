#include<iostream>
using namespace std;
bool LinearSearch(int arr[],int n,int item){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==item)
        {
            return 1;
        }
    }
    return 0;
    
}

int main(){
    int n=10,item;
    int arr[10];
    cout<<"enter the  number in array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the item to serach";
    cin>>item;
     bool found=LinearSearch(arr,n,item);
     if (found)
     {
        cout<<"item found"<<endl;
     }
     else{
        cout<<"not found";
     }
     
    
}