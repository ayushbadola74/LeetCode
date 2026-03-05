#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count =0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            arr[count]=arr[i];
            count++; 
        }
    }
    count =count+1;
    for(int i=0;i<count;i++)
    {
        cout<<arr[i]<<" ";
    }
   return 0;
}