#include <iostream>
#include <vector> // Including the vector library
#include <fstream> // Including the file stream library
using namespace std;
 enum Level {
  LOW,
  MEDIUM,
  HIGH
};
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  time_t timestamp;
time(&timestamp);

// Display the date and time represented by the timestamp
cout << ctime(&timestamp);
}
