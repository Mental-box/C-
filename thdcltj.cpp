// thdcltj.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
		cout << "0으로는 나눌 수 없습니다."<<endl;
	//	return 0;
	}

	else{
	cout << x << " / " << y << " = " << (double)x/y <<endl;
	cout << x << " / " << y << " 의 몫 = " << x/y <<endl;
	cout << x << " / " << y << " 의 나머지 = " << x%y <<endl;
	}

	/*
	try{
		cout << x << " / " << y << " = " << (double)x/y <<endl;
		cout << x << " / " << y << " 의 몫 = " << x/y <<endl;
		cout << x << " / " << y << " 의 나머지 = " << x%y <<endl;
	}catch(exception& e){
		cout << "0으로는 나눌 수 없습니다."<<endl;
	}*/

	getchar();
	getchar();
	return 0;}