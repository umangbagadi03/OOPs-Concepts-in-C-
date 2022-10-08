/* Inheritance is an important pillar of object-oriented programming. Inheritance is the
process of inheriting the properties and behavior of an existing class into a new class.
When we inherit the class, we can reuse the existing class’s methods and fields into a
new class */

// code -
/*
class parent_class {
//Body of parent class
};
class child_class: access_modifier parent_class {
//Body of child class
}; 
*/

#include <iostream>
using namespace std;

// parent class
class Vehicle {
    public:
      string brand = "Ford";
      void honk() {
        cout << "tuut \n";

      }

};

// derived class
class Car: public Vehicle {   //class child_class: access_modifier parent_class {
    public:
      string model = "mustang";


};

int main() {
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;
    return 0;

}
      

