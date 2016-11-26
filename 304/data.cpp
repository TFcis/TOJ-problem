// By KRT girl xiplus
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	srand(time(NULL));
	fstream file;
	stringstream cmd;
	for(int q=1;q<=10;q++){
		cmd.str(""); 
		cmd<<q<<".in";
		file.open(cmd.str().c_str(),ios::out);
		char c=rand()%94+33;
		if(q==10)c=' ';
		int n=rand()%100+1;
		file<<n<<" "<<c<<endl;
		file<<rand()%10000+1;
		for(int q=1;q<n;q++){
			file<<" "<<rand()%10000+1;
		}
		file<<endl;
		file.close();
	}
}
