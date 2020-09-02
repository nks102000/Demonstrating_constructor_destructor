#include<iostream>
using namespace std;
class complex{
    float real,img;
    public:
    complex(){
        real=img=10;
    }
    complex(int a,int b){
        real=a;
        img=b;
    }
    complex(const complex &x){
        real=x.real;
        img=x.img;
    }
    void show() {
        cout<<real<<"+i"<<img<<endl;
    }
    ~complex(){
        cout<<"Destructor Called";
    }
};
int main(){
    complex c,c1(10,12),c2(c1);
    c.show();
    c1.show();
    c2.show();
    return 0;
}