#include<iostream>
using namespace std;
void Assending(int array[], int size){
	int temp = array[0];
	for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (array[i] > array[j])
            {
                temp =  array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
void desending(int array[],int size){
	int temp = array[0];
	for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (array[i] < array[j])
            {
                temp =  array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
int main(){
	int array[10];
	for(int i=0; i<10; i++){
		cout<<"Number "<<i+1<<" : ";
		cin>>array[i];
	}
	int sorting_type;
	while(sorting_type == 1 || sorting_type == 2){
		cout<<"Select the Sorting type:\n 1)  Ascending\n 2)  Decending\nEnter your choice : ";
	 	cin>>sorting_type;
	}
	if(sorting_type == 1){
	  Assending(array, 10);	
	}
	if(sorting_type == 2){
		desending(array, 10);
	}
	for(int i=0; i<10; i++){
		cout<<array[i]<<", ";
	}
	
	
	
	
}