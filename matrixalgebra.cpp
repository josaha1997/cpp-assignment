#include "matrix.hpp"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include<string.h>

using namespace std;
int main()
{
    Matrix matrix1,matrix2,matrix3,x0;
    //Reading matrix from file
	int pos=matrix1.readMatrix("matrix1.txt",0);
	pos=x0.readMatrix("matrix1.txt",pos+1);
	Matrix sqmatrix(matrix1,matrix1.row,matrix1.column-1);
	/*pos=matrix3.readMatrix("matrix1.txt",pos+1);

	//Addition of two matrices
	Matrix answer=matrix1+matrix2;
	cout<<"Addition\n";
	answer.display();
	//Writing addition matrix into file
	answer.writeMatrix("matrix1.txt","Addition");
	
	//Subtraction of two matrices
	answer=matrix1-matrix2;
	cout<<"Subtract\n";
	answer.display();
	//Writing subtraction matrix into file
	answer.writeMatrix("matrix1.txt","Subtraction");

	//Multiplication of two matrices
	answer=matrix1*matrix2;
	cout<<"Multiplication\n";
	answer.display();
	//Writing multiplication matrix into file
	answer.writeMatrix("matrix1.txt","Multiplication");

	//Scalar Multiplication
	double scalar_value=10;
	answer=scalar_value*matrix1;
	cout<<"Scalar multiplication\n";
	answer.display();
	//Writing into file
	answer.writeMatrix("matrix1.txt","Scalar Multiplication by 10");
	
	//Transpose
	answer=matrix3.transpose();
	cout<<"transpose\n";
	answer.display();
	answer.writeMatrix("matrix1.txt","Transpose");*/
	//matrix1[0][0]=6;
	/*cout<<"matrix1[0][0]"<<matrix1[0][0]<<"\n";
	double maxeigen=matrix1.powerMethod(x0);
	cout<<"maxeigen"<<maxeigen<<"\n";*/
	/*matrix3=matrix1.inverse();
	matrix3.display();	
	matrix1=matrix1.getSubMatrix(0,0,matrix1.row);
	matrix1.display();
	matrix3=matrix3*matrix1;
	matrix3.display();*/	
	//Gauss
	/*Matrix answer=matrix1.gaussianElemination();
	cout<<"Gaussian\n";
	answer.display();
	answer.writeMatrix("matrix1.txt","Gauss");*/
	Matrix answer1=matrix1.gaussJacobi();
	cout<<"Gauss JAcobi\n";
	Matrix answer2=matrix1.gaussSeidal();
	cout<<"Gauss Seidal\n";
	//answer.display();
	//answer.writeMatrix("matrix1.txt","Gauss");
	//Check if matrix is identity
	/*if(matrix1.isIdentity())
		matrix1.writeMatrix("matrix1.txt","Identity Matrix: true");
	else
		matrix1.writeMatrix("matrix1.txt","Identity Matrix: false");
		
	//Check if matrix is Symmetric matrix
	if(matrix1.isSymmetric())
		matrix1.writeMatrix("matrix1.txt","Symmetric Matrix: true");
	else
		matrix1.writeMatrix("matrix1.txt","Symmetric Matrix: false");
		
	//Check if matrix is Null
	if(matrix1.isNull())
		matrix2.writeMatrix("matrix1.txt","Null matrix: true");
	else
		matrix1.writeMatrix("matrix1.txt","Null Matrix: false");
		
	//Check if matrix is Diagonal matrix
	if(matrix1.isDiagonal())
		matrix1.writeMatrix("matrix1.txt","Diagonal Matrix: true");
	else
		matrix1.writeMatrix("matrix1.txt","Diagonal Matrix: false");*/
    	
	//Check if matrix is Diagonaly dominant
	/*if(sqmatrix.isDiagonalyDominant())
   		matrix2.writeMatrix("matrix1.txt","Diagonaly Dominant: true");
	else
		matrix2.writeMatrix("matrix1.txt","Diagonaly Dominant: false");*/
    return 0;
}
