#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "cblas.h"

int main(){
	
    int i=0;
    int j=0;
    
//size of matrices A,B,C

	const int M=2; //Rows of A
	const int N=1; //Columns B
	const int K=2; //Columns of A Rows of B

   
//equation parameters

	const double alpha=1;
	const double beta=0;
	const int lda=M;
	const int ldb=K;
	const int ldc=M;  
   
 //define matrices
 
	double A[M*K]={6,7,3,2};
	const double B[N*K]={4,5};
	double C[M*N];
	
	for(i=0;i<M;i++){
		for(j=0;j<K;j++){
			if (i=M*j){
				A[i]=2*i;} else A[i]=0;}
			}
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
          
   
   std::cout <<  "A= " << A[0] << "," << A[2] << std::endl;
   std::cout <<  "   " << A[1] << "," << A[3] << std::endl << std::endl;
   
   std::cout <<  "B= " << B[0] << std::endl;
   std::cout <<  "   " << B[1] << std::endl << std::endl;
   
   std::cout << "C= " << C[0] << std::endl;
   std::cout << "   " << C[1] << std::endl;
   
	return 0;          
}
			 
			 
			 
