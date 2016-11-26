// By KRT girl xiplus
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	int n,m;
	vector<int> v;
	while(cin>>n&&n){
		int s=v.size();
		switch(n){
			case 1:
				cin>>m;
				v.push_back(m);
				break;
			case 2:
				cin>>m;
				for(int q=s-1;q>=0;q--){
					if(v[q]>=m){
						v.erase(v.begin()+q);
						reverse(v.begin()+q,v.end());
						break;
					}
				}
				break;
			case 3:
				sort(v.begin(),v.end());
				break;
			case 4:
				sort(v.begin(),v.end());
				reverse(v.begin(),v.end());
				break;
			case 5:
				cin>>m;
				for(int q=0;q<s;q++){
					if(v[q]<=m){
						v.erase(v.begin()+q);
						q--;
						s--;
					}
				}
				break;
		}
	}
	int s=v.size();
	if(v.size())cout<<v[0];
	for(int q=1;q<s;q++){
		cout<<" "<<v[q];
	}
	cout<<endl;
	return 0;
}
