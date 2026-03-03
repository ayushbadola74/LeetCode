#include<iostream>
using namespace std;
int pivot(int arr[],int n)
{
    //finding total sum
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=arr[i];
    }
    //right sum
    int leftsum=0;
    for(int i=0;i<n;i++)
    {
        int rightsum=totalsum-leftsum-arr[i];
       
        if(leftsum==rightsum)
        {
            return i;
        }
        leftsum+=arr[i];
    }
return -1;
}
int main()
{
    int n;
    cin>>n;;

    int arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<pivot(arr,n);
   return 0;
}