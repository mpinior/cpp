#include "Matrix.h"

int main() {
    Matrix firstMatrix("[1 1 1; 2 2 2]");
    firstMatrix.show();
    Matrix secondMatrix(firstMatrix);
    secondMatrix.show();
    Matrix thirdMatrix("[-1 -1 -1; -2 -2 -2]");
    Matrix fourthMatrix = firstMatrix.add(thirdMatrix);
    fourthMatrix.show();
    return 0;
}