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
        int ans=(max({x1,x2,x3})-min({x1,x2,x3})+1)*(max({y1,y2,y3})-min({y1,y2,y3})+1)
		-((abs(x1-x2)+1)*(abs(y1-y2)+1)-__gcd(abs(x1-x2),abs(y1-y2))-1)/2
		-((abs(x1-x3)+1)*(abs(y1-y3)+1)-__gcd(abs(x1-x3),abs(y1-y3))-1)/2
		-((abs(x2-x3)+1)*(abs(y2-y3)+1)-__gcd(abs(x2-x3),abs(y2-y3))-1)/2;
		if(x1!=max({x1,x2,x3})&&x1!=min({x1,x2,x3})&&y1!=max({y1,y2,y3})&&y1!=min({y1,y2,y3}))
			ans-=min(abs(x1-x2)*abs(y1-y3),abs(x1-x3)*abs(y1-y2));
		if(x2!=max({x1,x2,x3})&&x2!=min({x1,x2,x3})&&y2!=max({y1,y2,y3})&&y2!=min({y1,y2,y3}))
			ans-=min(abs(x2-x1)*abs(y2-y3),abs(x2-x3)*abs(y2-y1));
		if(x3!=max({x1,x2,x3})&&x3!=min({x1,x2,x3})&&y3!=max({y1,y2,y3})&&y3!=min({y1,y2,y3}))
			ans-=min(abs(x3-x1)*abs(y3-y2),abs(x3-x2)*abs(y3-y1));
        cout<<ans<<endl;
    }
}
