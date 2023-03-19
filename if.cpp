#include <iostream>


int main(){
	
	double grade;
	
	std::cout << "Enter your grade: ";
	std::cin >> grade;
	
	if(grade >= 50) { std::cout << "You can pass.";
	
	} 
	
	else {
	std::cout << "You cannot pass!"; 
	}
	
	

	return 0;
}
