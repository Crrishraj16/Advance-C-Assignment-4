#include <stdio.h>

struct complex
{
    float real;
    float imag;
};

typedef struct complex Complex;

Complex add(Complex c1, Complex c2);
Complex subtract(Complex c1, Complex c2);
Complex multiply(Complex c1, Complex c2);

int main()
{
    Complex c1, c2, result;

    printf("Enter the real and imaginary parts of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter the real and imaginary parts of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    // Addition
    result = add(c1, c2);
    printf("Addition: %.2f + %.2fi\n", result.real, result.imag);

    // Subtraction
    result = subtract(c1, c2);
    printf("Subtraction: %.2f + %.2fi\n", result.real, result.imag);

    // Multiplication
    result = multiply(c1, c2);
    printf("Multiplication: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}

Complex add(Complex c1, Complex c2)
{
    Complex result;

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    return result;
}

Complex subtract(Complex c1, Complex c2)
{
    Complex result;

    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;

    return result;
}

Complex multiply(Complex c1, Complex c2)
{
    Complex result;

    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c2.real * c1.imag);

    return result;
}
