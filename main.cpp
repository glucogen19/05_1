#include <iostream>
#include "log_elem.h"

int main() {
	bool input1 = true;
    bool input2 = false;
	
	AND andGate(input1, input2);
    OR orGate(input1, input2);
    NOT notGate(input1);
	
	std::cout << "AND gate result: " << andGate.Calculate() << std::endl;
    std::cout << "OR gate result: " << orGate.Calculate() << std::endl;
    std::cout << "NOT gate result (input 1): " << notGate.Calculate() << std::endl;

    return 0;
}