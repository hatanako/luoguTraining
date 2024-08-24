#include <iostream>
#include <string>
using namespace std;
string a;
int main(){
	getline(cin,a);
	int sum=0;
	for(int i=0;i<a.size();i++){
		if(a[i]==' '){
			sum++;
		} else if(a[i]>='a'&&a[i]<='c'){
			sum+=a[i]-'a'+1;
		} else if(a[i]>='d'&&a[i]<='f'){
			sum+=a[i]-'d'+1;
		} else if(a[i]>='g'&&a[i]<='i'){
			sum+=a[i]-'g'+1;
		} else if(a[i]>='j'&&a[i]<='l'){
			sum+=a[i]-'j'+1;
		} else if(a[i]>='m'&&a[i]<='o'){
			sum+=a[i]-'m'+1;
		} else if(a[i]>='p'&&a[i]<='s'){
			sum+=a[i]-'p'+1;
		} else if(a[i]>='t'&&a[i]<='v'){
			sum+=a[i]-'t'+1;
		} else if(a[i]>='w'&&a[i]<='z'){
			sum+=a[i]-'w'+1;
		}
	}
	cout<<sum;
}
