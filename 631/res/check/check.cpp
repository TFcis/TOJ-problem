#include <bits/stdc++.h>
using namespace std;

int main() {
	long double Answer, Output;
	FILE *outf = fopen(secure_getenv("VERDICT"), "r");
	FILE *ansf = fdopen(2, "r");

	fscanf(outf, "%Lf", &Output);
	fscanf(ansf, "%Lf", &Answer);

	long double Ae = abs(Answer - Output);
	long double Re = Ae / Answer;

	if (Ae <= 0.000001 || Re <= 0.000001) {
		return 0;
	} else {
		return -1;
	}
}
