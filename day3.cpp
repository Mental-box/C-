#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int i,j,n,temp;
	int a[10];
	n=9;

	for(i=0;i<=n;i++){
		cout<<"input ten integer numbers("<<i+1<<"/10)> ";
		cin>>a[i];
	}

	for(i=n-1;i>=0;i--){
		for(j=0;j<=i;j++){
			if(a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;}}
	}

	cout<<endl<<"내림차순: ";
	for(i=0;i<=n;i++)
		cout<<a[i]<<"  ";
	
	for(i=n-1;i>=0;i--){
		for(j=0;j<=i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;}}
	}

	cout<<endl<<"오름차순: ";
	for(i=0;i<=n;i++)
		cout<<a[i]<<"  ";
	cout<<endl;
	
	return 0;}