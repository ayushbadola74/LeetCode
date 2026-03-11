#include<iostream>
#include <vector>
using namespace std;
vector<vector<int>> pascal(int num)
{
    vector<vector<int>> ans;

    for(int i=0;i<num;i++)
    {
        vector<int> row(i+1);

        row[0]=row[i]=1;

        for(int j=1;j<i;j++)
        {
        row[j] = ans[i-1][j-1] + ans[i-1][j];   
        }
        ans.push_back(row);
    }
    return ans;
}

int main()
{
    int num;
    cin>>num;

    
    vector<vector<int>> result = pascal(num);

    for(int i=0;i<result.size();i++)
    {
        for(int j=0;j<result[i].size();j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
   return 0;
}