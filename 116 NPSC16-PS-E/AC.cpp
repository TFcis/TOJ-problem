// By xiplus
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	string a, b;
	cin>>a>>b;
	int la = a.size(), lb = b.size();
	int N, K;
	cin>>N>>K;
	int v[32] = {0, la, lb};
	int len;
	for (len = 3 ; v[len-1] < K ; len++) {
		v[len] = v[len-2] + v[len-1];
	}
	int have = (N > 31 ? 1E7 : v[N]);
	if (N < len && have < K) {
		cout<<"X"<<endl;
	} else {
		int index = lower_bound(v, v+len, K)-v;
		while(index > 2){
			if (K <= v[index - 1]){
				index --;
			} else {
				K -= v[index - 1];
				index -= 2;
			}
		}
		if(index == 1){
			cout<<a[K-1]<<endl;
		} else {
			cout<<b[K-1]<<endl;
		}
	}
}

