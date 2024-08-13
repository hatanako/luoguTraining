#include <iostream>
#include <cmath>
using namespace std;
int n,a[1010][5],sum[1010],count;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i][0]>>a[i][1]>>a[i][2];
		sum[i]=a[i][0]+a[i][1]+a[i][2];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(abs(a[i][0]-a[j][0])<=5 &&
			   abs(a[i][1]-a[j][1])<=5 &&
			   abs(a[i][2]-a[j][2])<=5 &&
			   abs(sum[i]-sum[j])<=10 )
			   count++;
		}
	}
	cout<<count;
}
