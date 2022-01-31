#include <iostream>

void customerOperationsFunction();

void carOperationsFunction(vector<struct Car> vector);

int greetingAndFirstDecision(){
    int decision;
    cout<<endl;
    cout<<"What do you want to do?"<<endl;
    cout<<"1 - Car operations"<<endl;
    cout<<"2 - Customers operations"<<endl;
    cout<<"3 - Exit"<<endl;

    cin>>decision;

    return decision;

}

void listOfFunctionalities(int decision, vector<Car> listOfCars, bool &flag){

    switch(decision){
        case 1:
            carOperationsFunction(listOfCars);
            break;
        case 2:
            customerOperationsFunction();
            break;
        case 3:
            flag = false;
            break;
    }
}

void carOperationsFunction(vector<Car> listOfCars) {
    int decision, carId, number = 1;

    cout<<endl;
    cout<<"What do you want to do?"<<endl;
    cout<<"1 - Change color of car"<<endl;
    cout<<"2 - change cost of one day rent"<<endl;
    cout<<"3 - Show details about car"<<endl;
    cout<<"4 - Add new car"<<endl;
    cout<<"5 - Show list of all cars"<<endl;
    cout<<"6 - Exit"<<endl;

    cin>>decision;

    switch(decision){
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
        case 4:
            newCar(listOfCars);
            break;
        case 5:
            cout<<"list of all cars: "<<endl;
            for(auto i = begin(listOfCars); i != end(listOfCars); ++number, i++){

                cout<<number<<". "<<*i<<endl;
            }
            break;
        case 6:
            break;
    }

}

void customerOperationsFunction() {

}




