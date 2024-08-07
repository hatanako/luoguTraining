#include <iostream>
using namespace std;
int k,num=1,sum;
int main(){
	cin>>k;
	while(k){
		for(int i=0;i<num;i++){
			sum+=num;
			k--;
			if(k==0)
				break;
		}
		num++;
	}
	cout<<sum;
	return 0;
}
