#include<iostream>
#include<vector>
using namespace std;
int maxsum(vector<int>&nums)
{
    int currentsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
        currentsum+=nums[i];
        maxsum=max(currentsum,maxsum);
        if(currentsum<0)
        {
            currentsum=0;
        }
    }
    return maxsum;
}
int main()
{
    int n;
    cin>>n;
   vector<int> nums(n);
    for(int i=0;i<nums.size();i++)
    {
        cin>>nums[i];
    }
    cout<<maxsum(nums);
   return 0;
}