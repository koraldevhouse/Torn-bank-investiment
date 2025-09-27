#include <iostream>
#include <cmath>
#include <iomanip>


int main(int argc, char** argv) {
	
	double w1, w2, m1, m2, m3;
	
	std::cout << "1 semana:  ";
	std::cin >> w1;
	w1 = w1/10000;
	
	std::cout << "\n2 semanas: ";
	std::cin >> w2;
	w2 = w2/10000;
	
	if(w2!=0)
	{
		std::cout << "\n1 mes:   ";
		std::cin >> m1;
		m1 = m1/10000;
		
		if(m1!=0)
		{
			std::cout << "\n2 meses: ";
			std::cin >> m2;
			m2 = m2/10000;
			
			if(m2!=0)
			{
				std::cout << "\n3 meses: ";
				std::cin >> m3;
				m3 = m3/10000;
			}
		}
	}
	
	w1 = std::pow(1+w1, 26);
	w2 = std::pow(1+w2, 13);
	m1 = std::pow(1+m1, 6);
	m2 = std::pow(1+m2, 3);
	m3 = std::pow(1+m3, 2);
	
	std::cout << std::setprecision(15) << "\n\n\nApós 6 meses, os juros compostos são:\n\n" 
				<< "\n1 semana:  " << w1
				<< "\n2 semanas: " << w2
				<< "\n1 mes:     " << m1
				<< "\n2 meses:   " << m2
				<< "\n3 meses:   " << m3 ;
	
	return 0;
}

