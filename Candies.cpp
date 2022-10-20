#include<bits/stdc++.h>
using namespace std;

int main()
{
    sieve();
   long int t, n;
    cin>>t;
    while(t--){
        cin>>n;
       long int s=n;
        set<long int> st;
        set<long int>::iterator it;

        for(long int i=2;i<=sqrt(s);i++){
            if(s%i==0){
                st.insert(i);
                st.insert(n/i);
            }
        }
        if(st.size()==0) cout<<"1"<<endl;
        else
        {
          long  int ans;
            for(it=st.begin(); it!=st.end();it++){
            s=*it;
            long int sum=0;
           for(long int i=s;sum<n;i*=2){
            sum+=i;

           }
        //  cout<<"sum "<<sum<<"   "<<*it<<endl;
           if(sum==n) {
               ans = *it;
               break;
           }
        }
        if(n%ans==0)
        cout<<ans<<endl;
        else cout<<"1"<<endl;

        }
    }
    return 0;
}
