//Time Complexity: O(n)
//Auxillary Space: O(n)

#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int numPair(vector<int> nums)
{
    int p=0;
    unordered_map<int,int> mp;
    for(auto x:nums)
    {
            mp[x]++;
    }
    for(auto x:mp)
       p+=x.second-1;
    return p;
}
int main()
{
    int n,pair; 
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    pair=numPair(nums);
    cout<<pair;
    return 0;
}
