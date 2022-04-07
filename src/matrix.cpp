#include "matrix.h"

#include <iostream>
#include <iomanip>

using namespace std;

Matrix::Matrix(size_t row_col)
{
    _mtx = new float *[row_col];
    for (unsigned long int i = 0; i < row_col; i++)
        _mtx[i] = new float[row_col];
    _rowsize = row_col;
    _colsize = row_col;
}

Matrix::Matrix(size_t row, size_t col)
{
    _mtx = new float *[row];
    for (unsigned long int i = 0; i < row; i++)
        _mtx[i] = new float[col];
    _rowsize = row;
    _colsize = col;
}

Matrix::~Matrix()
{
}

void Matrix::Initialize()
{
    for (unsigned long int i = 0; i < _rowsize; i++)
        for (unsigned long int j = 0; j < _colsize; j++)
            cin >> _mtx[i][j];
}

void Matrix::Display() const
{
    for (unsigned long int i = 0; i < _rowsize; i++)
        for (unsigned long int j = 0; j < _colsize; j++)
            cout << _mtx[i][j] << "\t";
        cout << endl;
}

void Matrix::Display(size_t T1, size_t T2, size_t T3, size_t T4) const
{
    for (unsigned long int i = T1 - 1; i <= T2 - 1; i++)
        for (unsigned long int j = T3 - 1; j <= T4 - 1; j++)
            cout << _mtx[i][j] << "\t";
        cout << endl;
}