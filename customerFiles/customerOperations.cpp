#include <iostream>
#include "customer.h"

using std::cout;
using std::endl;

void checkIfCustomerRentedCar(Customer &customer){
    if(customer.getHasRentedCar()){
        cout<<"He has rented car."<<endl;
    }else{
        cout<<"he has not rented car."<<endl;
    }
}
