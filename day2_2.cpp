#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int x[10];
	int i,sum=0,c,max,min,minP=0;
	double pAve=0,nAve=0;
	for(i=0;i<10;i++){
		cout<<"input ten integer numbers("<<i+1<<"/10)> ";
		cin>>x[i];
		sum+=x[i];
	}

	max=x[0],min=x[0];

	cout<<"total average : "<<(double)sum/10<<endl;

	for(i=0,c=0;i<10;i++){
		if(x[i]>0){
			pAve+=x[i];
			c++;}}
	if(c==0)
		cout<<"there is no positive integer!"<<endl;
	else
		cout<<"total average of positive integer : "<<pAve/c<<endl;

	for(i=0,c=0;i<10;i++){
		if(x[i]<0){
			nAve+=x[i];
			c++;}}
	if(c==0)
		cout<<"there is no negative integer!"<<endl;
	else
		cout<<"total average of negative integer : "<<nAve/c<<endl;

	for(i=1;i<10;i++){
		if(max<x[i])
			max=x[i];
	}

	cout<<"maximum value : "<<max<<endl;

	for(i=1;i<10;i++){
		if(min>x[i]){
			min=x[i];
			minP=i;}
	}

	cout<<"index of first minimum value : "<<minP+1<<endl;

	return 0;}