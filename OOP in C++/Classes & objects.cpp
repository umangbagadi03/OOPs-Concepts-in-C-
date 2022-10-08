// Classes & objects
#include<iostream>
using namespace std;

class Car {   // class
    
    // properties
    public: // acess specifier
      string brand;  // attribute
      string model;  // attribute
      int year;    // attribute

      Car(string x, string y, int z) {   // creating constructors with parameters
        brand = x;
        brand = y;
        year = z;


      }
};
int main() {
    // Create Car objects and call the constructor with different values

    Car carObj1("bmw","xuv",2019);
    Car carObj2("mercedise","suv",2022);

    // print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
}
 


