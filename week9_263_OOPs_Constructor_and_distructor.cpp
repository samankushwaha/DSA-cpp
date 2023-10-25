
#include <iostream>
#include <string>
using namespace std;

class student{
    //Properties

    public:

    int age;
    int id;
    bool present;
    string name;
    int nos;
    int phoneno;
    string papa_name;


//constructor - default
student(){
    cout<<"Defaualt constructor called";
    
}

//Constructor - parameterised
student(int _id , int _age , int _nos , string _name,string gender){
    id =_id;
    age = _age;
    nos =_nos;
    name = _name;
    gender = "M";
    cout<<"Paramaterised constructor called";
}

student(int age , int phoneno , string name , string papa_name){

}

    //Behaviour
    void study(){
        cout<<"studying";
    }

    void bunk(){
        cout<<"bunkking";
    }

    void sleep(){
        cout<<"sleeping";
    }

};



int main(){

// cout<<sizeof(student)<<endl;

student s1;// --> this will called an default constructor 
cout<<endl;

student s2(1,12,5,"saman","M"); // this will call Parameterised Constructor
cout<<s2.name<<endl;
cout<<s2.id<<endl;

student(19, 6 ,"saman" , "sant_lala_kushwaha");
    cout<<"."<<endl;



// s1.name="saman";
// s1.id = 151;
// s1.present = 1;

// // s1.age --> cant access it coz its is private markek as default



    return 0;
}