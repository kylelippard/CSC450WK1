#include <iostream>
using namespace std;

class Person {
    // Data members
    string fName;
    string lName;
    string address;
    string city;
    int zipCode;

public:
    Person(string fName, string lName, string address, string city, int zipCode) {
          fName = fName;
          lName = lName;
          address = address;
          city = city;
          zipCode = zipCode;

    }

    // Member function to introduce the person
    void introduce()
    {
        cout << "Hi, my name is " << fName << " "<< lName << " my address is "
             << address << " " << city << " " << zipCode << endl;
    }
};
int main()
{
    Person tony("Tony","Stark", "200 Park Avenue", "Manhattan", 10166);
    tony.introduce();

}