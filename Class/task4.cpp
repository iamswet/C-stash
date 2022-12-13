//Menu Driven Program to form addition

#include "iostream"
using namespace std;

class Addition{
public:
    void sum(int a,int b){
        cout<<"The sum is: "<<a+b<<endl;
    }
    void sum(int a,int b,int c){
        cout<<"The sum is: "<<a+b+c<<endl;
    }
    void sum(float a,float b){
        cout<<"The sum is: "<<a+b<<endl;
    }
};

int main(){
    int choice;
    cout<<"Enter 1 to add 2 integers\nEnter 2 to add 3 integers\nEnter 3 to add 2 floating point numbers: \n";
    cin>>choice;
    Addition a1;
    if(choice==1){
        int a,b;
        cout<<"Enter 2 integers: ";
        cin>>a>>b;
        a1.sum(a,b);
    }
    if(choice==2){
        int a,b,c;
        cout<<"Enter 3 integers: ";
        cin>>a>>b>>c;
        a1.sum(a,b,c);
    }
    if(choice==3){
        float a,b;
        cout<<"Enter 2 floating point numbers: ";
        cin>>a>>b;
        a1.sum(a,b);
    }
    return 0;
}
