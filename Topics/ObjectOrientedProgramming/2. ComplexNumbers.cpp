#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

    // taking the values
public:
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    // printing the values
    void print()
    {
        cout << real << " + " << imaginary << "j" << endl;
    }

    // adding the values
    void add(Complex const &c2)
    {
        this->real = this->real + c2.real;
        this->imaginary = this->imaginary + c2.imaginary;
    }

    // multiplying the values
    void multiply(Complex const &c2)
    {
        this->real = this->real * c2.real;
        this->imaginary = this->imaginary * c2.imaginary;
    }
};

int main()
{
    int real1, imaginary1, real2, imaginary2;
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    int choice;
    cin >> choice;

    Complex c1(real1, imaginary1);
    Complex c2(real2, imaginary2);

    if (choice == 0)
    {
        c1.add(c2);
        c1.print();
    }
    else if (choice == 1)
    {
        c1.multiply(c2);
        c1.print();
    }

    return 0;
}
