#include <iostream>

using namespace std;

class Person
{
    //PRIVATE member variables: 
private: 
    string phoneNumber; 


public: 
    string name; 

    Person(string phoneNumber, string name)
        :phoneNumber(phoneNumber), name(name) {};

    friend void callPerson(const Person& p);
};

void callPerson(const Person& p)
{
    cout << "I am calling " << p.name << " whose number is: " << p.phoneNumber << endl; 
}


int main()
{
    Person p{ "867-5309", "Joe Blow" };
    callPerson(p); 
    
    return 0;
}