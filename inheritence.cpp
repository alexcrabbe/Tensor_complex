#include<iostream>
#include<complex>
#include<math.h>

using namespace std;

class waveparticle {
public:
virtual double momentum(double M, double E)=0;
virtual complex<double> wavenumber(double M, double E)=0;
};

class fermion: public waveparticle {
public:
double mass;
int charge;
fermion (double m, int q) {mass=m, charge=q;}

double momentum (double M, double E){
	return sqrt(2*M*E);
};
complex<double> wavenumber (double M, double E) {
return sqrt(2*M*E);
};

};

//main function
//

int main() {

fermion electron(1, -1);
fermion proton(3000, 1);

cout << "mass of electron is " << electron.mass << endl;
cout << "mass of proton is " << proton.mass << endl;

return 0;
}







