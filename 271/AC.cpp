// By KRT girl xiplus
#include <bits/stdc++.h>
using namespace std;
int main(){
//	ios::sync_with_stdio(false);
//    cin.tie(0);
	int N,x,y,H,W;
	cin>>N>>W>>H;
	int v[H+1][W+1]={0};
	for(int q=0;q<N;q++){
		cin>>x>>y;
		v[y][x]=1;
	}
	for(int q=1;q<=H;q++){
		for(int w=1;w<=W;w++){
			v[q][w]+=v[q][w-1]+v[q-1][w]-v[q-1][w-1];
		}
	}
	int vaild[N+1]={0};
	for(int q=1;q<=H;q++){
		for(int w=1;w<=W;w++){
			for(int e=q;e<=H;e++){
				for(int r=w;r<=W;r++){
					vaild[ v[e][r]-v[e][w-1]-v[q-1][r]+v[q-1][w-1] ]++;
				}
			}
		}
	}
	int count=0;
	for(int q=1;q<=N;q++){
		if(vaild[q])count++;
	}
	cout<<count<<endl;
}

