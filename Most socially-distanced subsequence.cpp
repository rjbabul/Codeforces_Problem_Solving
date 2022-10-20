#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a[100005];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        vector<int > vt;
        for(int i=0;i<n;i++){
            if(i==0 || i==n-1) vt.push_back(a[i]);
            else{
                if(a[i]>a[i-1] != a[i]<a[i+1]) vt.push_back(a[i]);
            }
        }
        cout<<vt.size()<<endl;
        for(int i=0;i<vt.size();i++){
            cout<<vt[i]<<" ";
        }
        cout<<endl;
    }
    return 0;


}
