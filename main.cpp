#include <iostream>

#include "carFiles/car.cpp"
#include "carFiles/carOperations.cpp"

#include "customerFiles/customer.cpp"
#include "customerFiles/customerOperations.cpp"


using std::cout;
using std::endl;
using std::cin;

int main() {
    cout << "Hello, World!" << std::endl;
    Car car1("Honda","Civic","Black","SD1923",
             2007,15, false);
    cout<<"Your car: "<< car1.getBrand()<<" "<<car1.getModel()
             <<" "<<car1.getProductionYear()<<" "<<car1.getPlates()<<" and color is: "<<car1.getColor()<<endl;
    cout<<"Cost of one day of rent is: "<<car1.getCostPerDay()<<"$"<<endl;
    cout<<endl;

    changeColor(car1);
    changeCostPerDay(car1);

    cout<<"New car: "<<car1.getModel()<<" color is: "<<car1.getColor()<<" ";
    cout<<"and the cost per day now is: "<<car1.getCostPerDay()<<"$"<<endl;

    for(int i=0; i<2; i++){
        checkAvailability(car1);
        changeAvailability(car1);
    }

    cout<<"new customer: "<<endl;
    Customer customer("Jan","Nowak","ABC123",
                      false);
    cout<<"newly create customer is: "<<customer.getName()<<" "<<customer.getSurname()<<" and his driver license number: "<<customer.getDriverLicenseNumber()<<endl;

    checkIfCustomerRentedCar(customer);
    cout<<endl;
    cout<<endl;

    int firstDecision = 0, secondDecision = 0;
    cout<<"What do you want to do?"<<endl;
    cout<<"1 - Car operations"<<endl;
    cout<<"2 - Customers operations"<<endl;
    cin>> firstDecision;

    switch(firstDecision){
        case 1:
            cout<<"What do you want to do?"<<endl;
            cout<<"1 - Add new car to database"<<endl;
            cout<<"2 - Display all cars"<<endl;
            cout<<"3 - Search car"<<endl;
            cout<<"4 - Go back"<<endl;
            cin>>secondDecision;
            switch (secondDecision) {
                default:
                    break;
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
            }
            break;
        case 2:
            cout<<"What do you want to do?"<<endl;
            cout<<"1 - Add new car to database"<<endl;
            cout<<"2 - Display all cars"<<endl;
            cout<<"3 - Search car"<<endl;
            cout<<"4 - Go back"<<endl;
            cin>>secondDecision;
            switch (secondDecision) {
                default:
                    break;
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
            }
    }


    return 0;
}
