#include<iostream>
using namespace std;

class Bird
{
    public:  virtual void speak(){
        cout<<"speaking in base"<<endl;
    }
};

class sparrow : public Bird{
    public :
             void speak(){
                cout<<"speaking in derived"<<endl;
             }
};

int main()
{
    sparrow* b = new sparrow();

    b->speak();

    return 0;
}