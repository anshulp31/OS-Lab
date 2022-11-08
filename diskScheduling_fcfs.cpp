#include<iostream>
using namespace std;
int main()
{
    int initial;
    int n;
    int seek;
   
    cout<<"enter the no. of process:";
    cin>>n;
    cout<<"enter intial value:";
     cin>>initial;
    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    seek=abs(initial-arr[0]);
    for(int i=1;i<n;i++)
    {
        seek=seek+abs(arr[i-1]-arr[i]);
    }
    cout<<seek;
}