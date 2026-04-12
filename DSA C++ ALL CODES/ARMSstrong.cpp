#include<iostream>
using namespace std;

bool isArmstrong(int n){
	int copyN=n;
	int sumOfcubes=0;
	while(n!=0){
		int dig= n%10;
		sumOfcubes = (dig *dig*dig);
		n=n/10;
	}
	return sumOfcubes==copyN;
}

int main(){
	int n=111;
	if(isArmstrong(n)){
		cout<<"is an armstrong number \n ";
	}else {
		cout<<"not a armsstrong number \n";
	}
	return 0;
}
