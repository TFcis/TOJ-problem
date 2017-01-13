#include<bits/stdc++.h>
using namespace std;
int main(){
	string s=
#include"main.cpp"
	;
	stringstream ss(s);
	long long v[15];
	long long ans[]={
		/*  */ 0,
		/*01*/ 15438,
		/*02*/ 5,
		/*03*/ 537,
		/*04*/ 15,
		/*05*/ 45278631,
		/*06*/ 5,
		/*07*/ 1,
		/*08*/ 36,
		/*09*/ 7,
		/*10*/ 0,
		/*11*/ 9,
		/*12*/ 0,
		/*13*/ 15121413121,
		/*14*/ 4
	};
	for(int q=0;q<=14;q++)v[q]=-1;
	string ti,tv;
	while(ss>>ti>>tv){
		int i=atoi(ti.c_str());
		bool x=0;
		int sz=tv.size();
		for(int q=0;q<sz;q++){
			if('0'<=tv[q]&&tv[q]<='9'){
				// OK
			}else {
				x=1;
				break;
			}
		}
		if(x){
			v[i]=-2;
		}else {
			v[i]=atoll(tv.c_str());
		}
	}
//	for(int q=1;q<=14;q++){
//		cout<<q<<" "<<v[q]<<endl;
//	}
	int testdata;
	cin>>testdata;
	if(v[testdata]==-2){
		// RE
		cout<<(1/0);
	}else if(v[testdata]==-1){
		// No answer
		cout<<"WA";
	}else if(v[testdata]==ans[testdata]){
		// AC
		cout<<"AC";
	}else {
		// WA
		cout<<"WA";
	}
}
