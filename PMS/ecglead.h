#ifndef ECGLEAD_H
#define ECGLEAD_H
#include "ecgsystem.h"

class ECGLead
{
    ECGLead();
public:
   ~ECGLead();
    ECGLead(ECGSystem *ecgLd);

    bool print();
    void start();

    void operator=(const ECGLead& ecgL);

    int gety() const;
    void setY(int y);

private:
    ECGSystem *m_recevr;
    int m_y;
};

#endif // ECGLEAD_H
