#include<iostream>
#include<vector>
#include<algorithm>
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
    sort(arr.begin(),arr.end());
    vector<int>ans;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            ans.push_back(arr[i]);
            i++;
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

   return 0;
}