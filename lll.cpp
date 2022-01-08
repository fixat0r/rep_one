#include<iostream>
using namespace std;

string foo_1(){

    return "foo_1";
}

string foo_2(){

    return "foo_2";
}

void Show( string (*foo)() ){

    cout<<foo()<<endl;
}
int main(){
    int a=7;
    int &aref=a;
    aref++;
    cout<<aref<<endl;
    cout<<&aref<<endl;
    
return 0;    
}
