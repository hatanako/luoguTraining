#include<iostream>
using namespace std;
int t,a;
int x[3];

int main() {
	cin >> x[0] >> x[1] >> x[2];
	t = 0;
	for (int i = 0; i < 3; i++) {
		t = i;
		for (int j = i + 1; j < 3; j++) {
			if (x[j] < x[i])
				t = j;
		}
		if(t != i){
			a = x[i]; x[i] = x[t]; x[t] = a;
		} 
	}
	cout << x[0] << " " << x[1] << " " << x[2];
	return 0;
}
