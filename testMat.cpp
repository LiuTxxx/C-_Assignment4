#include <iostream>
#include "Matrix.h"
int main() {
    float * f = new float[9] {1.0f, 2.0f, 3.0f, 4.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    Matrix mat("A" ,f, 9, 3, 3);
    Matrix mat2(mat);
    Matrix mat3("B",2,3);
    Matrix mat4 = mat2;
    Matrix mat5;
    std::cin >> mat5;
    std::cout << mat <<  mat2 << mat * mat2;
    std::cout << mat2 * mat3 << mat2 * 2.0;
    std::cout << 2.0 * mat << mat + 2 << mat2 - 2 << mat2 / 2 << mat / 0;
    std::cout << mat2 + mat2 << mat + mat3 << mat - mat2;
}
