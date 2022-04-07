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
    cout << "Do you want to see a sub-matrix for matrixes?(no=0, yes=1)" << endl;
    cin >> temp;
    if (temp == 1)
    {
        cout << "Which matrix?(matrix1=1, matrix2=2, both=3, cansel=4)" << endl;
        cin >> temp;
        if (temp == 1)
        {
            cout << "Please enter four numbers to display a sub-matrix of matrix1 (row : from number one to two and col : from number three to four)" << endl;
            cin >> T1 >> T2 >> T3 >> T4;
            matrix1.Display(T1, T2, T3, T4);
        }
        if (temp == 2)
        {
            cout << "Please enter four numbers to display a sub-matrix of matrix2 (row : from number one to two and col : from number three to four)" << endl;
            cin >> T1 >> T2 >> T3 >> T4;
            matrix2.Display(T1, T2, T3, T4);
        }
        if (temp == 3)
        {
            cout << "Please enter four numbers to display a sub-matrix of matrix1 (row : from number one to two and col : from number three to four)" << endl;
            cin >> T1 >> T2 >> T3 >> T4;
            matrix1.Display(T1, T2, T3, T4);
            cout << "Please enter four numbers to display a sub-matrix of matrix2 (row : from number one to two and col : from number three to four)" << endl;
            cin >> T1 >> T2 >> T3 >> T4;
            matrix2.Display(T1, T2, T3, T4);
        }
    }
    cout << "Do you want to convert matrixes to transcriot?(no=0, yes=1)" << endl;
    cin >> temp;
    if (temp == 1)
    {
        cout << "Which matrix?(matrix1=1, matrix2=2, both=3, cansel=4)" << endl;
        cin >> temp;
        if (temp == 1)
        {
            matrix1.Transposed();
        }
        if (temp == 2)
        {
            matrix2.Transposed();
        }
        if (temp == 3)
        {
            matrix1.Transposed();
            matrix2.Transposed();
        }
    }
    cout << "Do you want to sum the matrixes?(no=0, yes=1)" << endl;
    cin >> temp;
    if (temp == 1)
    {
        cout << "Which?(matrix1+matrix2=1, matrix2+matrix1=2, cansel=3)" << endl;
        cin >> temp;
        if (temp == 1)
        {
            matrix1.Add(matrix2);
        }
        if (temp == 2)
        {
            matrix2.Add(matrix1);
        }
    }
    cout << "Do you want to Negative the matrixes?(no=0, yes=1)" << endl;
    cin >> temp;
    if (temp == 1)
    {
        cout << "Which?(matrix1-matrix2=1, matrix2-matrix1=2, cansel=3)" << endl;
        cin >> temp;
        if (temp == 1)
        {
            matrix1.Sub(matrix2);
        }
        if (temp == 2)
        {
            matrix2.Sub(matrix1);
        }
    }
    cout << "Do you want to change special element of matirxes?(no=0, yes=1)" << endl;
    cin >> temp;
    if (temp == 1)
    {
        cout << "Which matrix?(matrix1=1, matrix2=2, both=3, cansel=4)" << endl;
        cin >> temp;
        if (temp == 1)
        {
            cout << "Please enter the location of element and enter the number for change :" << endl;
            cin >> T1 >> T2 >> tmp;
            matrix1.special(T1, T2, tmp);
        }
        if (temp == 2)
        {
            cout << "Please enter the location of element and enter the number for change :" << endl;
            cin >> T1 >> T2 >> tmp;
            matrix2.special(T1, T2, tmp);
        }
        if (temp == 3)
        {
            cout << "Please enter the location of element and enter the number for change for matrix1 :" << endl;
            cin >> T1 >> T2 >> tmp;
            matrix1.special(T1, T2, tmp);
            cout << "Please enter the location of element and enter the number for change for matrix2 :" << endl;
            cin >> T1 >> T2 >> tmp;
            matrix2.special(T1, T2, tmp);
        }
    }
    cout << "Do you want to power Matrixes?(no=0, yes=1)" << endl;
    cin >> temp;
    if (temp == 1)
    {
        cout << "Which matrix?(matrix1=1, matrix2=2, both=3, cansel=4)" << endl;
        cin >> temp;
        if (temp == 1)
        {
            cout << "How power(integer)?" << endl;
            cin >> T1;
            matrix1.Power(T1);
            cout << "Do you want to see the modified matrix?(no=0, yes=1)" << endl;
            cin >> T2;
            if (T2 == 1)
            {
                cout << "Matrix Converted :" << endl;
                matrix1.Display();
            }
        }
        if (temp == 2)
        {
            cout << "How power(integer)?" << endl;
            cin >> T1;
            matrix2.Power(T1);
            cout << "Do you want to see the modified matrix?(no=0, yes=1)" << endl;
            cin >> T2;
            if (T2 == 1)
            {
                cout << "Matrix Converted :" << endl;
                matrix2.Display();
            }
        }
        if (temp == 3)
        {
            cout << "How power(integer)(matrix1)?" << endl;
            cin >> T1;
            matrix1.Power(T1);
            cout << "Do you want to see the modified matrix?(no=0, yes=1)" << endl;
            cin >> T2;
            if (T2 == 1)
            {
                cout << "Matrix Converted :" << endl;
                matrix1.Display();
            }
            cout << "How power(integer)(matrix2)?" << endl;
            cin >> T1;
            matrix2.Power(T1);
            cout << "Do you want to see the modified matrix?(no=0, yes=1)" << endl;
            cin >> T2;
            if (T2 == 1)
            {
                cout << "Matrix Converted :" << endl;
                matrix2.Display();
            }
        }
    }
    return 0;
}