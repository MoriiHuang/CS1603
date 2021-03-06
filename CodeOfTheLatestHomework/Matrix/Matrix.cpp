#include<iostream>
#include"Matrix.h"
void Matrix::create_space()
{
    matrix = new int*[row];
    for (int i = 0; i < row; ++i)
        matrix[i] = new int[column];
}

void Matrix::create_space(const Matrix &m)
{
    create_space();
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < column; ++j)
            matrix[i][j] = m.matrix[i][j];
}

void Matrix::delete_space()
{
    for (int i = 0; i < row; ++i)
        delete[] matrix[i];
    delete[] matrix;
}

Matrix::Matrix(const Matrix &other)
    :row{ other.row }, column { other.column }
{
    create_space(other);
}

Matrix &Matrix::operator=(const Matrix &other)
{
    if (this == &other)
        return *this;

    delete_space();
    row = other.row;
    column = other.column;
    create_space(other);
    return *this;
}

Matrix operator+(const Matrix &m1, const Matrix &m2)
{
    Matrix result{ m1.row, m1.column };
    for (int i = 0; i < result.row; ++i)
        for (int j = 0; j < result.column; ++j)
            result.matrix[i][j] = m1.matrix[i][j] + m2.matrix[i][j];
    return result;
}

istream &operator>>(istream &is, Matrix &m)
{
    for (int i = 0; i < m.getrow(); ++i)
        for (int j = 0; j < m.getcolumn(); ++j)
            is >> m(i, j);
    return is;
}

ostream &operator<<(ostream &os, const Matrix &m)
{
    for (int i = 0; i < m.getrow(); ++i)
    {
        for (int j = 0; j < m.getcolumn() - 1; ++j)
            os << m(i, j) << ' ';
        os << m(i, m.getcolumn() - 1) << endl;
    }
    return os;
}
