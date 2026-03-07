#include<iostream>
#include<vector>
using namespace std;
int maxcount(vector<int>& nums)
{
    int pos=0;
    int neg=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>0)
        {
            pos++;
        }
        if(nums[i]<0)
        {
            neg++;
        }
    }
    return max(pos,neg);

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
    cout<<maxcount(nums);
   return 0;
}