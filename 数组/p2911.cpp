#include <iostream>
using namespace std;
int s1,s2,s3,x[85],sum;
int maxsum,maxnum;
int main(){
	cin>>s1>>s2>>s3;
	for(int i=1;i<=s1;i++)
		for(int j=1;j<=s2;j++)
			for(int k=1;k<=s3;k++){
				x[i+j+k]++;
			}
	for(int i=1;i<=s1+s2+s3;i++){
		if(x[i]>maxsum){
			maxsum=x[i];
			maxnum=i;
		}
	}
	cout<<maxnum;
}

