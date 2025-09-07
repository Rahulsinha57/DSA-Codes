#include <iostream>
using namespace std;
int BinarySearch(int arr[],int n,int item){
  int start=0;
  int end=n-1;
  //int mid=start +(end-start)/2;//calculating mid
  while (start<=end)
  {
    int mid=(start +end)/2;//calculating mid
    if(arr[mid]==item){    //cheking the condition 
      return mid;
    }
    if(item>arr[mid]){    //mid k right side ko cheake karna start karo
      start=mid+1;
    }
    else{
      end=mid-1;
    }
    //mid=(start+end)/2;
  }
  return -1;
}
int main(){
  int n=6;
  int arr[6]={1,2,3,4,5,45};
  int item=45;
  int call=BinarySearch(arr,n,item);
  cout<<"The element" <<" " <<item<< " "<<"found at index "<<call<<endl;

}