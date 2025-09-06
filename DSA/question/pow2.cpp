#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"enter the number";
    int n;
    cin>>n;
    for (int i = 0; i <=30; i++)
    {
       int ans=pow(2,i);
       if (ans==n)
       {
        cout<<"true";
        break;
       }
       if (n<i)
       {
        cout<<"false";
        break;
       }
       
       
    }
    return 0;
}