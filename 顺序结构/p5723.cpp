#include <iostream>
using namespace std;
int sum,n=2,count;
int L,i;
int main(){
	cin>>L;
	while(sum+n<=L){
		if(n==2){
			cout<<n<<endl;
			sum+=n;
			count++;
			n++;
			continue;
		}
		if(n==3){
			cout<<n<<endl;
			sum+=n;
			count++;
			n++;
			continue;
		}
		for(i=2;i<n;i++){
			if(n%i==0){
				break;
			}	
		}
		if(i==n){
			cout<<n<<endl;
			sum+=n;
			count++;
		}
		n++;	
	}
	cout<<count;
	return 0;
}

