#include <iostream>
#include <iomanip>
using namespace std;
int x;
float sum = 0.0;
int main(){
	cin>>x;
	if(x<150)
		sum = x*0.4463;
	else if (x<400)
		sum = 150*0.4463+(x-150)* 0.4663;
	else 
		sum = 150*0.4463+250* 0.4663+(x-400)*0.5663;
	cout<<fixed<<setprecision(1)<<sum;
	return 0;
}
