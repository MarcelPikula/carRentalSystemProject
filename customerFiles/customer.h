#ifndef CARRENTALSYSTEMPROJECT_CUSTOMER_H
#define CARRENTALSYSTEMPROJECT_CUSTOMER_H

#include <string>
#include <vector>
using std::string;
using std::vector;

class Customer {

    string name;
    string surname;
    string driverLicenseNumber;
    bool hasRentedCar;


public:
    explicit Customer(string name="",string surname="",string driverLicenseNumber="",
             bool hasRentedCar=false);

    //SETTERS
    void setHasRentedCar(bool hasRentedCar);
    vector<Car> rentedCars;

    //GETTERS
    string getName();
    string getSurname();
    string getDriverLicenseNumber();
    bool getHasRentedCar();
};


#endif //CARRENTALSYSTEMPROJECT_CUSTOMER_H
