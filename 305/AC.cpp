// By KRT girl xiplus
// Zeller’s algorithm
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int week(int y,int m,int d){
	if(m==1||m==2){
		m+=12;
		y--;
	}
	int c=y/100;
	y%=100;
	int w=y+y/4+c/4-2*c+26*(m+1)/10+d-1;
	w=(w%7+7)%7;
	return w;
}
int dom(int y,int m){	
	int ndom[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(m==2){
		if(y%400==0){
			return 29;
		}else if(y%100==0){
			return 28;
		}else if(y%4==0){
			return 29;
		}else {
			return 28;
		}
	}else {
		return ndom[m];
	}
}
int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(0);
    char c;
	int x,y,z;
    while(cin>>c>>x>>y>>z){
    	bool space=0;
    	switch(c){
    		case 'Y':
    			for(int q=2001;q<=2100;q++){
    				if(week(q,x,y)==z){
    					if(space)cout<<" ";
    					cout<<q;
    					space=1;
					}
				}
				cout<<endl;
    			break;
    		case 'M':
    			for(int q=1;q<=12;q++){
    				if(week(x,q,y)==z){
    					if(space)cout<<" ";
    					cout<<q;
    					space=1;
					}
				}
				cout<<endl;
    			break;
    		case 'D':
    			for(int q=1;q<=dom(x,y);q++){
    				if(week(x,y,q)==z){
    					if(space)cout<<" ";
    					cout<<q;
    					space=1;
					}
				}
				cout<<endl;
    			break;
    		case 'W':
    			cout<<week(x,y,z)<<endl;
    			break;
		}
	}
}
