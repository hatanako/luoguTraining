#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int n;
char x[10],t;
int a,b;
int count(int number){
	int i=0;
	if(number<=0)i++;
	while(number){
		number/=10;
		i++;
	}
	return i;
}
int main(){
	cin>>n;
	while(n>0){
		cin>>x;
		if(x[0]>='a'&&x[0]<='z'){
			t=x[0];
			cin>>a>>b;
		} else {
			sscanf(x,"%d",&a);
			cin>>b;
		}
		if(t=='a'){
			printf("%d+%d=%d",a,b,a+b);
			cout<<endl<<count(a)+count(b)+count(a+b)+2<<endl;
		} else if(t=='b'){
			printf("%d-%d=%d",a,b,a-b);
			cout<<endl<<count(a)+count(b)+count(a-b)+2<<endl;
		} else {
			printf("%d*%d=%d",a,b,a*b);
			cout<<endl<<count(a)+count(b)+count(a*b)+2<<endl;
		}
		n--;
	}
}
