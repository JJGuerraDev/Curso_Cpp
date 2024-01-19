// priueva de los sub String

#include <iostream>
#include <string>
using namespace std;

int main(void){

	string S1 = "Point Zero";
	string S2 = "Point Zero Variant";
	string SS;

	SS = S1.substr(0, 5);

	for(int in = 0; in < int (S2.size()); in++){
		for(int fin = 0; fin < int (S2.size()); fin++){
			if(SS == S2.substr(in, fin)){

				cout<<"si esta "<<SS<<endl;

			}
		}
	}
    
	
	return 0;
}