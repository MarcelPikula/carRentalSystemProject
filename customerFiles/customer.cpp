#include "customer.h"

Customer::Customer(string name, string surname, string driverLicenseNumber,
                   bool hasRentedCar) {
    this->name = std::move(name);
    this->surname = std::move(surname);
    this->driverLicenseNumber = std::move(driverLicenseNumber);
    this->hasRentedCar = hasRentedCar;

}

void Customer::setHasRentedCar(bool hasRentedCar) {
    this->hasRentedCar=hasRentedCar;
}

string Customer::getName() {
    return std::string(this->name);
}

string Customer::getSurname() {
    return std::string(this->surname);
}

string Customer::getDriverLicenseNumber() {
    return std::string(this->driverLicenseNumber);
}

bool Customer::getHasRentedCar() {
    return this->hasRentedCar;
}


