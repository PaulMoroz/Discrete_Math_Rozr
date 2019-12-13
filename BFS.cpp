#include <bits/stdc++.h>
using namespace std;
int a[107][107],m[107],n,s,f;
queue <int> q;
int main(){
cin>>n;
for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
        cin>>a[i][j];
cin>>s>>f;
m[s]=1;
q.push(s);
while(!q.empty()){
    int v=q.front();
    q.pop();
    for(int i=1;i<=n;i++){
        if(a[v][i]==1 && m[i]==0){q.push(i);m[i]=m[v]+1;}
    }
    if(m[f]!=0)break;
}
cout<<m[f]-1;

}
