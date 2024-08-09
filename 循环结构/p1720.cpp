#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
double n;
int main(){
	cin>>n;
	printf("%.2f",(pow(((1+sqrt(5))/2),n)-pow(((1-sqrt(5))/2),n))/sqrt(5)); 
}
