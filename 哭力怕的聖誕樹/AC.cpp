#include <iostream>
using namespace std;
int main(){
	string s;
	int n;
	while(cin>>s>>n){
		if(n>s.size())cout<<"Please Update!"<<endl;
		else {
		    for(int i = 0 ; i < n ; i++){
		        for(int j = n-1 ; j > i ; j--)
		            cout<<" ";
		        for(int j = 0 ; j <= i ; j++)
		            cout<<s[j];
		        for(int j = i-1 ; j >= 0 ; j--)
		            cout<<s[j];
		        
		        cout<<endl;
		    }
		    for(int i = 0 ; i < n ; i++){
		        for(int j = 1 ; j < n ; j++)
		            cout<<" ";
		        cout<<s[n-1];
		        cout<<endl;
		    }
		}
	}
}

