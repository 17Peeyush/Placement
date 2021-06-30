//Time Complexity: O(n)
//Auxillary Space: O(1)

#include <bits/stdc++.h>
#include <iostream>

using namespace std;
vector<bool> findCandy(vector<int>kid,int candy)
{
    int maxn=*max_element(kid.begin(), kid.end());
    vector<bool>ans;
    for(auto x:kid)
    {
        if(x+candy>=maxn)
            ans.push_back(true);
        else
            ans.push_back(false);
    }
    return ans;
}
int main()
{
    int n,candy; 
    cin>>n>>candy;
    vector<int> kid(n);
    for(int i=0;i<n;i++)
        cin>>kid[i];
    vector<bool>ans=findCandy(kid,candy);
    for(auto x: ans)
        cout<<x<<" ";
    return 0;
}
