#include <bits/stdc++.h>
using namespace std;
int main(){
	srand(time(NULL));
	int N = rand()%95+5;
	cout<<N<<endl;
	cout<<rand()%10000+1;
	for(int q=1; q<N; q++) {
		cout<<" "<<rand()%10000+1;
	}
	cout<<endl;
}
