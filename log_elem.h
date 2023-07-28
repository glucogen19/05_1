#ifndef LOG_ELEM_H
#define LOG_ELEM_H

class LogicalElement {
public:
    LogicalElement();
    virtual ~LogicalElement();
    virtual bool Calculate() const = 0; 
};

#endif 