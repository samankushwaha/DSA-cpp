
/*ACCESS SPECIFIERS*/

//Public
//Private--->default
//Protected



#include <iostream>
// #include "1class_and_objects"
using namespace std;

class hero{
    public:
    int health;
    char level;

    void print(){
        cout<<level;
    }
};


int main(){

    //creration of object
    hero genos;
    hero saitama;

    // cout<<"size "<<sizeof(obj);

    genos.health = 55;
    genos.level = 'B';

    cout<<genos.health<<endl;
    cout<<genos.level<<endl;;

    return 0;
}