#include <iostream>

#include<algorithm>

using namespace std;

void printStuff(int a)
{
    cout << a << endl; 
}

void printStuff(int a, int b)
{
    cout << a << "\t" << b << endl; 
}

int printStuff(char a)
{
    cout << a << endl; 

    return(int)a; 

}

struct Car
{
    int mileage; 
    string make; //Ford, Honda, Tesla

    Car(int mileage, string make)
        :mileage(mileage), make(make) {};
};

struct Vehicle
{
    int mileRange; //as in how far on a "tank" 
    double cost; 

    Vehicle() = default; 

    Vehicle(int mileRange, double cost)
        :mileRange(mileRange), cost(cost) {};

    /*This is the overloaded addition operator for the Vehicle data type!*/
    Vehicle operator + (const Vehicle& otherVehicle)
    {
        Vehicle resultingVehicle; 

        resultingVehicle.cost = this->cost + otherVehicle.cost;
        resultingVehicle.mileRange = this->mileRange + otherVehicle.mileRange; 

        return resultingVehicle; 
    }

    bool isSameVehicle(const Vehicle& otherVehicle) //analogous to ==
    {
        if (this->cost == otherVehicle.cost
            &&
            this->mileRange == otherVehicle.mileRange)
        {
            return true;
        }

        else
        {
            return false; 
        }
    }

    bool operator == (const Vehicle& otherVehicle)
    {
        return (this->cost == otherVehicle.cost
            &&
            this->mileRange == otherVehicle.mileRange);
    }

    friend ostream& operator<<(ostream& os, const Vehicle& vehicleObject);
    
    //overloads the PRE-increment operator (ex: ++c)
    void operator++(/*Nothing in here!*/)
    {
        cost++; 
        mileRange++; 

        //return this; //this is a pointer to the current object 
    }
}; //end `Vehicle` class def.\


ostream& operator<<(ostream& os, const Vehicle& vehicleObject)
{
    os << "Cost is: " << vehicleObject.cost
        << "\nNumber of miles it can go on a tank: " << vehicleObject.mileRange << endl; 

   return os; 
}

int main()
{
    int a = 1; 
    cout << a++ << endl;//pre versus post-increment (decrement operator --) operator 
    cout << ++a << endl; 
    cout << a << endl; 

    Vehicle rv{ 50'011'111, 15'000.99 };
    Vehicle bike{ 500, 15'000.99 };
    ++bike;  //double plus good! (500 + 1, 15'000.99 + 1.00)
    //bike++; 
    cout << bike << endl; 


   // double C = 42; 
   // C++; 
   // //how many bytes for an integer in C++ ? (4 Bytes) 

   //double * pointerToC = &C; 
   // cout << "Address of C: " << pointerToC << endl; 
   // pointerToC++; 
   // cout << "That address after calling ++ on it: " << pointerToC << endl; 

    //cout << C << endl; 


    //overloading the equality operator ==
    
    
    //Car myCar{ 150'000, "Honda" }; 
    //Car yourCar{ 10'000, "Ford" };

    //Car sumOfTwoCars = myCar + yourCar; 
    //using aliasForInteger = int; 

   // aliasForInteger a = 432; 

    //cout << a << endl; 



    //cout << rv << endl; 

    //if (rv.operator==(bike))
    //{
    //    cout << "same vehicle\n";
    //}

    //else
    //{
    //    cout << "NOT same vehicle\n";
    //}

    //Vehicle superVehicle = rv + bike; //get a bike rack on back of RV 
    ////superVehicle.
    //cout << "Supervehicle's cost: " << superVehicle.cost
    //    << "\nSupervehicle's mile capacity: " << superVehicle.mileRange << endl; 

    ////printStuff()
    //// \
    //
    ////vector<Shirt> shirts; 
    ////std::sort()

    //string word = "alpha"; 

    //string otherWord = "beta";

    //cout << word + otherWord << endl; 

    //int a = 4; 
    //int b = 1783; 

    //cout << a + b << endl; 

    //float c = 3.0f; 
    //float d = 2.2f; 

    //cout <<"integer division: " <<  a / b << endl; //integer division 
    //cout << "floating point division: " << c / d << endl; 


    return 0;
}