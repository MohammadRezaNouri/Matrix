#include "matrix.h"

#include <iostream>
#include <iomanip>

using namespace std;

Matrix::Matrix(size_t row_col)
{
    _mtx = new float *[row_col];
    for (unsigned long int i = 0; i < row_col; i++)
    {
        _mtx[i] = new float[row_col];
    }
    _rowsize = row_col;
    _colsize = row_col;
}