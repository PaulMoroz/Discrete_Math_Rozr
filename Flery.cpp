#include <bits/stdc++.h>
using namespace std;
queue <int> st;
int v[100][100];
bool marked[100] = {0};
int main(){
int n;
cin>>n;
for(int i = 1;i<=n;i++){
    int k = 0;
    for(int j=1;j<=n;j++){
        cin>>v[i][j];
        k+=v[i][j];
    }
    if(k%2==1){cout<<"Wrong graph";return 0;}
}

st.push(1);
while(st.size()!=0){

    for(int i=1;i<=n;i++)
    if(v[st.front()][i] == 1  && marked[i] == 0){marked[i] = 1;st.push(i);v[st.front()][i] = 0;v[i][st.front()] = 0;}
    cout<<st.front()<<' ';
    st.pop();
}
}
