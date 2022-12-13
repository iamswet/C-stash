//Program to Add 2 time intervals

#include "iostream"
using namespace std;

class Time{
public:
    int hr,minu,sec;
    Time(){
        cout<<"Enter hour,minute,seconds: ";
        cin>>hr>>minu>>sec;
    }

    Time(int a,int b,int c){
        hr=a;
        minu=b;
        sec=c;
    }

    void operator +(Time obj){
        Time t3(0,0,0);
        t3.hr=hr+obj.hr;
        t3.minu=minu+obj.minu;
        t3.sec=sec+obj.sec;

        while(t3.sec>=60){
            t3.sec-=60;
            t3.minu+=1;
        }

        while(t3.minu>=60){
            t3.minu-=60;
            t3.hr+=1;
        }

        cout<<"The time is:\n";
        cout<<t3.hr<<" hours"<<endl;
        cout<<t3.minu<<" minutes"<<endl;
        cout<<t3.sec<<" seconds"<<endl;
    }
};

int main(){
    Time obj1,obj2;

    obj1+obj2;
    return 0;
}
