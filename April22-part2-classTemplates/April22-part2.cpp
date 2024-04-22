#include <iostream>

#include<vector>

using namespace std;

template<typename T> 
struct MyArray
{
    T theData[10]; 

    void modifyElementAtIndex(int index, T dataToInsert)
    {
        theData[index] = dataToInsert; 
    }

    void print()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << theData[i] << " ";
        }
        cout << "\n";
    }
};

template<typename T> 
auto returnTDemo(T input)
{
    return T * 2; //what does this mean if input = "alpha" 
}

int main()
{
    auto b = "32.0f"; 
    //print(type(b))
    cout << typeid(b).name() << endl; 

    //auto result = returnTDemo(b); 

    //cout <<result << endl; 

    //vector<int> nums = { 1, 2, 3, 4 };
    //MyArray<string> myArray1; 
    ////cout << myArray1.theData << endl;
    //myArray1.modifyElementAtIndex(0, "alpha");
    //myArray1.print(); 

    //MyArray<MyArray<int>> tableOfInts; 
    //MyArray<int> row1; 
    //
    //row1.modifyElementAtIndex(0, 123); 
    //row1.modifyElementAtIndex(1, -454123);
    //row1.modifyElementAtIndex(2, 1241823); //123 -454123 1241823

    //tableOfInts.modifyElementAtIndex(0, row1); 

    //auto a = 5; 

    

    return 0;
}