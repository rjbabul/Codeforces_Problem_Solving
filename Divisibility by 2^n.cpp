#include<bits/stdc++.h>
using namespace std;
#define mx 200005
int set_bit_cnt[mx+1];
void seive()
{
    memset(set_bit_cnt, 0, sizeof(set_bit_cnt));
    int set_bit=2;
    int cnt=1;
    while(set_bit <mx)
    {
        set_bit_cnt[set_bit]=cnt;
        for(int i=set_bit; i<mx; i+=set_bit)
        {
            set_bit_cnt[i]=cnt;
        }
        cnt++;
        set_bit= set_bit*2;
    }
}
int main()
{
    int t, n;
    long long int a[200005];
    seive();
    cin>>t;
    while(t-- && cin>>n)
    {

        priority_queue<int > q;
        int set_bit=2;
        int  bit_cnt=n,ans=0;
        long long int product=1;

        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            product=product*a[i];
            if(set_bit_cnt[i]>0)
            {
                q.push(set_bit_cnt[i]);
            }

            while(product%2==0 && bit_cnt)
            {
                product= product/2;;
                bit_cnt--;
            }

        }

        while(product%2==0 && bit_cnt)
        {
            product= product/2;;
            bit_cnt--;
        }
        while(!q.empty() && bit_cnt>0)
        {
            ans++;
            bit_cnt= bit_cnt - q.top();
            q.pop();
        }
        if(bit_cnt>0)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
    }

    return 0;
}
