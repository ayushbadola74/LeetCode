#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   for(int i=0;i<n-1;i+=3)
   {
      if(arr[i]!=arr[i+1])
      {
         cout<<arr[i];
      }
   }
   cout<<arr[n-1];
   return 0;
}