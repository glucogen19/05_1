#ifndef LOG_ELEM_H
#define LOG_ELEM_H

class LogicalElement {
public:
    LogicalElement();
    virtual ~LogicalElement();
    virtual bool Calculate() const = 0; 
};

class AND : public LogicalElement {
public:
    AND(bool input1, bool input2);
    bool Calculate() const override;

private:
    bool input1_;
    bool input2_;
};

class OR : public LogicalElement {
public:
    OR(bool input1, bool input2);
    bool Calculate() const override;

private:
    bool input1_;
    bool input2_;
};

class NOT : public LogicalElement {
public:
    NOT(bool input);
    bool Calculate() const override;

private:
    bool input_;
};

#endif 