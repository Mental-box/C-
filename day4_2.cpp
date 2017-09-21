#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	char ch1[10]="program";
	char ch2[10]="language";
	char ch3[20],ch4[20];

	cout<<ch1<<",\t"<<strlen(ch1)<<endl;
	cout<<ch2<<",\t"<<strlen(ch2)<<endl;

	strcpy_s(ch3,ch1);
	cout<<ch3<<",\t"<<strlen(ch3)<<endl;

	strcpy_s(ch4,ch2);
	strcat_s(ch3,ch4);
	cout<<ch3<<",\t"<<strlen(ch3)<<endl;




	/*int x[5]={0,1,2,3,4};
	int y[5]={0};
	double f[5]={0.1,1.2,2.3,3.4,4.5};
	int i=0;

	for(i=0;i<5;i++){
		cout<<"x["<<i<<"] = "<<x[i]<<"\t";
		cout<<"&x["<<i<<"] = "<<&x[i]<<"\t";
		cout<<"&(x + "<<i<<") = "<<(x+i)<<endl;}

	cout<<endl;

	for(i=0;i<5;i++){
		cout<<"y["<<i<<"] = "<<y[i]<<"\t";
		cout<<"&y["<<i<<"] = "<<&y[i]<<"\t";
		cout<<"&(y + "<<i<<") = "<<(y+i)<<endl;}

	cout<<endl;

	for(i=0;i<5;i++){
		cout<<"f["<<i<<"] = "<<f[i]<<"\t";
		cout<<"&f["<<i<<"] = "<<&f[i]<<"\t";
		cout<<"&(f + "<<i<<") = "<<(f+i)<<endl;}*/




	/*int *ptr_i;
	int *ptr_x=&i;
	ptr_i=&i;

	cout<<"Value of i : "<<i<<endl;
	cout<<"Value of *ptr_i : "<<*ptr_i<<endl;
	cout<<"Value of *ptr_x : "<<*ptr_x<<endl;
	cout<<"address of i : "<<&i<<endl;
	cout<<"address of *ptr_i : "<<ptr_i<<endl;
	cout<<"address of *ptr_x : "<<ptr_x<<endl;*/

	return 0;}