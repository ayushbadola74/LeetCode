#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n>>m;
    vector<int>num1(n);
    vector<int>num2(m);
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        cin>>num1[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>num2[j];
    }
    sort(num1.begin(),num1.end());
    sort(num2.begin(),num2.end());
    
    for(int i=0;i<num1.size();i++)
    {
        for(int j=0;j<num2.size();j++)

        {
            if(num1[i]==num2[j])
            {
                ans.push_back(num1[i]);
                break;
            }
        }
    }
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

   return 0;
}