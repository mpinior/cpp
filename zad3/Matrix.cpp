#include "Matrix.h"

Matrix::Matrix() {

}
Matrix::Matrix(int rows, int columns) {
    this->rows = rows;
    this->columns = columns;
    this->content = new int* [rows];
    for (int i = 0; i < rows; i++) {
        this->content[i] = new int [columns];
        for (int j=0; j < columns; j++) {
            this->content[i][j] = 0;
        }
    }
}
Matrix::Matrix(const Matrix &anotherMatrix) {
    this->content = new int* [anotherMatrix.rows];
    this->rows = anotherMatrix.rows;
    this->columns = anotherMatrix.columns;
    for (int i=0; i<anotherMatrix.rows; i++) {
        this->content[i] = new int [anotherMatrix.columns];
        for (int j=0; j<anotherMatrix.columns; j++) {
            this->content[i][j] = anotherMatrix.content[i][j];
        }
    }
}
Matrix::Matrix(std::string content) {
    int rows = 0;
    int columns = 0;
    for (int i=0; i<content.size(); i++) {
        if(((content[i] == ' ' and (content[i-1] == '[' or (content[i-1] >= '0' and content[i-1] <= '9'))) or content[i] == ';') and rows == 0) {
            columns += 1;
        }
        if (content[i] == ';' or content[i] == ']') {
            rows += 1;
        }
    }
    this->rows = rows;
    this->columns = columns;
    this->content = new int* [rows]; 
    for (int i = 0; i < rows; i++) {
        this->content[i] = new int [columns];
        for (int j=0; j < columns; j++) {
            this->content[i][j] = 0;
        }
    }
    int i=rows - 1;
    int j=columns - 1;
    int radix = 1;
    int tmp=0;
    for (int k=content.size()-1; k>=0; k--) {
        if (content[k] >= '0' and content[k] <= '9') {
            tmp += (content[k] - 48) * radix;
            radix *= 10;
        }
        if (content[k] == '-') {
            tmp *= -1;
        }
        if(content[k] == ' ' or content[k] == ';' or content[k] == '[') {
            this->content[i][j] = tmp;
            tmp = 0;
            radix = 1;
            j -= 1;
            if (j < 0) {
                j = columns;
                i -= 1;
            }
        }
    }
}  

Matrix::~Matrix(){
    for (int i=0; i<this->rows; i++) {
        delete[] this->content[i];
    }
    delete[] this->content;
}

void Matrix::show() {
    for (int i=0; i<this->rows; i++) {
        for (int j=0; j<this->columns; j++) {
            std::cout<<this->content[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

Matrix Matrix::add(Matrix anotherMatrix) {
    Matrix newMatrix(*this);
    newMatrix.content = new int* [rows];
    for (int i=0; i<newMatrix.rows; i++) {
        newMatrix.content[i] = new int [columns];
        for(int j=0; j<newMatrix.columns; j++) {
            newMatrix.content[i][j] = this->content[i][j] + anotherMatrix.content[i][j];
        }
    }
    return newMatrix;
}