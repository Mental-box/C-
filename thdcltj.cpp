// thdcltj.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int x,y;

	cout << "input first integer value :";
	cin  >> x;
	cout << "Input second integer value:";
	cin >> y;
	
	cout << x << " + " << y << " = " << x+y <<endl;
	cout << x << " - " << y << " = " << x-y <<endl;
	cout << x << " * " << y << " = " << x*y <<endl;
	if(y==0){
		cout << "0���δ� ���� �� �����ϴ�."<<endl;
	//	return 0;
	}

	else{
	cout << x << " / " << y << " = " << (double)x/y <<endl;
	cout << x << " / " << y << " �� �� = " << x/y <<endl;
	cout << x << " / " << y << " �� ������ = " << x%y <<endl;
	}

	/*
	try{
		cout << x << " / " << y << " = " << (double)x/y <<endl;
		cout << x << " / " << y << " �� �� = " << x/y <<endl;
		cout << x << " / " << y << " �� ������ = " << x%y <<endl;
	}catch(exception& e){
		cout << "0���δ� ���� �� �����ϴ�."<<endl;
	}*/

	getchar();
	getchar();
	return 0;}