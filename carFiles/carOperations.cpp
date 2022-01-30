#include <iostream>
#include <vector>
#include "car.h"

using std::cout;
using std::cin;
using std::endl;

void changeColor(Car &car1){
    cout<<"change color of car: ";
    string newColor;
    cin>> newColor;
    car1.setColor(newColor);
}

void newCar(std::vector<Car> &Vector){
    string marka, model, plates, color;
    int productionYear, costPerDay;
    float engineSize;
    cout<<"Marka: ";
    cin>>marka;

    cout<<"model: ";
    cin>>model;

    cout<<"tablice: ";
    cin>>plates;

    cout<<"kolor: ";
    cin>>color;

    cout<<"rok produkcji: ";
    cin>>productionYear;

    cout<<"Koszt jednego dnia najmu: ";
    cin>>costPerDay;

    cout<<"Pojemnosc silnika: ";
    cin>>engineSize;
    cout<<endl;

    Car newlyMadeCar(marka,model,color,plates,
                     productionYear, engineSize, costPerDay,false);

    Vector.push_back(newlyMadeCar);
}

void changeCostPerDay(Car &car1){
    cout<<"change cost of one day rent of "<<car1.getBrand()<<" "<<car1.getModel()<<endl;
    int newCost;
    cin>> newCost;
    car1.setCostPerDay(newCost);
}

void carDetails(Car &car1){
    cout<<"All details: "<<endl;
    cout<<car1.getBrand()<<" "<<car1.getModel()<<" "<<car1.getProductionYear()<<" "<<car1.getColor()<<
    " "<<car1.getPlates()<<" "<<car1.getEngineSize()<<endl;
}

void changeAvailability(Car &car1){

    if(car1.getIsTaken()){
        car1.setIsTaken(false);
    }else{
        car1.setIsTaken(true);
    }
    cout<<"Availability has been changed"<<endl;
}


void checkAvailability(Car &car1){
    if(!car1.getIsTaken()){
        cout<<"This car is available to rent"<<endl;
    }else{
        cout<<"This car is not available to rent at the moment"<<endl;
    }

}