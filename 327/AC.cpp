// By KRT girl xiplus
#include <bits/stdc++.h>
//#define endl '\n'
using namespace std;
int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(0);
    long long x1,y1,x2,y2,x3,y3;
    int t;
    cin>>t;
    while(t--){
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        cout<<(max({x1,x2,x3})-min({x1,x2,x3})+1)*(max({y1,y2,y3})-min({y1,y2,y3})+1)-((abs(x1-x2)+1)*(abs(y1-y2)+1)-__gcd(abs(x1-x2),abs(y1-y2))-1)/2-((abs(x1-x3)+1)*(abs(y1-y3)+1)-__gcd(abs(x1-x3),abs(y1-y3))-1)/2-((abs(x2-x3)+1)*(abs(y2-y3)+1)-__gcd(abs(x2-x3),abs(y2-y3))-1)/2<<endl;
    }
}
