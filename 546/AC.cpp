// By xiplus 
#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	int v[100];
	cin>>N;
	for(int q=0; q<N; q++) {
		cin>>v[q];
	}
	sort(v, v+N);
	for(int q=0; q<N; q++) {
		cout<<v[q]<<" ";
	}
	cout<<endl;
	return 0;
}

