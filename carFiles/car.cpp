#include "car.h"
#include <utility>

using std::string;

Car::Car(string brand, string model, string color, string plates,
         int productionYear, int costPerDay, bool isTaken) {
    this->brand = std::move(brand);
    this->model= std::move(model);
    this->color = std::move(color);
    this->plates = std::move(plates);
    this->productionYear = productionYear;
    this->costPerDay = costPerDay;
    this->isTaken = isTaken;
}

void Car :: setCostPerDay(int newCost){

    this->costPerDay = newCost;
}

void Car :: setColor(string newColor){

    this->color = std::move(newColor);
}

string Car::getBrand() {
    return string(this->brand);
}

string Car::getModel() {
    return string(this->model);
}

string Car::getPlates() {
    return string(this->plates);
}

string Car::getColor() {
    return string(this->color);
}

int Car::getProductionYear() {
    return this->productionYear;
}

int Car::getCostPerDay() {
    return this->costPerDay;
}

void Car::setIsTaken(bool flag) {
    this->isTaken=flag;
}

bool Car::getIsTaken(){
    return this->isTaken;
}



