#include "lab2.h"

Record::Record() { K=0;
                   RA=0;
                   RB=0;
              
                 }

void Record::setStart(double a,double b,double c) {

    K=a;
    RA=b;
    RB=c;
}

int Record::getStartA(double s1) {
	return (RA+K*(s1-1/(1+pow(10,(RB-RA)/400))))+0.5;
}

int Record::getStartB(double s2) {
	return (RB+K*(s2-1/(1+pow(10,(RA-RB)/400))))+0.5;
}

