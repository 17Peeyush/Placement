//Any base from 1 to 10 into decimal
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool isInvalid(string nums,int radix)
{
    int n=nums.length();
    for(int i=0;i<n;i++)
    {
        if(nums[i]!='.'&&nums[i]-48>=radix)
        return true;
    }
    return false;
}
double toDeci(string num,int radix)
{
    int n=num.length();
    int point=num.find('.');
    if(isInvalid(num,radix))
        {   cout<<"Invalid radix";
            return -1;}
    double deci_part=0;
    double int_part=0;
    if(point!=-1)
    {
        int idx=0;
        for(int i=point-1;i>=0;i--,idx++)
        {
            int_part+=((num[i]-48)*pow(radix,idx));
        }
        idx=1;
        for(point=point+1;point<n;point++,idx++)
        {
            deci_part+=((num[point]-48)/pow(radix,idx));
        }
    }
    else
    {
         int idx=n-1;
        for(int i=0;i<n;i++,idx--)
        {
            int k=(num[i]-48);
            cout<<k<<" ";
            int_part+=(k*pow(radix,idx));
        }
    }
    return (int_part+deci_part);
}
int main()
{
    int radix;
    string num;
    cin>>num>>radix;
    cout<<"ans"<<toDeci(num,radix);
    return 0;
}
