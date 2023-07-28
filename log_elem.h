#ifndef LOG_ELEM_H
#define LOG_ELEM_H

class LogicalElement {
public:
    LogicalElement();
    virtual ~LogicalElement();
    virtual bool Calculate() const = 0; 
};

class AND : public LogicalElement {

};

class OR : public LogicalElement {

};

class NOT : public LogicalElement {

};

#endif 