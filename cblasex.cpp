#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "cblas.h"
#include<string>

//create matrix class
class mat {
	public:
	double* S;
	int row;
	int col;
	std::string name;
	
    mat(double* matrix,int mrow, int mcol, std::string mname) {
	   S=matrix; 
	   row=mrow; 
	   col=mcol; 
	   name=mname;
	   };
	   
//function to set matrix elements
	void smatrix (void);
//function print matrix elements
	void pmatrix (void);
};
   	
//implement class functions  
void mat::smatrix (void) {  
	int i=0;
	int j=1;
   for(i=0;i<row*col;i++){
		     if(i=1) S[i]=1;
		
			   /*else {	
				   S[i]=2;
				}*/
			};
}; 
	
 void mat::pmatrix (void) {  
	int i=0;
    int j=0;
    
    std::cout << name << std::endl; 
   
   for(i=0;i<row;i++){
	   for(j=0;j<col;j++){
	   std::cout << S[i+(j*row)] << ",";
			}
	   std::cout << std::endl;
		} 
	std::cout << std::endl;
	}; 

//main function
int main(){
    
//size of matrices A,B,C
	const int M=3; //Rows of A
	const int N=2; //Columns B
	const int K=2; //Columns of A Rows of B

   
//equation parameters
	const double alpha=1;
	const double beta=0;
	const int lda=M;
	const int ldb=K;
	const int ldc=M;  
	
  
//declare matrices
	double A[M*K];
    double B[K*N];
	double C[M*N];

//create matrix objects
mat mat1(A,M,K,"A");
mat mat2(B,K,N,"B");
mat mat3(C,M,N,"C");

//set elements of A and B
mat1.smatrix();
mat2.smatrix();

//call dgemm function to calculate AB
	cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans,
				M, N, K, 
				alpha, A,
				lda, B, ldb,
				beta,C,ldc);


//print results
mat1.pmatrix();
mat2.pmatrix();
mat3.pmatrix();

std::cout << A[1] << A[2]<< std::endl;
	return 0;          
}
