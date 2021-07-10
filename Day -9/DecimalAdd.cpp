#include <bits/stdc++.h>
#include <iostream>

using namespace std;
string value(int n)
    {
        return to_string(n%10);
    }
    int getcarry(int n)
    {
        return n/10;
    }
    string adBin(string a,string b)
    {
        int ca,cb,carry=0;
        string ans="";
        int al=a.length(),bl=b.length();
        for(int i=1;i<=b.length();i++)
        {
            if((al-i)>=0)
            {
                  
                ca=a[a.length()-i]-48;
            }
            else
            {
                ca=0;
            }
            cb=b[bl-i]-48;
            ans=value(ca+cb+carry)+ans;
            carry=getcarry(ca+cb+carry);
        }
        if(carry==1)
            ans="1"+ans;
        return ans;
    }
    string addBinary(string a, string b) {
        if(a.length()<=b.length())
        {
            return adBin(a,b);
        }
            return adBin(b,a);
    }
int main()
{
    cout<<addBinary("1234","456154");

    return 0;
}
