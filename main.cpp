#include <iostream>
#include "log_elem.h"

int main() {
	bool input1 = true;
    bool input2 = false;
	
	AND andGate(input1, input2);
    OR orGate(input1, input2);
    NOT notGate(input1);
}