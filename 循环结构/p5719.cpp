#include <iostream>
#include <iomanip>
using namespace std;
int n,k;
double sum1=0.0,sum2=0.0;
int t1=0,t2=0;
int main(){
	cin>>n>>k;
	for (int i=1;i<=n;i++){
		if(i%k==0){
			sum1+=i;
			t1++;
		}else{
			sum2+=i;
			t2++;
		}
	}
	cout<<fixed<<setprecision(1)<<sum1/t1<<" "<<sum2/t2;
	return 0;
}
