#include <iostream>
#include <math.h>
using namespace std;
long long a,b;

bool hw(int x){
	int a[10],i=0;
    while (x>0){
		a[i]=x%10;
		x/=10;
		i++;
	}
    for(int j=0;j<i;j++)
		if(a[j]!=a[i-j-1])
			return false;   
    return true;
}

bool ss(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0)
			return false;
	}
	return true;
}
int main(){
	cin>>a>>b;
	if(a%2==0)a++;
	for(int i=a;i<=b;i=i+2){
		if((1000 <= i && i <= 9999) || (100000 <= i && i <= 999999)) continue;
		if(!hw(i)) continue;
		if(!ss(i)) continue;
		cout<<i<<endl; 
	}
}
