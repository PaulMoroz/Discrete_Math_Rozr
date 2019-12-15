#include <bits/stdc++.h>
using namespace std;
int a[107][107],m[107],n,s;
stack <int> st;
vector <int> res;

int main(){
cin>>n;
for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        cin>>a[i][j];}
    st.push (1);
    while (!st.empty()) {
        int v = st.top();
        int i;
        for (i=1; i<=n; ++i)
            if (a[v][i])
                break;
        if (i == n+1) {
            res.push_back (v);
            st.pop();
        }
        else {
            --a[v][i];
            --a[i][v];
            st.push (i);
        }
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<' ';
    }
}
