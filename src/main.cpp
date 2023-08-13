#include "strategy.h"

int main() {
	std::cout<<"****************Strategy Design Pattern****************"<<std::endl;
	Vehicle* car = new Car();
	car->drive();

	Vehicle* sports = new Sports();
	sports->drive();
	return 0;
}
