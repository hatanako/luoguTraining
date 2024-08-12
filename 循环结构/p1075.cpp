<<<<<<< HEAD
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
=======
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
>>>>>>> 25f1b83643a707294562f91b3c0c771ba970b0f7
