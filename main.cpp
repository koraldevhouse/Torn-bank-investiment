#include <iostream>
#include <cmath>
#include <iomanip>

int main(int argc, char** argv) {
	
	double w1=0, w2=0, m1=0, m2=0, m3=0;
	
	std::cout << "1 week:   ";
	std::cin >> w1;
	w1 = w1/10000;
	
	std::cout << "2 weeks:  ";
	std::cin >> w2;
	w2 = w2/10000;
	
	if(w2!=0)
	{
		std::cout << "1 month:  ";
		std::cin >> m1;
		m1 = m1/10000;
		
		if(m1!=0)
		{
			std::cout << "2 months: ";
			std::cin >> m2;
			m2 = m2/10000;
			
			if(m2!=0)
			{
				std::cout << "3 months: ";
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
	
	std::cout << std::setprecision(15) << "\n\n\nAfter 180 days*, the compount interests are:\n\n" 
				<< "\n1 week:   " << w1
				<< "\n2 weeks:  " << w2
				<< "\n1 month:  " << m1
				<< "\n2 months: " << m2
				<< "\n3 months: " << m3
				<< "\n\n\n*1 and 2 weeks actually take 182 days :)";
	
	return 0;
}

