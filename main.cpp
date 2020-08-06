#include "matrix.hpp"
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;
int main()
{
    unsigned int row, column;
    double tempVar;
    ifstream inFile("matrix.txt");
    if (!inFile)
    {
        cout << "Unable to open file!!";
        exit(0);
    }
    inFile >> row;
    inFile >> column;
    Matrix mainMatrix(row, column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (inFile >> tempVar)
            {
                mainMatrix.matrix[i][j] = tempVar;
                // cout<<"\t"<<mainMatrix.matrix[i][j];
            }
            else
            {
                i = row + 1;
                j = column + 1;
            }
        }
    }
    inFile.close();
    unsigned int noOfElements = row;
    unsigned int tempRow = row, tempColumn = column;
    Matrix secondPreviousCore;
    ofstream outFile("matrix.txt", std::ios::app);
    cout << noOfElements;
    int count = 0;
    while (count < noOfElements - 1)
    {
        Matrix core(--tempRow, --tempColumn);
        core = mainMatrix.getSubMatrix(1, 1, tempRow);
        /*outFile << "Core\n";
        for (int i = 0; i < core.column; i++)
        {
            for (int j = 0; j < core.row; j++)
                outFile << core.matrix[i][j] << "\t";
            outFile << "\n";
        }*/

        Matrix temp(2, 2);
        for (int i = 0; i < tempRow; i++)
        {
            for (int j = 0; j < tempColumn; j++)
            {
                temp = mainMatrix.getSubMatrix(i, j, 2);

                mainMatrix.matrix[i][j] = temp.determinant();
            }
        }

        /*outFile << "Main Matrix\n";
        /* for (int i = 0; i < mainMatrix.column; i++)
        {
            for (int j = 0; j < mainMatrix.row; j++)
                outFile << mainMatrix.matrix[i][j] << "\t";
            outFile << "\n";
        }*/

        if (count >= 1)
            mainMatrix = mainMatrix / secondPreviousCore;

        secondPreviousCore = core;
        /* outFile << "Main Matrix\n";
        /*for (int i = 0; i < mainMatrix.column; i++)
        {
            for (int j = 0; j < mainMatrix.row; j++)
                outFile << mainMatrix.matrix[i][j] << "\t";
            outFile << "\n";
        }*/

        count++;
    }
    /* Matrix temp(2, 2);
    temp = mainMatrix.getSubMatrix(0, 0, 2);
    mainMatrix.matrix[0][0] = temp.determinant();
    mainMatrix = mainMatrix / secondPreviousCore;*/
    outFile << "Determinant" << mainMatrix.matrix[0][0];

    outFile.close();
}
