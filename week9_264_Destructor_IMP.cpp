
#include <iostream>
#include <string>
using namespace std;

class animal{
    //states and properties
    private:
    int weight;
    public:
    int age=12;
    string type;

//CONSTRUCTOR
animal(){

    //here what v r doing is whenever the constructor called these values will initialized as 0
    this->weight = 0;
    this->age = 0;
    this->type = "";
    cout<<"DEFAULT-Constructor called"<<endl;
}


//PARAMETERIZED CONSTRUCTOR
animal(int age){
    this->age=age;
    cout<<"PARAMETERIZED-Constructor called"<<endl;
}


//COPY CONSTRUCTOR
animal(animal &b){
    this-> age=b.age;
    cout<<"COPY-Constructor called"<<endl;
}


    //behaviour
    void eat(){
        cout<<"eating"<<endl;
    }

    void sleep(){
        cout<<"sleeping"<<endl;
    }

//DESTRUCTOR , it will be called automatically , should be start with ~ tilda sign
    ~animal(){
        cout<<"I am the Destructor"<<endl;
    }



};


int main(){

//default constructor 
animal a;//So this will call the Default constructor coz it dosent have any parameter
//for static DESTRUCTOR will be called automatically

animal*hehe=new animal;
delete hehe;
//for Dynamic obj U have to delete it manually
//then the DESTRUCTOR will called


    return 0;
}