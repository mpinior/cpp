#ifndef TAXRETURN_H
#define TAXRETURN_H
#include <iostream>

class TaxReturn{
protected:
    int val1;
public:
    TaxReturn(int val);
    ~TaxReturn();
    virtual void getVal();
    virtual int Calculate() = 0;

};

class Tax36:public TaxReturn{
    public:
    Tax36(int val);
    virtual void getVal();
    virtual int Calculate() override;
};

class Tax37:public TaxReturn{
    public:
    Tax37(int val);
    virtual void getVal();
    virtual int Calculate() override;

};


#endif