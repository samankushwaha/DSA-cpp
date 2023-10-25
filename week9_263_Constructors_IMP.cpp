
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
};


int main(){

//default constructor 
animal *suresh = new animal;//dynamic obj creation
animal a;//So this will call the Default constructor coz it dosent have any parameter

//parameterized constructor
animal b(40);//This will call the Parameterized constructor coz we gave it some input Parameters
cout<<a.age<<endl;


//Copy constructor
animal c=b;//So here v made a COPY constructor by giving b as a input parameter in copy constructor code by reference
animal z(c);
animal v(*suresh);

    return 0;
}