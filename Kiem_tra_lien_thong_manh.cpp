#include<bits/stdc++.h>
using namespace std;
int n,a[100][100],dem;
bool chuaxet[100];
int BFS(int u){
    dem = 0;
    queue <int> hangdoi;
    hangdoi.push(u);
    while( ! hangdoi.empty()){
        dem++;
        int s = hangdoi.front();
        hangdoi.pop();
        for( int i = 1; i <= n;i++){
            if(a[s][i] == 1 && chuaxet[i] == true){
                chuaxet[i] = false;
                hangdoi.push(i);
            }
        }
    }
}
bool DuyetLTM(){
    for( int i = 1; i <= n;i++){
        if( BFS(i) != n) {
            return false;
            break;
        }
        return true;
    }
}
int main(){
    cin>>n;
    for( int i = 1; i<= n;i++){
        for( int j = 1; j <= n;j++){
            cin >> a[i][j];
        }
    }
    if(DuyetLTM() == true) cout <<"strongly connected";
    else cout <<"not strongly connected";
}
