//base class is here to check the function of headers

#include<string>

using namespace std;

//base class
class Shape {
	protected:
	string name;
	double area;
	
	public:	
	
	//set functions
	void set_area(double A) {
		area=A;
	}
	
	
	//get functions
	string get_name() {
		return(name);
	}
	
	double get_area() {
		return(area);
	}
		
};

