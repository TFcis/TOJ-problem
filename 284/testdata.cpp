// By KRT girl xiplus
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	srand(7122);
	int n,m;
	for(int q=1;q<=100;q++){
		fstream file;
		stringstream s;
		s<<q<<".in";
		file.open(s.str().c_str(), ios::out);
		for(int w=0;w<q*10;w++){
			n=rand()%20+1;
			switch(n){
				case 1 ... 10:
					m=rand()%10000+1;
					file<<1<<" "<<m<<endl;
					break;
				case 11 ... 15:
					m=rand()%10000+1;
					file<<2<<" "<<m<<endl;
					break;
				case 16 ... 17:
					file<<3<<endl;
					break;
				case 18 ... 19:
					file<<4<<endl;
					break;
				case 20:
					m=rand()%5000+1;
					file<<5<<" "<<m<<endl;
					break;
			}
		}
		file<<0<<endl;
		file.close();
	}
}
