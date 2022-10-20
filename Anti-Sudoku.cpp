#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        char a[10][10];
        for(int i=0;i<9; i++){
            for(int j=0;j<9;j++) cin>>a[i][j];
        }
        for(int i=0;i<9; i++){
            for(int j=0;j<9;j++) {
                if(a[i][j]=='1') cout<<'2';
            else cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
