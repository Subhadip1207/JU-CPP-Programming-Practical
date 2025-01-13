/*4. Print the pattern using class and objects
***********
*********
*******
*****
***
**/
#include<iostream>
using namespace std;

class Pattern
{
    public:
        void printPattern(int n){
            for(int i=n;i>0;i--){
                for(int j=0;j<n-i;j++){
                    cout<<" ";
                }
                for(int j=1;j<2*i;j++){
                    cout<<"*";
                }
                cout<<endl;
            }
        }
};

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    Pattern pattern;
    pattern.printPattern(n);
    return 0;
}