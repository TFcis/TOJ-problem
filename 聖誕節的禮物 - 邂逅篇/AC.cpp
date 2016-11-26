#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	long long int a, b, c, d, gcd;
	cout << fixed << setprecision(0);
	while (cin >> a >> c >> b >> d){
		a *= c; c = a;
		b *= d; d = b;
		while ((a %= b) && (b %= a));
		gcd = a + b;
		a = c / gcd;
		b = d / gcd;
		int a2 = 0, a3 = 0, b2 = 0, b3 = 0;
		while (a % 2 == 0){
			a /= 2;
			a2++;
		}
		while (a % 3 == 0){
			a /= 3;
			a3++;
		}
		while (b % 2 == 0){
			b /= 2;
			b2++;
		}
		while (b % 3 == 0){
			b /= 3;
			b3++;
		}
		if (a != 1 || b != 1)cout << "-1 -1" << endl;
		else {
			if (a2 == 0 && a3 == 0){
				cout << b2 + b3 * 2 << " " << c << endl;
			}
			else if (b2 == 0 && b3 == 0){
				cout << a2 + a3 * 2 << " " << d << endl;
			}
			else if (a2 == 0){
				int k = (a3 > b2 ? b2 : a3);
				cout << a3 * 2 + b2 - 2 * k << " " << d / (long long int)pow(2, b2 - k) << endl;
			}
			else {
				int k = (a2 > b3 ? b3 : a2);
				cout << b3 * 2 + a2 - 2 * k << " " << c / (long long int)pow(2, a2 - k) << endl;
			}
		}
	}
	return 0;
}