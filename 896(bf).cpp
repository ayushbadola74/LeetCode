#include<iostream>
#include<vector>
using namespace std;
bool monolithic(vector<int>& nums)
{
    int inc=0;
    int dec=0;

    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i]<=nums[i+1])
        {
            inc ++;
        }
        if(nums[i]>=nums[i+1])
        {
            dec++;
        }
    }
    
    if(inc>0 && dec=0)
    {
        return true;
    }
    else if( dec>0 && inc=0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
   return 0;
}