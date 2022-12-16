#include<iostream>
using namespace std;

int main(){
	int nam_array_reg[10];
	for(int i=0; i<10; i++){
		cout<<"Number. "<<i+1<<" : ";
		cin>>nam_array_reg[i];
	}
	int nam_number_reg; bool nam_num_present_reg = true; 
	cout<<"Enter the number which is to be find: ";
	
	cin>>nam_number_reg;
	cout<<"Number	:	Index "<<endl;
	for(int i=0; i<10; i++){
		if(nam_array_reg[i] == nam_number_reg){
		   nam_num_present_reg = false;	
		   cout<<nam_array_reg[i] << "	:	"<<i<<endl;	
		}
	}
	if(nam_num_present_reg){
		cout<<"Number is not Found";
	}
}