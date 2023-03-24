#include <iostream>
using namespace std;

int main(){
	
	int age;
	
	do{
		cout << "Enter your age: ";
		cin >> age;
	} while(age < 7);
	
	cout << "Your " << age << " years old.";
	

	return 0;
}
