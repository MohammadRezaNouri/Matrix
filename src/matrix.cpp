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