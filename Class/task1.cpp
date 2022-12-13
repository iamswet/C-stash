//Menu Driven Program to find Area of Square and Rectangle Using Class

#include "iostream"
using namespace std;

class Shapes{
public:
    int Area;

    void calArea(float a,float b){
    Area=a*b;
    cout<<"The area of rectangle is: "<<Area<<endl;
    }

    void calArea(float a){
    Area=a*a;
    cout<<"The area of square is: "<<Area<<endl;
    }

};

int main(){
    int choice;
    cout<<"Enter 1 to find area of rectangle\nEnter 2 to find area of square:\n";
    cin>>choice;
    Shapes s1;

    if(choice==1){
        float num1,num2;
        cout<<"Enter the length and breadth of rectangle: ";
        cin>>num1>>num2;
        s1.calArea(num1,num2);
    }
    else if(choice==2){
        float num;
        cout<<"Enter the side of square: ";
        cin>>num;
        s1.calArea(num);
    }

    return 0;
}
