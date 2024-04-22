#include <iostream>
using namespace std;

class Matrix {
public: 
    int x11, x12, x21, x22;
public:
    Matrix(int a, int b, int c, int d) : x11(a), x12(b), x21(c), x22(d) {}

    // addition operator
    Matrix operator+(const Matrix& otherMatrix)
    {
        int sum11 = this->x11 + otherMatrix.x11;
        int sum12 = this->x12 + otherMatrix.x12;
        int sum21 = this->x21 + otherMatrix.x21;
        int sum22 = this->x22 + otherMatrix.x22;
        return Matrix(sum11, sum12, sum21, sum22);
    }

    // subtraction operator
    Matrix operator-(const Matrix& numberinmatrix)
    {
        int sub11 = this->x11 - numberinmatrix.x11;
        int sub12 = this->x12 - numberinmatrix.x12;
        int sub21 = this->x21 - numberinmatrix.x21;
        int sub22 = this->x22 - numberinmatrix.x22;
        return Matrix(sub11, sub12, sub21, sub22);
    }

    // multiplication operator
    Matrix operator*(const Matrix& numberinmatrix)
    {
        int mul11 = this->x11 * numberinmatrix.x11 + x12 * numberinmatrix.x21;
        int mul12 = this->x11 * numberinmatrix.x12 + x12 * numberinmatrix.x22;
        int mul21 = this->x21 * numberinmatrix.x11 + x22 * numberinmatrix.x21;
        int mul22 = this->x21 * numberinmatrix.x12 + x22 * numberinmatrix.x22;
        return Matrix(mul11, mul12, mul21, mul22);
    }

    void print() {
        cout << x11 << "     " << x12 << endl;
        cout << x21 << "     " << x22 << endl;
    }
};

int main() {

    Matrix matrix1(1, 2, 
                   3, 4);

    cout << matrix1.x11 << endl; 
    
    Matrix matrix2(5, 6, 7, 8);

    cout << "First matrix: " << endl;
    matrix1.print();
    cout << endl;
    cout << "Second matrix: " << endl;
    matrix2.print();
    cout << endl;

    Matrix sumMatrix = matrix1 + matrix2;
    Matrix differenceMatrix = matrix1 - matrix2;
    Matrix productMatrix = matrix1 * matrix2;

    cout << "Sum of the first and second matrices:" << endl;
    sumMatrix.print();
    cout << endl;

    cout << "Difference of the first and second matrices:" << endl;
    differenceMatrix.print();
    cout << endl;

    cout << "Product of the first and second matrices:" << endl;
    productMatrix.print();

    return 0;
}