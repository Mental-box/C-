#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int student[3][5];
	int i,j;
	double ave[3],sAve=0;

	for(i=0;i<3;i++){
		cout<<"input student number: ";
		cin>>student[i][0];
		cout<<"input Korean score: ";
		cin>>student[i][1];
		cout<<"input English score: ";
		cin>>student[i][2];
		cout<<"input Math score: ";
		cin>>student[i][3];
		cout<<"input Physics score: ";
		cin>>student[i][4];

		ave[i]=(student[i][1]+student[i][2]+student[i][3]+student[i][4])/4.0;
		cout<<endl;}

	cout.precision(4);
	cout<<"ÇĞ¹ø\t K\t E\t M\t P"<<endl;
	for(i=0;i<3;i++){
		//cout<<"ÇĞ»ı";
		for(j=0;j<5;j++){
			cout<<" "<<student[i][j]<<'\t';}
		cout<<ave[i]<<endl;}

	cout<<"Æò±Õ";
	for(i=1;i<5;i++){
		for(j=0;j<3;j++)
			sAve += student[j][i];
		sAve = sAve/3.0;
		cout<<"\t "<<sAve;
		sAve=0;
	}
	cout<<endl;
	
	return 0;}