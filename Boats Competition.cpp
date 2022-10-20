 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a[10000];

    cin>>t;
    while(t--){    vector< int > vt;
        cin>>n;
        for(int i=0;i<n; i++){
            cin>>a [i];
        }
         sort(a, a+n);

        int s = n*2, mx =0;
        for(int i=2;i<=s; i++){

            int ans=0,j=0, k=n-1;
            while(j<k){

                if(a[j]+a[k]==i) ans++, j++, k--;
                else if(a[j]+a[k]>i) k--;
                else j++;
            }

            mx = max(mx, ans);

        }
        cout<<mx<<endl;

    }
    return 0;
}
