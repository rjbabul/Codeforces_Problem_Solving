#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    int a[1005];
    int t, n ;
    cin>>t;
    while(t-- && cin>>n)
    {
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a, a+n);
        int cnt =0;
        for(int i=0;i<n;i++)
        {
            if(i+1<n && a[i+1]==1)
            {
                cnt++;
                i++;
            }
            else cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
