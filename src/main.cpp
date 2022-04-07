#include "matrix.h"

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    unsigned long int row_col, row, col, T1, T2, T3, T4;
    int temp;
    float tmp;
    cout << "Hi" << endl
         << "Welcome to my program" << endl;
    cout << "Please enter the one number to row and col for create matrix1 x*x" << endl;
    cin >> row_col;
    Matrix matrix1(row_col);
    cout << "Please enter the two number to row and col for create matrix2 x*y" << endl;
    cin >> row >> col;
    Matrix matrix2(row, col);
    cout << "Please enter the parts of matrix1 like this :" << endl
         << "1 2 ... row_col" << endl
         << "1 2 ... row_col" << endl
         << "row_col 2 ... row_col" << endl;
    matrix1.Initialize();
    cout << "Please enter the parts of matrix2 like this :" << endl
         << "1 2 ... col" << endl
         << "1 2 ... col" << endl
         << "row 2 ... col" << endl;
    matrix2.Initialize();
    cout << "Do you want to see matrixes?(n=0, yes=1)" << endl;
    cin >> temp;
    if (temp == 1)
    {
        cout << "Which matrix?(matrix1=1, matrix2=2, both=3, cansel=4)" << endl;
        cin >> temp;
        if (temp == 1)
        {
            matrix1.Display();
        }
        if (temp == 2)
        {
            matrix2.Display();
        }
        if (temp == 3)
        {
            cout << "matrix1 :" << endl;
            matrix1.Display();
            cout << "matrix2 :" << endl;
            matrix2.Display();
        }
    }
    return 0;
}