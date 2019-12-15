#include <bits/stdc++.h>
using namespace std;
int a[100][100],n,m,s,f,w;
vector <int> ansList;
int comy(int arg){
    ansList.clear();
    int curr = arg,minway = 0;
    while(ansList.size()<n){
        ansList.push_back(curr);
        int min_edge = INT_MAX,numb = 0;
        for(int i=1;i<=n;i++){
            if(a[curr][i]!=0 && i!=curr && count(ansList.begin(),ansList.end(),i) == 0){            
                if(min_edge>a[curr][i]){min_edge = a[curr][i];numb = i;}
            }
        }
        curr = numb;
        if(INT_MAX == min_edge)minway += a[arg][ansList.back()];
        else minway+=min_edge;
        cout<<minway<<endl;
    }
    return minway;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    int ans = INT_MAX;
    for(int i=1;i<=n;i++)
        ans = min(ans,comy(i));
    for(int i=0;i<ansList.size();i++)
        cout<<ansList[i]<<' ';
    cout<<"\nLength: "<<ans;
}
