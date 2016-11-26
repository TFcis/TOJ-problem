#include <cstdio> //c輸入輸出
//#include <fstream>
//#include <sstream> //cmd
//#include <conio.h>  //if(kbhit())
//#include <windows.h>
#include <ctime>  //time  srand(time(NULL));
//#include <algorithm> //sort(n,n+k)  reverse
//#include <iomanip> //小數 fixed<<setprecision or setw
#include <cstdlib>  //system
#include <cmath>
#include <iostream>
using namespace std;
int main(){
	srand(time(NULL));
	long long int n=1,a,b,c,d,t1,t2,max=2147483647;
	int p;
	const int k=5;
	for(int q=0;q<10000;q++){
		a=pow(2,rand()%k+1)*pow(3,rand()%k+1);
		b=pow(2,rand()%k+1)*pow(3,rand()%k+1);
		c=pow(2,rand()%k+1)*pow(3,rand()%k+1);
		d=pow(2,rand()%k+1)*pow(3,rand()%k+1);
		t1=rand()%99+1;
		t2=rand()%99+1;
		p=rand()%3;
		if(p==0)a*=t1*t2;
		else if(p==1){
			a*=t1;
			b*=t2;
		}
		else b*=t1*t2;
		p=rand()%3;
		if(p==0)c*=t1*t2;
		else if(p==1){
			c*=t1;
			d*=t2;
		}
		else d*=t1*t2;
		while(a>max){
			p=rand()%2;
			if(p==0&&a%2==0)a/=2;
			else if(a%3==0)a/=3;
		}
		while(b>max){
			p=rand()%2;
			if(p==0&&b%2==0)b/=2;
			else if(b%3==0)b/=3;
		}
		while(c>max){
			p=rand()%2;
			if(p==0&&c%2==0)c/=2;
			else if(c%3==0)c/=3;
		}
		while(d>max){
			p=rand()%2;
			if(p==0&&d%2==0)d/=2;
			else if(d%3==0)d/=3;
		}
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	}
	cout<<"2147483647 2147483647 2147483647 2147483647"<<endl;
}
