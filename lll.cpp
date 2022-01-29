#include<iostream>

using namespace std;

class MyClass
{
private:

public:
int *data;
int size;
    MyClass(int size){
        this->size=size;
        this->data=new int [size];
        for (int i = 0; i < size; i++)
        {
            data[i]=i;
        }
        cout<<"Constructor "<<this<<endl; 
    }

    MyClass(const MyClass &other){
        this->size=other.size; 
        this->data = new int [other.size];
        for (int i = 0; i < size; i++)
        {
            this->data[i]=other.data[i];    
        }
              
        cout<<"Constructor copy"<<this<<endl;
    }
    
    void operator = (const MyClass &other){
        cout<<"Priswoil"<<this<<endl;
        delete[] this->data;
        this->size=other.size;
        this->data=new int [other.size];
        for (int i = 0; i < other.size; i++)
        {
            data[i]=other.data[i];
        }
                
        
    }
    
    bool operator == (const MyClass &other){
        if(this->size==other.size){
            for (int i = 0; i < other.size; i++)
            {
                if (this->data[i]!=other.data[i])
                {
                    return false;
                }
            }
            return true;
        }
        else{
            return false;
        }
    }


    bool operator != (const MyClass &other){
        if(this->size==other.size){
            for (int i = 0, cout = 0; i < other.size; i++)
            {
                if (this->data[i]!=other.data[i])
                {
                    return true;
                }
            }
            return false;
        }
        else{
            return true;
        }
    }


    ~MyClass(){
        delete[] data;
        cout<<"Destructor "<<this<<endl;
    }

    void print(){
        cout<<"============="<<endl;
        for (int i = 0; i < size; i++)
        {
            cout<<data[i];
        }
        cout<<endl<<"==============="<<endl;
    }
    
    void edit(){
        for (int i = 0; i < size; i++)
        {
            data[i]=data[i]+1;
        }
    }

};

void f(MyClass a){
    cout<<"f"<<endl;
}


int main(){
    MyClass a(4);
    MyClass b(4);

    a.edit();

    a.print();
    b.print();

    if (a!=b)
    {
        cout<<"!="<<endl;
    }
    else {
        cout<<"="<<endl;
    }
    

    return 0;
}
