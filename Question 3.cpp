#include<iostream>
using namespace std;

int main(){
	int array[15];
	int num, even = 0, odd = 14;
	for(int i = 0; i <15; i++){
		cout<<"Number "<<i+1<<" : "; cin>>num;
		if(num%2 == 0){
			array[even] = num;
			even++;
		}
		else{
			array[odd] = num;
			odd--;
		}
		
	}
	for(int i = 0; i<15; i++){
		cout<<array[i]<<", ";
	}
}