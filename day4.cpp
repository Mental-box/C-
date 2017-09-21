#include "stdafx.h"
#include <iostream>
using namespace std;

typedef struct st_record{
	int st_number;
	int score[4];
	float average;
}st_record;

int main(){
	st_record st[3];
	st_record temp;

	int i,j;
//	float sAve=0;

	for(i=0;i<3;i++){
		st[i].average=0;
		cout<<"input student number: ";
		cin>>st[i].st_number;
		cout<<"input 4 scores: ";
		for(j=0;j<4;j++){
			cin>>st[i].score[j];
			st[i].average+=st[i].score[j];}
		st[i].average/=4.0;
		/*cout<<"input English score: ";
		cin>>st[i].score[1];
		cout<<"input Math score: ";
		cin>>st[i].score[2];
		cout<<"input Physics score: ";
		cin>>st[i].score[3];*/

	//	st[i].average=(st[i].score[0]+st[i].score[1]+st[i].score[2]+st[i].score[3])/4.0;
		cout<<endl;}

	cout.precision(4);

	cout<<"학번\t K\t E\t M\t P\t ave"<<endl;
	for(i=0;i<3;i++){
		cout<<" "<<st[i].st_number<<'\t';
		for(j=0;j<4;j++){
			cout<<" "<<st[i].score[j]<<'\t';}
		cout<<st[i].average<<endl;}


//	cout<<i<<"번째 학생의 평균 = "<<st[i].average

/*	cout<<"평균";
	for(i=0;i<4;i++){
		for(j=0;j<3;j++)
			sAve += st[j].score[i];
		sAve = sAve/3.0;
		cout<<"\t "<<sAve;
		sAve=0;
	}*/
	cout<<endl<<endl;

	for(i=2;i>0;i--){
		for(j=0;j<i;j++){
			if(st[j].average<st[j+1].average){
				temp = st[j];
				st[j]=st[j+1];
				st[j+1]=temp;}}
	}
	cout<<"평균이 높은 순서 : "<<endl;
	for(i=0;i<3;i++)
		cout<<st[i].st_number<<endl;
	
	return 0;}