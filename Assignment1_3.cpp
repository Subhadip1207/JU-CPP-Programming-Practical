/*3. Write a C++ program to create a class ‘Number_List’, which has separate member
functions to create an integer array at run time, to sort given Integer and to find the
minimum and maximum of the array.*/
#include <iostream>
using namespace std;

class Number_List
{
    private:
        int* arr;
        int size;
    public:
    void create_array(int s){
        size = s;
        arr = new int[s];
        for(int i=0;i<size;i++){
            cout<<"Enter element "<<i+1<<": ";
            cin>>arr[i];
        }
    }
    void sort_array(){
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    void find_min(){
        int min = arr[0];
        for(int i=1;i<size;i++){
            if(arr[i]<min){
                 min = arr[i];
            } 
        }
        cout<<"Minimum: "<<min<<endl;
    }
    void find_max(){
        int max = arr[0];
        for(int i=1;i<size;i++){
            if(arr[i]>max){
                max = arr[i];
            }   
        }
        cout<<"Maximum: "<<max<<endl;
    }
    void printArray(){
        cout<<"After sorting...."<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    Number_List list;
    list.create_array(n);
    list.sort_array();
    list.printArray();
    list.find_min();
    list.find_max();
    return 0;
}