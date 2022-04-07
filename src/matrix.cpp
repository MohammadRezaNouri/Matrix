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

void Matrix::Transposed()
{
    unsigned long int temp;
    float **tmp = new float *[_colsize];
    for (unsigned long int Q = 0; Q < _colsize; Q++)
        tmp[Q] = new float[_rowsize];
    for (unsigned long int i = 0; i < _colsize; i++)
        for (unsigned long int j = 0; j < _rowsize; j++)
            tmp[i][j] = _mtx[j][i];
    Deallocate();
    _mtx = new float *[_colsize];
    for (unsigned long int MN = 0; MN < _colsize; MN++)
        _mtx[MN] = new float[_rowsize];
    temp = _rowsize;
    _rowsize = _colsize;
    _colsize = temp;
    for (unsigned long int M = 0; M < _rowsize; M++)
        for (unsigned long int N = 0; N < _colsize; N++)
            _mtx[M][N] = tmp[M][N];
    cout << "Do you want to see the modified matrix?(no=0, yes=1)" << endl;
    cin >> temp;
    if (temp == 1)
    {
        cout << "Matrix Converted :" << endl;
        Display();
    }
    for (unsigned long int i = 0; i < _rowsize; i++)
        delete[] tmp[i];
    delete[] tmp;
}

void Matrix::Add(Matrix MATRIX)
{
    int temp;
    if (MATRIX._rowsize == _rowsize && MATRIX._colsize == _colsize)
    {
        for (unsigned long int i = 0; i < _rowsize; i++)
            for (unsigned long int j = 0; j < _colsize; j++)
                _mtx[i][j] += MATRIX._mtx[i][j];
        cout << "Do you want to see the modified matrix?(no=0, yes=1)" << endl;
        cin >> temp;
        if (temp == 1)
        {
            cout << "Matrix Converted :" << endl;
            Display();
        }
    }
    else if (MATRIX._rowsize != _rowsize)
        cout << "The rows are not equal!" << endl;
    else
        cout << "The cols are not equal!" << endl;
}

void Matrix::Sub(Matrix MATRIX)
{
    int temp;
    if (MATRIX._rowsize == _rowsize && MATRIX._colsize == _colsize)
    {
        for (unsigned long int i = 0; i < _rowsize; i++)
            for (unsigned long int j = 0; j < _colsize; j++)
                _mtx[i][j] -= MATRIX._mtx[i][j];
        cout << "Do you want to see the modified matrix?(no=0, yes=1)" << endl;
        cin >> temp;
        if (temp == 1)
        {
            cout << "Matrix Converted :" << endl;
            Display();
        }
    }
    else if (MATRIX._rowsize != _rowsize)
        cout << "The rows are not equal!" << endl;
    else
        cout << "The cols are not equal!" << endl;
}

void Matrix::Deallocate()
{
    for (unsigned long int i = 0; i < _rowsize; i++)
        delete[] _mtx[i];
    delete[] _mtx;
}

void Matrix::special(size_t row, size_t col, float number)
{
    int temp;
    _mtx[row - 1][col - 1] = number;
    cout << "Do you want to see the modified matrix?(no=0, yes=1)" << endl;
    cin >> temp;
    if (temp == 1)
    {
        cout << "Matrix Converted :" << endl;
        Display();
    }
}