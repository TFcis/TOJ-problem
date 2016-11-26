// By KRT girl xiplus 
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;
int main(){
	const double PI=acos(-1);
	int v[4],v2[4],max;
	double p;
	cout<<fixed<<setprecision(2);
	while(cin>>v[0]>>v[1]>>v[2]>>v[3]){
		for(int q=0;q<4;q++)v2[q]=v[q];
		sort(v,v+4);
		if(v[0]<0||v[3]==0){
			cout<<"Illegal Polygon -1"<<endl;
			continue;
		}
		else if(v[2]==0){
			cout<<"Circle "<<v[3]*v[3]/PI/4<<endl;
			continue;
		}
		else if(v[1]==0){
			cout<<"Sector "<<v[2]*v[3]/2.0<<endl;
			continue;
		}
		else if(v[0]==0){
			if(v[1]+v[2]<=v[3]){
				cout<<"Illegal Triangle -1"<<endl;
				continue;
			}
			else if(v[1]*v[1]+v[2]*v[2]>v[3]*v[3])cout<<"Acute Triangle ";
			else if(v[1]*v[1]+v[2]*v[2]==v[3]*v[3])cout<<"Right Triangle ";
			else if(v[1]*v[1]+v[2]*v[2]<v[3]*v[3])cout<<"Obtuse Triangle ";
		}
		else {
			if(v[0]+v[1]+v[2]<=v[3]){
				cout<<"Illegal Quadrilateral -1"<<endl;
				continue;
			}
			else if(v2[0]==v2[1]&&v2[1]==v2[2]&&v2[2]==v2[3])cout<<"Rhombus ";
			else if(v2[0]==v2[1]&&v2[2]==v2[3])cout<<"Kite ";
			else if(v2[0]==v2[2]&&v2[1]==v2[3])cout<<"Parallelogram ";
			else cout<<"Other Quadrilateral ";
		}
		p=(v[0]+v[1]+v[2]+v[3])/2.0;
		cout<<sqrt((p-v[0])*(p-v[1])*(p-v[2])*(p-v[3]))<<endl;
	}
	return 0;
}
