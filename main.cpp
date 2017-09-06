

#include<iostream>
#include <complex>
using namespace std;

complex<double> complex_number_input(int Zindex)
{
double a,b;
complex<double> Z;
cout <<"enter real part of Z" << Zindex << endl;
cin >> a;
cout<<"enter imaginary part of Z" << Zindex << endl;
cin >> b;

Z={a,b}; // define value of complex number
return Z;
}

int show_Z (complex<double> Z, int Zindex)
{
cout << "Z" << Zindex << "= " << Z << endl;
cout << "abs(Z" << Zindex << ")= " << abs(Z) << endl;
cout << "arg(Z" << Zindex << ")= " << arg(Z) << endl << endl;
return 0;
}

int main() {
	
complex<double> Z1,Z2,Z3,Z4;

Z1=complex_number_input(1);
Z2=complex_number_input(2);

show_Z(Z1,1);
show_Z(Z2,2);

Z3=Z1*Z2;
Z4=Z1+Z2;

cout << "Z1*Z2= " << Z3 << endl << "Z1+Z2= " << Z4 << endl << endl;

	return 0;
}
