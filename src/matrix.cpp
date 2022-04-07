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

void Matrix::Power(size_t pow)
{
    if (_rowsize == _colsize)
    {
        float **tmp = new float *[_rowsize];
        for (unsigned long int p = 0; p < _rowsize; p++)
            tmp[p] = new float[_colsize];
        float **temp = new float *[_colsize];
        for (unsigned long int r = 0; r < _colsize; r++)
            temp[r] = new float[_rowsize];
        float **TemP = new float *[_colsize];
        for (unsigned long int b = 0; b < _colsize; b++)
            TemP[b] = new float[_rowsize];
        for (unsigned long int g = 0; g < _rowsize; g++)
            for (unsigned long int f = 0; f < _rowsize; f++)
                TemP[g][f] = 0;
        for (unsigned long int i = 0; i < _rowsize; i++)
            for (unsigned long int j = 0; j < _colsize; j++)
                temp[i][j] = _mtx[i][j];
        for (unsigned long int o = 1; o < pow; o++)
        {
            for (unsigned long int k = 0; k < _rowsize; k++)
                for (unsigned long int l = 0; l < _colsize; l++)
                    tmp[k][l] = _mtx[k][l];
            for (unsigned long int z = 0; z < _rowsize; z++)
                for (unsigned long int x = 0; x < _rowsize; x++)
                    for (unsigned long int y = 0; y < _rowsize; y++)
                        TemP[z][x] += tmp[z][y] * temp[y][x];
            for (unsigned long int d = 0; d < _rowsize; d++)
                for (unsigned long int s = 0; s < _rowsize; s++)
                    _mtx[d][s] = TemP[d][s];
            for (unsigned long int a = 0; a < _rowsize; a++)
                for (unsigned long int q = 0; q < _rowsize; q++)
                    TemP[a][q] = 0;
        }
        for (unsigned long int I = 0; I < _rowsize; I++)
            delete[] TemP[I];
        delete[] TemP;
        for (unsigned long int J = 0; J < _rowsize; J++)
            delete[] temp[J];
        delete[] temp;
        for (unsigned long int K = 0; K < _rowsize; K++)
            delete[] tmp[K];
        delete[] tmp;
    }
    else
        cout << "The col are not equal row!" << endl;
}