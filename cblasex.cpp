#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "cblas.h"
#include<string>

//function to print matrix values
class mat {
	public:
   mat(double *matrix,int a, int b, std::string mname){double S=*matrix; int m=b; int k=b; std::string name=mname;};
	
void pmatrix (void) {  
	int i=0;
    int j=0;
    
    std::cout << name << std::endl; 
   for(i=0;i<m;i++){
	   for(j=0;j<k;j++){std::cout << S[i+(j*(k+1))] << ",";}
	    std::cout << std::endl;
	}
	    std::cout << std::endl;
   };	   
 };
 
int main(){
	

    
//size of matrices A,B,C

	const int M=5; //Rows of A
	const int N=1; //Columns B
	const int K=2; //Columns of A Rows of B

   
//equation parameters

	const double alpha=1;
	const double beta=0;
	const int lda=M;
	const int ldb=K;
	const int ldc=M;  
   
 //define matrices
 
	double A[M*K]={6,7,3,2,2,2};
    double B[N*K]={4,5};
	double C[M*N];
	
	int j=0;
	
	for(j=0;j<M*K;j++){
				A[j]=j;
			};
   
	/*
	double * AP = (double*) malloc(sizeof(double)*M*N);
	
	AP[0] = 3;
	AP[1] = 2;
	AP[2] = 1;
	AP[2] = 2;

	std::cout << sizeof(double) << std::endl;
	
	std::cout << AP << std::endl;
	std::cout << *AP << std::endl;
	std::cout << *(AP+1) << std::endl;
	std::cout << *(AP+2) << std::endl;
	std::cout << *(AP+3) << std::endl;
	
	std::cout << A[0] << std::endl;
	std::cout << A[1] << std::endl;
	std::cout << A[2] << std::endl;
	std::cout << alpha << std::endl;
	std::cout << &alpha << std::endl;
	*/

//dgemm function

	cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans,
				M, N, K, 
				alpha, A,
				lda, B, ldb,
				beta,C,ldc);
                   
 //print results
 
 mat mat1(A,M,K,"A");

	mat1.pmatrix;
	/*
		std::cout << "A=" << std::endl;
		
	
		
		std::cout << "B=" << std::endl;
		
		Pmatrix(B,K,N);
		
		std::cout << "C=" << std::endl;
		
		Pmatrix(C,M,N);
		
   */
	return 0;          
}
			 
			 
			 
