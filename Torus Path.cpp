#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum, a[201][201];
    int n;
    while(cin>>n)
    {
        sum=0;
        long long int ans = INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {

                cin>>a[i][j];

                sum+= a[i][j];
                if(i+j==n-1)ans=min(ans,a[i][j]);
            }
        }
        //cout<<sum<<endl;
         if(n>1)
            sum-= ans;

        cout<<sum<<endl;
    }
    return 0;
}
