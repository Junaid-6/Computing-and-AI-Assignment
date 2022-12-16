#include<iostream>
using namespace std;
int main(){
	int falid[3], f=0, passed[3], p=0;
	int num, reg; float per;
	for(int i=0; i<3; i++){
		
		cout<<"Registration number: "; cin>>reg;
		cout<<"Enter marks: "; cin>>num;
		per =num/11;
		if( per >= 45){
			passed[p] = reg;
			p++;
		}
		if( per < 45){
			falid[f] = reg;
			f++;
		}
	}
	int print;
	cout<<"\nWhich list\n 1)Failed\n 2)Passed\nEnter your choice: ";
	cin>>print;
	if(print == 1){
		for(int i=0; i<f; i++){
			cout<<"Student "<<i+1<<" : "<<falid[i]<<endl;
		}
	}
		if(print == 2){
		for(int i=0; i<p; i++){
			cout<<"Student "<<i+1<<" : "<<passed[i]<<endl;
		}
	}
}