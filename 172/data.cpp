#include <cstdio> //c輸入輸出
//#include <fstream>
//#include <sstream> //cmd
//#include <conio.h>  //if(kbhit())
//#include <windows.h>
#include <ctime>  //time  srand(time(NULL));
#include <algorithm> //sort(n,n+k)  reverse
//#include <iomanip> //小數 fixed<<setprecision or setw
#include <cstdlib>  //system
#include <cmath>
#include <iostream>
using namespace std;
int main(){
	srand(time(NULL));
	int s[4],s2[4];
	int k,big,n,t;
	cin>>k>>big;
	if(big)n=9999999;
	else n=99;
	for(int q=0;q<10000;q++){
		if(k==0){
			t=rand()%100;
			if(t==0){
				for(int w=0;w<4;w++)s[w]=0;
			}
			else {
				S0:
				bool x=1;
				for(int w=0;w<4;w++){
					t=rand()%4;
					if(t==0){
						x=0;
						s[w]=-1*(rand()%9+1);
					}
					else s[w]=rand()%n+1;
				}
				if(x)goto S0;
			}
		}
		else if(k==1){
			k=rand()%4;
			for(int w=0;w<4;w++){
				if(w==k)s[w]=rand()%n+1;
				else s[w]=0;
			}
		}
		else if(k==2){
			S2:
			int x=0;
			for(int w=0;w<4;w++){
				k=rand()%2;
				if(k==0){
					x++;
					s[w]=rand()%n+1;
				}
				else s[w]=0;
			}
			if(x!=2)goto S2;
		
		}
		else if(k==3){
			S3:
			k=rand()%4;
			for(int w=0;w<4;w++){
				if(w==k)s[w]=0;
				else {
					s[w]=rand()%n+1;
				}
				s2[w]=s[w];
			}
			sort(s2,s2+4);
			if(s2[1]*s2[1]+s2[2]*s2[2]>s2[3]*s2[3]&&s2[1]+s2[2]>s2[3]);
			else goto S3;
		}
		else if(k==4){
			S4:
			int a=sqrt(rand()%n+1);
			if(a<3||a%2==1)goto S4;
			int b=a*a/2;
			int c=b+1;
			k=rand()%4;
			if(k==0){
				s[0]=0;
				s[1]=a;
				s[2]=b;
				s[3]=c;
			}
			else if(k==1){
				s[0]=a;
				s[1]=0;
				s[2]=b;
				s[3]=c;
			}
			else if(k==2){
				s[0]=a;
				s[1]=b;
				s[2]=0;
				s[3]=c;
			}
			else if(k==3){
				s[0]=a;
				s[1]=b;
				s[2]=c;
				s[3]=0;
			}
			for(int w=0;w<20;w++){
				int g=rand()%4,h=rand()%4;
				swap(s[g],s[h]);
			}
		}
		else if(k==5){
			S5:
			k=rand()%4;
			for(int w=0;w<4;w++){
				if(w==k)s[w]=0;
				else {
					s[w]=rand()%n+1;
				}
				s2[w]=s[w];
			}
			sort(s2,s2+4);
			if(s2[1]*s2[1]+s2[2]*s2[2]<s2[3]*s2[3]&&s2[1]+s2[2]>s2[3]);
			else goto S5;
		}
		else if(k==6){
			S6:
			k=rand()%4;
			for(int w=0;w<4;w++){
				if(w==k)s[w]=0;
				else {
					s[w]=rand()%n+1;
				}
				s2[w]=s[w];
			}
			sort(s2,s2+4);
			if(s2[1]+s2[2]<=s2[3]);
			else goto S6;
		}
		else if(k==7){
			int a=rand()%n+1,b=rand()%n+1;
			s[0]=s[2]=a;
			s[1]=s[3]=b;
		}
		else if(k==8){
			int a=rand()%n+1,b=rand()%n+1;
			s[0]=s[1]=a;
			s[2]=s[3]=b;
		}
		else if(k==9){
			int a=rand()%n+1;
			s[0]=s[1]=s[2]=s[3]=a;
		}
		else if(k==10){
			S10:
			for(int w=0;w<4;w++)s[w]=rand()%n+1;
			if((s[0]==s[1]&&s[2]==s[3])||(s[0]==s[2]&&s[1]==s[3]))goto S10;
		}
		else if(k==11){
			S11:
			for(int w=0;w<4;w++){
				s[w]=rand()%n+1;
				s2[w]=s[w];
			}
			sort(s2,s2+4);
			if(s2[0]+s2[1]+s2[2]>s2[3])goto S11;
		}
		for(int w=0;w<4;w++)cout<<s[w]<<" ";
		cout<<endl;
	}
}
