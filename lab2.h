
#include <cstdlib> 
#include<cmath>
using namespace std;
class Record{
public:
	Record();
	
	void setStart(double a,double b,double c);
	int getStartA(double s1);
	int getStartB(double s2);
	
private:
	double K,RA,RB;
};
