#include<iostream>
#include<sstream>
#include<cstdlib>
#include <fstream>
using namespace std;
int main()
{
	char c[63];
	for(int q=0;q<26;q++)c[q]='A'+q;
	for(int q=0;q<26;q++)c[q+26]='a'+q;
	for(int q=0;q<10;q++)c[q+52]='0'+q;
	for(int i=1;i<=100;i++){
		string s="";
		int k=rand()%30+1;
		for(int w=0;w<k;w++)s+=c[rand()%62];
		ostringstream oss;
		oss<<i<<".in";
		ofstream fs(oss.str().c_str());
		int n=rand()%21-15+k;
		if(n<0)n=0;
		fs<<s<<endl<<n<<endl;
		fs.close();
	}
}

