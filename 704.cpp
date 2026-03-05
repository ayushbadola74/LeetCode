#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int val)
{
    int start=0;
    int end=n-1;
    while(start <= end)
    {
        int mid=start+(end-start)/2;
        if(val==arr[mid])
        {
            return mid;
        }
        else if(val<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
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
    int result=binarysearch(arr,n,val);
    cout<<result;
   return 0;
}