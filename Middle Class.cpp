#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, x;
    cin>>t;
    while(t--){
        cin>>n>>x;
       long long  int sum =0, c=0,p;
        vector<int > vt;
        for(int i=1;i<=n;i++){
            cin>>p;
            if(p>x){
                sum+= p-x;
                c++;
            }
            else vt.push_back(p);
        }

        sort(vt.rbegin(), vt.rend());
        for(int i=0; i<vt.size();i++) {
            if(sum+vt[i]>=x){
                c++;
                sum = sum + vt[i]-x;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
