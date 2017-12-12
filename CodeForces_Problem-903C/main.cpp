#include<iostream>
#include<map>
#include<cmath>
using namespace std;
int n,x,r=0;
map<int,int>c;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        c[x]++;
    }
    for(auto i:c)
    {
        r=max(i.second,r);
    }
    cout<<r;
    return 0;
}
