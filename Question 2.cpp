#include<iostream>
#include<math.h>
using namespace std;
bool prime_check(int num) {
	bool prime = true;
	if (num == 0 || num == 1) {
			prime = false;
		}
		{
			for (int i = 2; i <= num/2; ++i) {
				if (num % i == 0) {
					prime = false;
					break;
				}
			}
		}
	return prime;
}
int main() {
	int nam_array_reg[10], nam_lower_reg, nam_upper_reg;
	cout<<"Enter lower limit: ";
	cin>>nam_lower_reg;
	cout<<"Enter upper limit: ";
	cin>>nam_upper_reg;
	int nam_number_reg = nam_upper_reg;
	for(int i=0; i<10; i++) {
		for(int j = (nam_upper_reg - nam_lower_reg); j > 0 ; j--) {
			bool nam_add_reg = 	prime_check(nam_number_reg);
			if(nam_add_reg) {
				nam_array_reg[i] = nam_number_reg;
				nam_number_reg -= 1;
				break;
			} else
				nam_number_reg -= 1;
		}
	}
	for(int i=0; i<10; i++) {
		cout<<nam_array_reg[i]<<", ";
	}



}