/*#include<iostream>
using namespace std;
int main()
{
    int tc;
    int n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        if(n!=1&&n!=2&&n!=4&&n!=5&&n!=11)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
*/
#include<iostream>
using namespace std;
int main()
{
    int tc;
    int n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int flag=0;
        for(int i=0;i<=100;i++)
        {
            for(int j=0;j<=100;j++)
            {
                if(i*3+7*j==n)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;

}
