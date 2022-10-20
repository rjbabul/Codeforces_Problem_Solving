#include<bits/stdc++.h>
using namespace std;
string revers(string str){
   string s;
   for(int i=str.length()-1; i>=0;i--) s+=str[i];
   return s;

}
int main()
{
    int n, m;
    cin>>n>>m;
    list< string > lst;
    list< string > ::iterator it;
    vector<string >vt;
    vector< pair< string , string > > v;
    priority_queue< pair< int, string > > q;
    string st, str;
    map< string , int > mp;
    for(int i=1;i<=n;i++){
        cin>>str;
        if(str == revers(str ))
        q.push(make_pair(str.length() ,str));
        else {
              vt.push_back(str);
              v.push_back(make_pair(str, revers(str)));
        }
    }
  if(!q.empty()) lst.push_back(q.top().second);

  for(int i=0;i<vt.size();i++){
    for(int j=0;j<v.size();j++){
        if(vt[i]==v[j].second && mp[vt[i]]==0) {
            lst.push_front(vt[i]);
            lst.push_back(v[j].first);
             mp[v[j].first]++;
        }
    }
  }
  string ans;
  for(it= lst.begin(); it!=lst.end();it++){
    ans+= *it;
  }
  cout<<ans.length()<<endl<<ans<<endl;


    return 0;
}
