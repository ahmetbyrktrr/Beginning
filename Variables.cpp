#include <iostream>

int main(){
	
	//integer (hole number)
	
	int x ; //declaration
	
	int y ;
	
	int sum ;

	x = 21 ;  //assignment
	
	y = 23 ;
	
	sum = x + y ;  
	
	// double (if number including decimal)
	
	double price = 49.99;
	double height = 5.2;
	double temperature = 37.5;
	
	//char (single character)
	
	char grade = 'A';
	char initial = 'B';
	
	//boolean (true or false)
	bool besiktas = true;
	bool fenerbahce = false;
	
	//string (object that repesents a sequence of text)
	std::string name = "Ahmet" ;
	std::string lastName = " Bayraktar";
	std::string fullName = name + lastName;
	
	std:: cout << x << '\n' ;
	std:: cout << y << '\n' ;
	std:: cout << sum << '\n';
	std:: cout << price << '\n';
	std:: cout << grade << '\n';
	std:: cout << besiktas << '\n';
	std:: cout << fullName << '\n';
	
	return 0;
	
}
