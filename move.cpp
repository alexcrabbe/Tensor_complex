#include<iostream>
#include<string>
using namespace::std;

//global variables

string direction;

//class declaration

class pos {
private:
double x;
double y;
public:
pos(double r, double s) { x=r; y=s; };

void move(double, double);
void draw() const;
void posinput();
};

//class functions defintion

void pos::move(double r, double s) {
x=r; y=s;
};

void pos::draw() const {
cout << "(" << x << "," << y << ")" << endl;
};

void pos::posinput () {
cout << "enter (u,d,l,r): ";
cin >> direction;
if (direction=="u") {
	y=y+1;} else {
		if (direction=="d") { y=y-1;} else {
			posinput();
};

//main function

int main(){

pos pos1(1,1); //initiate position

pos1.posinput();

pos1.draw();

return 0;
}
