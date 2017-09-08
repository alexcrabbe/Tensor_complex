#include <iostream>
#include <complex>

using namespace std;
 
class CP {
   public:
   void setvalue( complex<double> z);
   void setindex( int index);
   complex<double> getvalue(void);
   int getindex(void);
   CP();
   
   complex<double> Z;
   int INDEX;
};


//implement

CP::CP(void){
	cout << "initial value of Z(" << INDEX << ")= " << Z << endl;
}

void CP::setvalue(complex<double> z){
	Z= z;
}

void CP::setindex(int index){
	INDEX=index;
}
	

int main(){
	CP cp1;
	
	cp1.setvalue({2,1});
	cp1.setindex(1);
	
	cout << "Z(" << cp1.getindex() << ")= " << cp1.getvalue() << endl;
	
	   
		   
return 0;
}
