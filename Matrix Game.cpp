#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m ;
    int a[100][100];
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin>>a[i][j];
        }
        int row=0, col=0;
        int sum=0;
        for(int i=0;i<n;i++){
                sum=0;
            for(int j=0;j<m;j++) sum+= a[i][j];
            if(sum==0) row++;
        }

        for(int i=0;i<m;i++){
                sum=0;
            for(int j=0;j<n;j++) sum+= a[j][i];
            if(sum==0) col++;
        }
        int ans = min(row, col);
        if(ans%2==1){
            cout<<"Ashish"<<endl;
        }
        else cout<<"Vivek"<<endl;
     }
    return 0;
}
