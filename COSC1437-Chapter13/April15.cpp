#include <iostream>

#include<algorithm>
#include <vector>

using namespace std;


struct Shirt
{
    int size;  //XS -> 0, S -> 1, M -> 2, etc.
    string brand;

    /*Documentation on the thing I just typed*/
    Shirt(int size, string brand)
        :size(size), brand(brand) {}

    void demoTheMeaningOfThis()
    {
        cout << "the VALUE OF this is: " << this << endl; 
    }

    bool operator < (const Shirt& otherShirt)
    {
        //return (this->size < otherShirt.size); 

        //a more verbose alternative to the one-line equivalent above: 
        if (this->brand < otherShirt.brand)
        {
            return true; 
        }

        else
        {
            return false; 
        }
    }
};

void printShirtsList(vector<Shirt> shirtsList)
{
    for (Shirt s : shirtsList)
    {
        cout << s.brand << "\t" << s.size << endl; 
    }
}

int main()
{
   
    //Shirt lesserShirt(1, "z brandName");  //let's say size 0 means "extra small" 
    //Shirt greaterShirt(3, "b other brand name");

    //cout << std::boolalpha; 
    //cout << (lesserShirt < greaterShirt) << endl; 


    //cout << "The address of shirtObject in main is: " << &shirtObject << endl; 
    //shirtObject.demoTheMeaningOfThis(); 

    vector<Shirt> shirtsOnAmazon; 
    shirtsOnAmazon.push_back(Shirt(2, "Whatever shirt brand"));
    shirtsOnAmazon.push_back(Shirt(1, "American Eagle"));
    shirtsOnAmazon.push_back(Shirt(4, "Some OTHER shirt brand - "));
    shirtsOnAmazon.push_back(Shirt(6, "Ekouaer"));

    cout << "List of shirts BEFORE calling std::sort (<algorithm>): \n";
    printShirtsList(shirtsOnAmazon);

    std::sort(shirtsOnAmazon.begin(), shirtsOnAmazon.end());

    cout << "\n\nAFTER calling std::sort (<algorithm>): \n";
    printShirtsList(shirtsOnAmazon);

    //vector<int> nums = { 1, 23, 55, 22, 211, 68 };

    //cout << "BEFORE (calling the sort function in <algorithm> header file) : \n";
    //for (int num : nums) //"range-based" for loop
    //{
    //    cout << num << " ";
    //}
    //cout << "\n";

    //std::sort(nums.begin(), nums.end()); //begin and end are similar to pointers (okay?)

    //cout << "AFTER : \n";
    //for (int num : nums) //"range-based" for loop
    //{
    //    cout << num << " ";
    //}
    //cout << "\n";


    return 0;
}