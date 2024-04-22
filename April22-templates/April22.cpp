#include <iostream>

#include<vector>

using namespace std;

//operator 
//friend
//using templates in C++ is called being "generic" 

void doSomething(int a)
{

}

/*a "generic function" */
template<typename Type> 
void doSomethingWithT(Type input)
{
    cout << "\"Adding\" the value " << input << " to itself ..." << endl;
    cout << input + input << endl;
    //1 + 2 = 3
    //    "1" + "2" = "12"
}; 




struct Person
{
    string name; 
    int age; 

};


int main()
{

    int integer = 3; 
    string word = "abc"; 

    doSomethingWithT(integer); 
    doSomethingWithT(word);

    Person p; 
    //cout << p + p 
    p.age = 35; 
    p.name = "Seth";

    //doSomethingWithT(p);

    cout << "Hello World";

    return 0;
}