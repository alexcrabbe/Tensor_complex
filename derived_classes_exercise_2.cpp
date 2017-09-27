#include<iostream>
#include<string>
#include<math.h>
#include "header_derived_classes_2.h"

using namespace std;

//derived class

class circle : public Shape {
	
	public:
	//constructor
	circle(double a){
	  name="circle";
		}

//calculate radius from area
	double get_radius (void) {
		double rad=sqrt(area/3.142);
		return (rad);
	}
};


class triangle : public Shape {
	double width;
	
	public:
	triangle(double a, double b) {
		width=b; name="triangle";
	}
		
	double get_width (void) {
		return width;
	}
		
	double get_height (void) {
		double height=2*area/width;
		return height;
	}
};



int main () {
	//circle with area of 4
	circle circle1(4);
	
	cout << "area of " << circle1.get_name() << " is " << circle1.get_area() << endl;
	
	//set area to 6
	circle1.set_area(6);
	
	cout << "area of " << circle1.get_name() << " is " << circle1.get_area() << endl;

	//get radius of circle with area of 6
	cout << "radius of " << circle1.get_name() << " is " << circle1.get_radius() << endl;
	
	
	triangle triangle1(4,10);
	
	cout << "area of " << triangle1.get_name() << " is " << triangle1.get_area() << endl;
	
	cout << "width of " << triangle1.get_name() << " is " << triangle1.get_width() << endl;

	cout << "height of  " << triangle1.get_name() << " is " << triangle1.get_height() << endl;


	return 0;
	
}


	
