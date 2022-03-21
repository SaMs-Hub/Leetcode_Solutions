#include <bits/stdc++.h>
using namespace std;

class Fraction
{
    int numerator;
    int denominator;

public:
    Fraction(int num, int den){
        this->numerator = num;
        this->denominator = den;
    }

    void display(){
        cout << this->numerator << "/" << this->denominator << endl;
    }

    void simplify() {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);

        for (int i = 1; i <= j/2; i++){
            if (this->numerator % i == 0 and this->denominator % i == 0){
                gcd = i;
            }
        }
        
        int num = numerator/gcd;
        int den = denominator/gcd;

        this->numerator = num;
        this->denominator = den;


    }


    // can call by  x + y instead of calling like x.add(y)
    Fraction operator+(Fraction const &F2) const{
        int lcm = this->denominator * F2.denominator;
        int x = lcm/this->denominator;
        int y = lcm/F2.denominator;

        int num = x * this->numerator + (y * F2.numerator);
        Fraction FNew(num, lcm);
        FNew.simplify();

        return FNew;
    }

    // can call by x * y instead of x.multipy(y);
    Fraction operator*(Fraction const &F2) const{
        int num = this->numerator * F2.numerator;
        int den = this->denominator * F2.denominator;

        Fraction FNew(num, den);
        FNew.simplify();

        return FNew;

    }

    bool operator==(Fraction const &F2) const{
        return(this->numerator == F2.numerator && this->denominator == F2.denominator);
    }
};

int main()
{
    Fraction F1(10,2);
    Fraction F2(11, 3);

    Fraction F3 = F1 + F2;
    F3.display();

    Fraction F4 = F1 * F2;
    F4.display();

    (F1 == F2) ? cout << "Yes, Equal" : cout << "Not Equal" ;

    return 0;
}
