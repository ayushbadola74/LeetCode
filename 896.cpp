#include<iostream>
#include<vector>
using namespace std;
bool monlithic(vector<int>& nums)
{
    bool inc =true;
    bool dec=true;
    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i]<nums[i+1])
        {
            dec=false;
        }
        if(nums[i]>nums[i+1])
        {
            inc=false;
        }

    }
    return inc||dec;
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
      cout << boolalpha << monlithic(nums);
   return 0;
}