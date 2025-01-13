/*2. Write a C++ program to calculate the area and perimeter of a triangle by creating a class
named 'Triangle' with separate member functions for (i) taking input from user, (ii)
Calculate the area, (iii) Calculate the perimeter, (iv) printing of data. Two functions must
be defined inside the class and two functions must be defined outside the class.*/
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

class Triangle
{
    private:
        double a,b,c;
    public:
        void takeinput(double s1,double s2,double s3){
            a=s1;
            b=s2;
            c=s3;
            if(a+b<=c || a+c<=b || c+b<=a ){
                cout<<"Invalid input";
                exit(0);
            }
        }
        
        double calculatePerimeter(){
            return a+b+c;
        }
        double calculateArea();
        void printdata();

};
        double Triangle :: calculateArea(){
            double s=(a+b+c)/2.0;
            return sqrt(s*(s-a)*(s-b)*(s-c));
        }
        void Triangle :: printdata(){
            cout<<"Area of Triangle is : "<<calculateArea()<<endl;
            cout<<"Perimeter of Triangle is : "<<calculatePerimeter()<<endl;
        }
int main(){
    double s1,s2,s3;
    cout<<"Enter sides of Triangle : ";
    cin>>s1>>s2>>s3;
    Triangle t;
    t.takeinput(s1,s2,s3);
    t.printdata();
    return 0;
}