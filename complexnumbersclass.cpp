
#include<iostream>
#include <complex>
using namespace std;
//

class complexcalc {
	public:
	complex<double> CP1;
	complex<double> CP2;
	
	// Member functions declaration
	void setCP1(complex<double> cp1);
	void setCP2(complex<double> cp2);
	complex<double> CPadd(); //add two complex numbers
	complex<double> CPmult(); //multiply two complex numbers
};

//member functions definition

void complexcalc::setCP1(complex<double> cp1) {
	CP1=cp1;
}; // set first complex number value

void complexcalc::setCP2(complex<double> cp2) {
	CP2=cp2;
}; // set second complex number value


complex<double> complexcalc::CPadd() {
	complex<double> Z1;
	Z1=CP1+CP2;
	return Z1;
};

complex<double> complexcalc::CPmult() {
	complex<double> Z2;
	Z2=CP1*CP2;
	return Z2;
};

//main functin
int main(){
	
complexcalc calc1;
complexcalc calc2;

//set complex numbers for first calculation
calc1.setCP1({2,0});
//calc1.setCP1(complex<double>(2,0));
calc1.setCP2({4,2});

cout << "z1+z2= " << calc1.CPadd() << endl;
cout << "z1*z2= " << calc1.CPmult() << endl;

//set complex numbers for second calculation
calc2.setCP1({1,1});
calc2.setCP2({8,2});

return 0;
}






