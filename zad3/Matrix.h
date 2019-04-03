#include <iostream>
#include <cstring>

class Matrix{
    private:
        int **content;
        int rows;
        int columns;
    public:
        Matrix();
        Matrix(int rows, int columns);
        Matrix(const Matrix &anotherMatrix);
        Matrix(std::string content);

        ~Matrix();

        void show();
        Matrix add(Matrix anotherMatrix);
};