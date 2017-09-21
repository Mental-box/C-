#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int i=0,sum=0,x,pCounter=0,mCounter=0,zCounter=0;
	double ave=0,mave=0;
	while(i<10){
		cout<<"input ten integer numbers("<<i+1<<"/10)> ";
		cin>>x;
		sum+=x;
		if(x>0){
			ave+=x;
			pCounter++;}
		else if(x<0){
			mave+=x;
			mCounter++;}
		else
			zCounter++;
		i++;
	}
//	cout.precision(-1);

	cout<<"total average : "<<(double)sum/10<<endl;
	if(pCounter==0)
		cout<<"there is no positive integer!"<<endl;
	else
		cout<<"total average of positive integers : "<<ave/pCounter<<endl;
	if(mCounter==0)
		cout<<"there is no negative integer!"<<endl;
	else
		cout<<"total average of negative integers : "<<mave/mCounter<<endl;
	cout<<"the number of 0 : "<<zCounter<<endl;
	return 0;}