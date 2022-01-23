#ifndef CARRENTALSYSTEMPROJECT_CAR_H
#define CARRENTALSYSTEMPROJECT_CAR_H

#include <string>
using std::string;


class Car {

    string  brand;
    string  model;
    string color;
    string plates;

    int productionYear;
    float engineSize;
    int costPerDay;
    bool isTaken;

    friend class familyCar;
    friend class sportCar;
    friend class vanCar;

public:
    explicit Car(string brand="not given", string model="not given", string color="not given",
        string plates="not given", int productionYear=0, float enginzeSize=0 ,int costPerDay=0, bool isTaken=0);

    //SETTERS
    void setCostPerDay(int newCost);
    void setColor(string newColor);
    void setIsTaken(bool flag);

    //GETTERS
    string getBrand();
    string getModel();
    string getColor();
    string getPlates();
    int getProductionYear();
    float getEngineSize();
    int getCostPerDay();
    bool getIsTaken();


};


class familyCar : public Car{

    int numberOfSeats;

};

class sportCar : public Car{

    int horsepower;

};

class vanCar : public Car{

    int trunkCapacity;

};




#endif //CARRENTALSYSTEMPROJECT_CAR_H
