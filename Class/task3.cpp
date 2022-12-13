//Program to add feet and inches

#include "iostream"
using namespace std;

class Distance{
public:
    int feet,inch;
    Distance(){
        cout<<"Enter feet and inches: ";
        cin>>feet>>inch;
    }

    Distance(int a,int b){
        feet=a;
        inch=b;
    }

    void operator+(Distance obj){
        Distance t3(0,0);
        t3.feet=feet+obj.feet;
        t3.inch=inch+obj.inch;

        while(t3.inch>=12){
            t3.inch-=12;
            t3.feet+=1;
        }

        cout<<"The distance is:\n";
        cout<<t3.feet<<" feets"<<endl;
        cout<<t3.inch<<" inches"<<endl;
    }
};

int main(){
    Distance obj1,obj2;
    obj1+obj2;
    return 0;
}
