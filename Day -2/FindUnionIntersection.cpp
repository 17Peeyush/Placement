//Time Complexity: O(n+m)
//Auxillary Space: O(n+m)
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void find(vector<int>&a1,vector<int>&a2,vector<int>&uni,vector<int>&inter)
{
    unordered_map<int,int>mp;
    for(auto x: a1)
    {
        if(mp.find(x)!=mp.end() && mp[x]==1)
            continue;
        else
        mp[x]++;
    }
    for(auto x: a2)
    {
        mp[x]++;
    }
    for(auto x: mp)
    {
        uni.push_back(x.first);
        if(mp[x.second]>1)
        inter.push_back(x.first);
    }
}
int main()
{
    int n,m; 
    cin>>n>>m;
    vector<int> a1(n),a2(m);
    for(int i=0;i<n;i++)
        cin>>a1[i];
    for(int i=0;i<m;i++)
        cin>>a2[i];
    vector<int>uni;
    vector<int>inter;
    find(a1,a2,uni,inter);
    cout<<"\nUnion:";
    for(auto x: uni)
        cout<<x<<" ";
    cout<<"\nIntersection:";
    for(auto x: inter)
        cout<<x<<" ";
    return 0;
}
