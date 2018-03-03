#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class hours{

						private:
						 int hh1,mm1,ss1,hh2,mm2,ss2;
						public:
							//constructor of the class
							hours(){
								hh1=0;
								hh2=0;
								mm1=0;
								mm2=0;
								ss1=0;
								ss2=0;
							}
							void Entrytime(int i,int j,int k);
							void Exittime(int i,int j,int k);
							void displayworkinghours();
						};



void hours::Entrytime(int i,int j,int k){
							hh1=i;
							mm1=j;
							ss1=k;
						}
void hours::Exittime(int i,int j,int k){
							hh2=i;
							mm2=j;
							ss2=k;
							}
void hours::displayworkinghours(){
							int h,m,s;
							h=labs(hh2-hh1);
							m=labs(mm2-mm1);
							s=labs(ss2-ss1);

							cout<<"The determined working hours is"<<h<<" hours"<<m<<" minutes"<<s<<" seconds";
							}
int main() {
	int k,l,m;
	hours myhours;
	cout<<"Enter the Entry time: ";
	cout<<"Enter the hours:";
	cin>>k;
	cout<<"Enter the minutes:";
	cin>>l;
	cout<<"Enter the Seconds ";
	cin>>m;
	myhours.Entrytime(k,l,m);
	cout<<"Enter the Exit time: ";
	cout<<"Enter the hours:";
	cin>>k;
	cout<<"Enter the minutes:";
	cin>>l;
	cout<<"Enter the Seconds ";
	cin>>m;
	myhours.Exittime(k,l,m);
	myhours.displayworkinghours();
	return 0;
}
