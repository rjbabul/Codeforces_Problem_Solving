#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    while(cin>>x1>>y1>>x2>>y2){
        if(x1== x2 || y1==y2){
                int d=max(abs(x2-x1), abs(y2-y1));
            if(x1==x2){
                cout<<x1+d<<" "<<y1 <<" "<<x2+d<<" "<<y2<<endl;
            }
        else{
            cout<<x1 <<" "<<y1+d <<" "<<x2<<" "<<y1+d<<endl;
        }
        }

        else if(abs(x2-x1)!= abs(y2-y1))cout<<"-1"<<endl;
        else{
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
        }
    }
    return 0;
}
