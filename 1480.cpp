#include<iostream>
#include<vector>
using namespace std;
vector<int> runningSum(vector<int>& nums) 
{
   int sum=0;
   for(int i=0;i<nums.size();i++)
   {
    sum+=nums[i];
    nums[i]=sum;
   }
    return nums;
}
int main()
{
    int n;
    cin>>n;

    vector<int>nums(n);
    for(int i=0;i<nums.size();i++)
    {
        cin>>nums[i];
    }
    
    vector<int> result=runningSum(nums);

    for(int i=0;i<nums.size();i++)
    {
        cout<<result[i]<<" ";
    }
   return 0;
}
