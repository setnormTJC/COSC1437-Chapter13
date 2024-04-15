#include <iostream>

using namespace std;


struct Person
{
    char gender; 
    int height; 
    string name; 
    double amountOfMoneyInBankAct; 

    Person(char gender, int height, string name, double amountOfMoneyInBankAct)
        :gender(gender), height(height), name(name), amountOfMoneyInBankAct(amountOfMoneyInBankAct)
    {};

    void operator > (const Person& otherPerson)
    {
        cout << "Don't compare people!\n";
/*        if (this->gender == 'F' && otherPerson.gender == 'M')
        {
            return true; 
        }

        else
        {
            return false; 
        }
 */   }
};

int main()
{
    string word = "alpha"; //remember the word guessing game? 

    cout << "The index at which the FIRST 'a' occurs is: " << word.find('a') << endl;
    //the "find" member function of the "string" class is "overloaded" (it has multiple "flavors") 
    cout << "The index of the SECOND 'a' is: " << word.find('a', 2) << endl; //2 is the STARTING search index 


    Person p1{ 'F', 69, "Alice", 123.99 };
    Person p2{ 'M', 71, "Bob", -473.23 };

    //cout << p1 << endl; 

   // p1 > p2; 
    //if (p1 > p2)
    //{
    //    cout << p1.name << " is \"greater than \" " << p2.name << endl; 
    //}

    //else
    //{
    //    cout << "p1 is NOT greater than p2\n"; 
    //}

    return 0;
}