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
    int costPerDay;
    bool isTaken;

public:
    explicit Car(string brand="not given", string model="not given", string color="not given",
        string plates="not given", int productionYear=0, int costPerDay=0, bool isTaken=0);

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
    int getCostPerDay();
    bool getIsTaken();


};




#endif //CARRENTALSYSTEMPROJECT_CAR_H
