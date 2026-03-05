#include<iostream>
using namespace std;
int remele(int arr[],int n,int val)
{
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=val)
        {
            arr[index]=arr[i];
            index++;
        }
    }
    return index;
}
int main()
{
    int n;
    cin>>n;
    int val;
    cin>>val;
    int arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int newsize=remele(arr,n,val);

    for(int i=0;i<newsize;i++)
    {
        cout<<arr[i]<<" ";
    }
   return 0;
}