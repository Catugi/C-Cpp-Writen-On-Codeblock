#include <iostream>
#include <iomanip>
#include <ctime>

auto print(){
	for(auto i = 0; i <= 1000; ++i){
		if(i % 2 == 1)
		std::cout <<"Maninho "<<i<<std::endl;
		else
		std::cout <<"Chico "<<i<<std::endl;
	}
}

auto main() -> int{
	print();
	std::cout << clock()<<"\n";
}

