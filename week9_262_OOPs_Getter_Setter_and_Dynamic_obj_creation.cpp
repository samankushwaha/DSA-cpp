#include <iostream>
using namespace std;

class animal{

    //Properties
    private:
    int weight;
    int population;

    public:
    int age;
    string name;

    //behaviour
    void eat(){
        cout<<"eating"<<endl;
    }

    void sleep(){
        cout<<"sleepping"<<endl;
    }

//**********GETTER**********

/* as we know v can use PRIVATE data members inside the class 
so we made a function (getter) calling the data member which is weight
then we made another function to edit it*/
    int getweight(){
        return weight;
    }

    int getpopulation(){
        return population;
    }

//**********SETTER**********

/*here v set the PRIVATE data member using setter */
    void setweight(int w){
        weight = w;
    }

    void setpopulation(int p){
        population = p;
    }

//default Constructor
    animal(){
        cout<<"default constructor called "<<endl;
    }


};

int main(){
//object creation 

    animal a;

//object creation DYNAMICALLY
    animal* suresh = new animal;//so here we created a animal pointer in heap memory dynamically
    (*suresh).age = 16;
    (*suresh).eat();

    //alternate for dynamical allocation
    suresh->age=19;
    suresh->eat();

    a.age =13;
    a.name = "elephant";
    cout<<"age of a is"<<a.age<<endl;
    cout<<"name of a is"<<a.name<<endl;

    a.eat();
    a.sleep();



//accessing PRIVATE members
    a.setweight(101);
    a.setpopulation(881);

    cout<<"weight is"<<a.getweight();
    cout<<"weight is"<<a.getpopulation();

    return 0;


} 