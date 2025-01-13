/*5. Write a C++ program to create a class complex having two integers real and imaginary.
Create a three constructors function taking no argument, one argument and two arguments
for three constructors. Show () and sum() functions are member functions, displaying and
finding the addition of two objects respectively.*/
#include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imaginary;
    public:
    Complex(){
        real = 0;
        imaginary = 0;
    }
    Complex(int r){
        real = r;
        imaginary = 0;
    }
    Complex(int r, int i){
        real = r;
        imaginary = i;
    }
    void show(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    Complex sum(Complex c1,Complex c2){
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.imaginary = c1.imaginary + c2.imaginary;
        return temp;
    }
};
int main(){
    Complex c1;
    Complex c2(3);
    Complex c3(4,5);
    Complex result1 = c1.sum(c2,c3);
    result1.show();
    Complex result2 = c2.sum(c2,c1);
    result2.show();
    Complex result3 = c3.sum(c1,c2);
    result3.show();
    return 0;
}