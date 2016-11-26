// By KRT girl xiplus
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	srand(time(NULL));
	int n,m;
	for(int q=0;q<1000;q++){
		n=rand()%20+1;
		switch(n){
			case 1 ... 10:
				m=rand()%10000+1;
				cout<<1<<" "<<m<<endl;
				break;
			case 11 ... 15:
				m=rand()%10000+1;
				cout<<2<<" "<<m<<endl;
				break;
			case 16 ... 17:
				cout<<3<<endl;
				break;
			case 18 ... 19:
				cout<<4<<endl;
				break;
			case 20:
				m=rand()%5000+1;
				cout<<5<<" "<<m<<endl;
				break;
		}
	}
	cout<<0<<endl;
}
