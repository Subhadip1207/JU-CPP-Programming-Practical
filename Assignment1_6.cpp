/*. Write a C++ Program using constructor and destructor for checking if the given year is
leap year or not.*/
#include<iostream>
using namespace std;

class LeapYear
{
    private :
        int year;
    public:
        LeapYear(int y){
            year=y;
        }
        ~LeapYear(){
            cout<<"Object is destroyed"<<endl;
        }
        void checkLeapYear(){
            if(year%100==0){
                if(year%400==0)
                    cout<<year<<" is a leap year."<<endl;
                else
                    cout<<year<<" is not a leap year."<<endl;
            }else{
                if(year%4==0){
                    cout<<year<<" is a leap year."<<endl;
                }else{
                    cout<<year<<" is not a leap year."<<endl;
                }
            }
        }
};
int main(){
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    LeapYear obj(year);
    obj.checkLeapYear();
    return 0;
}