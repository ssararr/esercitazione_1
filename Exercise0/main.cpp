#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <numbers>

int main()
{
	int a = -1; 
	unsigned int b = 2; //occupo meno spazio di memoria se non do il segno (non occupo quel byte)
	bool c = true; //oppure false
	double d = 3.5; //oppure 1.0e-12
	std::string str = "Hello"; //vettore di 5 caratteri, perché contiene anche '/0' ?con il comando str?
	char e = 'a'; //attenzione ai nomi, perché non posso sovrascrivere le variabili
	//int, unsigned int, double, char sono tutti literal
	//assegnare sempre un valore iniziale alle variabili (cioè a=-1), perché altrimenti farlo dopo genera un errore runtime 
	a = 2;
	
	std::cout << sizeof(int) <<std::endl;
	std::cout << -pow(2,31) << " " << pow(2,31) -1 <<std::endl;
	std::cout << std::numeric_limits<int>::min() << " " <<std::numeric_limits<int>::max() <<std::endl;
	
	std::cout << std::setprecision(16) << std::scientific; //precisione scientifica con 16 cifre
	std::cout <<std::numbers::pi <<std::endl;
	
	int a1 = a+d;
	std::cout <<"a1 = " << a1 << std::endl; //non stampa 5.5, ma 5, perché a è un int, d è un double, quindi il programma tronca il double 
											 //(in realtà usa a come double, somma tra double, però poi è vincolato a tornare in int)
	
	std::string s1 = str + std::to_string(d);
	std::cout <<"s1 = " << s1 << std::endl; 


	
	
	
    return 0;
}
