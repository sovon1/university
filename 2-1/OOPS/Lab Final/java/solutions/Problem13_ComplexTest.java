// Problem 13:
// Create a class called Complex for performing arithmetic with complex numbers.
// Complex numbers have the form realPart + imaginaryPart * i where i is √−1.
// Provide a constructor that enables an object of this class to be initialized when it’s declared.
// Provide a no-argument constructor with default values in case no initializers are provided.
// Provide public methods that perform the following operations:
// a) Add two Complex numbers
// b) Subtract two Complex numbers
// c) Print Complex numbers in the form (realPart, imaginaryPart)
class Complex {
    private double real;
    private double imag;

    public Complex() {
        this(0.0, 0.0);
    }
    public Complex(double real, double imag) {
        this.real = real;
        this.imag = imag;
    }
    public Complex add(Complex other) {
        return new Complex(this.real + other.real, this.imag + other.imag);
    }
    public Complex subtract(Complex other) {
        return new Complex(this.real - other.real, this.imag - other.imag);
    }
    public void print() {
        System.out.printf("(%f, %f)\n", real, imag);
    }
}

public class Problem13_ComplexTest {
    public static void main(String[] args) {
        Complex c1 = new Complex(2.5, 3.5);
        Complex c2 = new Complex(1.5, 2.5);
        Complex sum = c1.add(c2);
        Complex diff = c1.subtract(c2);
        System.out.print("c1: "); c1.print();
        System.out.print("c2: "); c2.print();
        System.out.print("Sum: "); sum.print();
        System.out.print("Difference: "); diff.print();
    }
}
