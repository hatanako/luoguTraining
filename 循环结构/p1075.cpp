#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>
using namespace std;
int m;
bool ss(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0)
			return false;
	}
	return true;
}
int main(){
	cin>>m;
	for(int i=2;i<m;i++){
		if(m%i==0){
			if(ss(i)){
				cout<<m/i;
				return 0;
			}
		}
	}
}
