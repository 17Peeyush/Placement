//Time Complexity: O(n^2)
//Auxillary Space: O(1)
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int Richest(vector<vector<int>> nums)
{
    int maxsum=0,customer=0,sum;
    for(int i=0;i<nums.size();i++)
    {
        sum=0;
        for(int j=0;j<nums[0].size();j++)
            sum+=nums[i][j];
        if(sum>maxsum)
        {
            maxsum=sum;
            customer=i+1;
        }
    }
    return customer;
    
}
int main()
{
    int r,c,customer; 
    cin>>r>>c;
    vector<vector<int>>account(r,vector<int>(c));
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
        cin>>account[i][j];
    customer=Richest(account);
    cout<<customer;
    return 0;
}
