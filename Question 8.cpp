#include<iostream>
using namespace std;
int main(){
	int values = 6;
	int array[values];
	for(int i=0; i<values; i++){
		cout<<"Number "<<i+1<<" : "; cin>>array[i];
	}
	int target = 0;
	int output[values][2], k=0;
	cout<<"Target: "; cin>>target;
	for(int i=0; i < values; i++){
		for(int j = i+1; j < values; j++){
			if(array[i]+array[j] == target){
				output[k][0] = i;
				output[k][1] = j;
				k++; 
			}
		}
	}
	for(int i=0; i<k; i++){
		cout<<"{";
		for(int j=0; j<2; j++){
			cout<<output[i][j]<<",";
		}
		cout<<"}\n";}
}