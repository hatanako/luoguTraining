#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
	float m, h;
	cin >> m >> h;
	double bmi = m / pow(h, 2);
	if (bmi < 18.5)
		cout << "Underweight";
	else if (bmi < 24)
		cout << "Normal";
	else
		cout << setprecision(6) << bmi << "\nOverweight";
	return 0;
}