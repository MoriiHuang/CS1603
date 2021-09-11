#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>
using namespace std;
class Matrix{
    friend Matrix operator+(const Matrix &m1,const Matrix &m2);
    friend istream &operator>>(istream &is, Matrix &m);
    friend ostream &operator<<(ostream &os, const Matrix &m);
private:
    int row,column;
    int **matrix;
    void create_space();
    void create_space(const Matrix& m);
    void delete_space();
public:
    Matrix(int m,int n):row{m},column{n}{create_space();}
    Matrix(const Matrix& other);
    Matrix &operator=(const Matrix &other);
    ~Matrix() {delete_space();}
    int getrow() const{return row;}
    int getcolumn() const{return column;}
    int &operator()(int m,int n){return matrix[m][n];}
    const int& operator()(int m,int n) const{return matrix[m][n];}
};

#endif // MATRIX_H
