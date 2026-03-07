#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int majority(vector<int>& nums)
{
   sort(nums.begin(),nums.end());
   return nums[nums.size()/2];
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
    cout<<majority(nums);
   return 0;
}