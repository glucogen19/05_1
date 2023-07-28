#include "log_elem.h"

LogicalElement::LogicalElement() {}
LogicalElement::~LogicalElement() {}

AND::AND(bool input1, bool input2) : input1_(input1), input2_(input2) {}
bool AND::Calculate() const {
    return input1_ && input2_;
}

OR::OR(bool input1, bool input2) : input1_(input1), input2_(input2) {}
bool OR::Calculate() const {
    return input1_ || input2_;
}

NOT::NOT(bool input) : input_(input) {}
bool NOT::Calculate() const {
    return !input_;
}
