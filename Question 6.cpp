#include<iostream>
using namespace std;
int main(){
	int array[6];
	for(int i =0; i<6; i++){
		cout<<"Number "<<i+1<<": "; cin>>array[i];
	}
	bool symtric = true;
	int upper = 5, lower = 0;
	for(int i = 0 ; i < 3; i++){
		if(array[upper] != array[lower]){
			symtric = false;
			break;
		}
		upper--;
		lower++;
	}
	if(symtric){
		cout<<"\nThe array is symtric.";
	}
	else
		{cout<<"\nThe array is non-symtric. ";}
}