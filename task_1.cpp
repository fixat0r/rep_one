#include<iostream>
#include<cmath> //для определения числа E
#include<iomanip> //для форматирования вывода
using namespace std;

void foo1(){
    int a=31;
    int b=18;
    int c=79;
    cout<<a<<" "<<b<<" "<<c<<endl;
}

void foo2(){
    int a=47, b=52, c=150;
    cout<<a<<"  "<<b<<"  "<<c<<endl;
}

void foo3 (){
    int a=50;
    int b=10;
    cout<<a<<endl;
    cout<<b<<endl;
}

void foo4(){
    cout<<5<<endl<<10<<endl<<21<<endl;
}

void foo5(){
    cout<<endl<<1<<endl<<endl<<2<<endl;
}

void foo6(){
    double pi = M_PI;
    cout<<setprecision(4)<<pi<<endl;
}

void foo7(){
    cout<<setprecision(2)<<M_E<<endl;//M_E-константа(определена через #define)
        //setprecision(2) указывает длинну вывода !!!ОКРУГЛЯЕТ ЧИСЛО!!!
}

void foo8(){
    int a;
    cin>>a;
    cout<<"You enter : "<<a<<endl;
}

void foo9(){
    int a;
    cin>>a;
    cout<<a<<" - you number"<<endl;
}

void foo10(){
    string name;
    cin>>name;
    cout<<name;
}

void foo11(){
    string soccer_name;
    cin>>soccer_name;
    cout<<soccer_name<<" - this is a champion!";
}

void foo12(){
    string name;
    cin>>name;
    cout<<"Hello, "<<name<<"!"<<endl;
}

void foo13(){
    int number;
    cin>>number;
    cout<<"Next number after the number "<<number<<" - "<<number+1<<endl;
    cout<<"For the number "<<number<<" previous number - "<<number-1<<endl;
}

void foo14(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    cout<<num1<<"  "<<num2<<"  "<<num3<<endl;
}

void foo15(){
    int num1,num2,num3,num4;
    cin>>num1>>num2>>num3>>num4;
    cout<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<endl;
}

void foo16(){
    int t,v,x,y;
    cout<<"Enter t, v, x and y: ";
    cin>>t>>v>>x>>y;
    cout<<"a) "<<5<<" "<<10<<"       "<<"b) "<<100<<" "<<t<<"       "<<"c) "<<x<<" "<<25<<endl;
    cout<<"   "<<7<<" cm"<<"          "<<1949<<" "<<v<<"         "<<x<<" "<<y<<endl;
}

void foo17(){
    int a,b,x,y;
    cout<<"Enter a, b, x and y: ";
    cin>>a>>b>>x>>y;
    cout<<"a) "<<2<<" kg"<<"       "<<"b) "<<a<<" "<<1<<"       "<<"c) "<<x<<" "<<y<<endl;
    cout<<"   "<<13<<" "<<17<<"         "<<19<<" "<<b<<"         "<<5<<" "<<y<<endl;
}
int main(){

    foo17();
    return 0;
}