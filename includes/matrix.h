#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
public:
    Matrix(size_t);
    Matrix(size_t, size_t);
    ~Matrix();
    void Initialize();
    void Display() const;
    void Display(size_t, size_t, size_t, size_t) const;
    void Transposed();
    void Add(Matrix);
    void Sub(Matrix);
    void Deallocate();
    void special(size_t, size_t, float);
    void Power(size_t);
    void Copy(Matrix);

private:
    float **_mtx;
    size_t _rowsize;
    size_t _colsize;
};

#endif