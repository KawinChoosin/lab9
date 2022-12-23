#include<iostream>
#include<string>
using namespace std;


int main(){
	int age,height,bounty;
	string name,y;
	cout<<"Enter your age: ";
	cin>>age;
	if(age<=25){
		cout<<"Enter your height: ";
		cin>>height;
		if(height<100){
			y="Chopper";
		}else if(height<180){
				y="Usopp";
			}else{
			cout<<"Enter your bounty: ";
			cin>>bounty;
			if(bounty>1100000000){
				y="Zoro";
			}else{
				y="Sanji";
			}
		}
		
	}else{
		if(age>25 and age<=60){
			cout<<"Enter your bounty: ";
			cin>>bounty;
			if(bounty>500000000){
				y="Jinbe";
			}else{
				y="Franky";
			}
		}else{
			y="Brook";
		}
	}
	cout<<"Your character = "<<y;
}
		