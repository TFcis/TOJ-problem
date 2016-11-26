// By KRT girl xiplus
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
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
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	srand(time(NULL));
	fstream file;
	stringstream cmd;
	int c,m=0;
	for(int q=1;q<=5;q++){
		cmd.str(""); 
		cmd<<q<<".in";
		file.open(cmd.str().c_str(),ios::out);
		for(int w=0;w<100000;w++){
			c=rand()%4;
			if(q!=5)c=q-1;
			m=rand()%12+1;
			switch(c){
				case 0:
					file<<"Y ";
					file<<m<<" "<<dom(2016,m)<<" "<<rand()%7<<endl;
					break;
				case 1:
					file<<"M ";
					file<<rand()%100+2001<<" "<<rand()%31+1<<" "<<rand()%7<<endl;
					break;
				case 2:
					file<<"D ";
					file<<rand()%100+2001<<" "<<rand()%12+1<<" "<<rand()%7<<endl;
					break;
				case 3:
					file<<"W ";
					file<<rand()%100+2001<<" "<<m<<" "<<dom(2016,m)<<endl;
					break;
			}
		}
		file.close();
	}
}
