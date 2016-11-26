// By KRT girl xiplus
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	srand(time(NULL));
	cout<<10<<endl;
	for(int q=0;q<10;q++){
		int r=rand()%10000+1;
		int l=rand()%10000+1;
		int x=rand()%r+1;
		int m=rand()*rand()+2;
		cout<<r<<" "<<l<<" "<<x<<" "<<m<<endl;
	}
}

