#include <iostream>

#include "carFiles/car.cpp"
#include "carFiles/carOperations.cpp"

#include "customerFiles/customer.cpp"
#include "customerFiles/customerOperations.cpp"

#include "userFunctions.cpp"


using std::cout;
using std::endl;
using std::cin;

vector<Car> listOfCars;

bool stillWorkingFlag = true;
bool firstOne = true;

int main() {

    Car car1("Honda","Civic","Black","SD1923",
            2007,1.8, 12, false);
    Car car2("Honda","Accord","Black","SD1923",
             2001,1.5, 14,false);
    Car car3("KIA","Kunga","Black","SD1923",
             2017,2, 7,false);

    listOfCars.push_back(car1);
    listOfCars.push_back(car2);
    listOfCars.push_back(car3);
//    cout<<"Your car: "<< car1.getBrand()<<" "<<car1.getModel()
//             <<" "<<car1.getProductionYear()<<" "<<car1.getPlates()<<" and color is: "<<car1.getColor()<<endl;
//    cout<<"Cost of one day of rent is: "<<car1.getCostPerDay()<<"$"<<endl;
//    cout<<endl;
//
//    changeColor(car1);
//    changeCostPerDay(car1);
//
//    cout<<"New car: "<<car1.getModel()<<" color is: "<<car1.getColor()<<" ";
//    cout<<"and the cost per day now is: "<<car1.getCostPerDay()<<"$"<<endl;
//
//    for(int i=0; i<2; i++){
//        checkAvailability(car1);
//        changeAvailability(car1);
//    }
//
//    cout<<"new customer: "<<endl;
//    Customer customer("Jan","Nowak","ABC123",
//                      false);
//    cout<<"newly create customer is: "<<customer.getName()<<" "<<customer.getSurname()<<" and his driver license number: "<<customer.getDriverLicenseNumber()<<endl;
//
//    checkIfCustomerRentedCar(customer);
//    cout<<endl;
//    cout<<endl;


    while(stillWorkingFlag){

        if(firstOne){
            cout<<"Welcome to the car rental system app."<<endl;
            listOfFunctionalities(greetingAndFirstDecision(), listOfCars, stillWorkingFlag);
            firstOne = false;
        }

        listOfFunctionalities(greetingAndFirstDecision(), listOfCars, stillWorkingFlag);



    }
    return 0;
}
