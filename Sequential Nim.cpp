
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,t;
    long long int a[100006];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i =0; i< n; i++){
            cin>>a[i];
        }
        int ax=0, bx=0,flag=0;
        char ch='b';
         for(int i =0; i< n; i++){
                if(i==n-1){
                    if(ch=='a') bx++;
                    else ax++;

                }
           else if(a[i]>1){
             if(ch=='b')cout<<"First"<<endl;
             else cout<<"Second"<<endl;
             flag=1;
             break;
           }
           else{
            if(ch=='b'){
                ax++;
                ch='a';
            }
            else {
                bx++;
                ch='b';
            }
           }
        }
        if(flag==0){
            if(ax>bx)cout<<"First"<<endl;
             else cout<<"Second"<<endl;
        }
    }

    return 0;
}
