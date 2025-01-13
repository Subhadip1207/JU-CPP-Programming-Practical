/*1. Write a C++ Program to calculate area of a circle to demonstrate the access modifier (A)
public (B) private (C) protected.*/
#include<iostream>
using namespace std;

class CalculateArea
{
private:
    double redius;
protected:
    double area;
public:
    void setRedius(double r){
        redius = r;
    }
    void calculate(){
        area=3.14*redius*redius;
    }
    void display(){
        cout<<"Area of circle : "<<area<<endl;
    }
};
int main(){
    double n;
    cout<<"Enter redius:"<<endl;
    cin>>n;
    CalculateArea c1;
    c1.setRedius(n);
    c1.calculate();
    c1.display();
    return 0;
}