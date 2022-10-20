#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        n= (n%2==0)?n/2:n/2+1;
        cout<<n<<endl;
    }
    return  0;
}
