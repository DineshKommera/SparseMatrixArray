//Author: Dinesh Reddy Kommera
//Date: 4th September, 2021
//Purpose: C++ program for Sparse Matrix Representation using Array

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int row,col;
    int sparMatrix[10][10];
    // Number of rows and columns
    cout<<"Enter no of rows of the matrix: ";
    cin>>row;
    cout<<"Enter no of columns of the matrix: ";
    cin>>col;

    for(int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            cin>>sparMatrix[i][j];
        }
        cout<<"\n";
    }

    int size = 0;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (sparMatrix[i][j] != 0)
                size++;
 
    // number of columns in compMatrix (size) must be equal to number of non - zero elements in sparseMatrix
    int compMatrix[3][size];
 
    // New matrix that represents rows, columns and values
    int k = 0;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (sparMatrix[i][j] != 0)
            {
                compMatrix[0][k] = i;
                compMatrix[1][k] = j;
                compMatrix[2][k] = sparMatrix[i][j];
                k++;
            }
 
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<size; j++)
            printf("%d ", compMatrix[i][j]);
 
        printf("\n");
    }
    return 0;
}