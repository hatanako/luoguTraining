#include <iostream>
#include <math.h>
using namespace std;
int x[3],t,w,sum;
int main(){
	cin>>x[0]>>x[1]>>x[2];
	//对三个线段进行排序 
	for(int i=0;i<3;i++){
		t=i;
		for(int j=i+1;j<3;j++){
			if(x[j]<x[i])
			t=j;
		}
		if(t!=i){
			w=x[i];x[i]=x[t];x[t]=w;
		}
	}
	//判断角度 
	if(x[0]+x[1]<=x[2]){
		cout<<"Not triangle";
	} else {
		sum=pow(x[0],2)+pow(x[1],2);
		if(sum<pow(x[2],2))
			cout<<"Obtuse triangle"<<endl;
		else if(sum==pow(x[2],2))
			cout<<"Right triangle"<<endl;
		else 
			cout<<"Acute triangle"<<endl;
		if(x[0]==x[1])
			cout<<"Isosceles triangle"<<endl;
		if(x[0]==x[2])
			cout<<"Equilateral triangle"<<endl;
	}
	return 0;
}
