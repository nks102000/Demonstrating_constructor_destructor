#include<iostream>
using namespace std;
class time1{
    float hh,mm;
    public:
    time1(){
        hh=mm=10;
    }
    time1(int a,int b=0){
        hh=a;
        mm=b;
    }
    time1(const time1 &x){
        hh=x.hh;
        mm=x.mm;
    }
    void show() {
        cout<<hh<<":"<<mm<<endl;
    }
    ~time1(){
        cout<<"Destructor Called";
    }
};
int main(){
    time1 c,c1(10,12),c3(20),c2(c1);
    c.show();
    c1.show();
    c2.show();
    c3.show();
    return 0;
}