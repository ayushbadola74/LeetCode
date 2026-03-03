#include<iostream>
#include<vector>
using namespace std;
vector<int>Twosum(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout << "[" << i << ", " << j << "]" << endl;
            }
        }
    }
    return {};
}
int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    Twosum( arr,n, target);
    
   return 0;
}