#include <iostream>

#include "carFiles/car.cpp"
#include "carFiles/carOperations.cpp"

#include "customerFiles/customer.cpp"
#include "customerFiles/customerOperations.cpp"


using std::cout;
using std::endl;
using std::cin;

int main() {
    vector<Car> listOfCars;

//    cout << "Hello, World!" << std::endl;
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

    for(int i=1; i>0; i++){

        int firstDecision = 0, secondDecision = 0;
        cout<<"What do you want to do?"<<endl;
        cout<<"1 - Car operations"<<endl;
        cout<<"2 - Customers operations"<<endl;
        cout<<"3 - Exit"<<endl;
        cin>> firstDecision;

        if(firstDecision==3){
            break;
        }else{

            int number=1;

            switch(firstDecision){
                case 1:
                    cout<<"list of all cars: "<<endl;
                    for(auto i = begin(listOfCars); i != end(listOfCars); ++number, i++){

                        cout<<number<<". "<<*i<<endl;
                    }

                    cout<<endl;

                    for(int j=1; j>0; j++) {
                        cout<<"list of first 5 cars: "<<endl;
                        number = 1;
                        for(auto i = begin(listOfCars); i != end(listOfCars); ++number, i++){
                            if(number<=5){
                                cout<<number<<". "<<*i<<endl;
                            }else{
                                number = 1;
                                break;

                            }
                        }
                        cout<<endl;
                        cout<<"What do you want to do?"<<endl;
                        cout<<"1 - Change color of car"<<endl;
                        cout<<"2 - change cost of one day rent"<<endl;
                        cout<<"3 - Show details about car"<<endl;
                        cout<<"4 - Exit"<<endl;
                        cout<<"5 - Add new car"<<endl;
                        cout<<"6 - Show list of all cars"<<endl;


                        cin>>secondDecision;

                        if (secondDecision == 4) {
                            break;
                        }
                            int carId = 0;

                            switch (secondDecision) {
                                case 1:
                                    cout<<"Which car?"<<endl;
                                    cin>>carId;
                                    changeColor(listOfCars[carId]);
                                    break;
                                case 2:
                                    cout<<"Which car?"<<endl;
                                    cin>>carId;
                                    changeCostPerDay(listOfCars[carId]);
                                    break;
                                case 3:
                                    cout<<"Which car?"<<endl;
                                    cin>>carId;
                                    carDetails(listOfCars[carId]);
                                    break;
                                case 5:
                                    newCar(listOfCars);
                                    break;
                                case 6:
                                    cout<<"list of all cars: "<<endl;
                                    for(auto i = begin(listOfCars); i != end(listOfCars); ++number, i++){

                                        cout<<number<<". "<<*i<<endl;
                                    }

                            }
                        }

                case 2:
                    cout<<"What do you want to do?"<<endl;
                    cout<<"1 - Car operations"<<endl;
                    cout<<"2 - Customers operations"<<endl;
                    cout<<"3 - Exit"<<endl;

                    cin>>secondDecision;

                    for(int j=1; j>0;j++){

                    }
                    break;
            }

        }
    }
    return 0;
}
