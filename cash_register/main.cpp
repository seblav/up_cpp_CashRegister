//
//  main.cpp
//  cash_register
//
//  Created by Sebastien Lavoie on 2016-08-04.
//  Copyright © 2016 Sebastien Lavoie. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numItems = 0;
    double totalCost = 0.;
    double cash;
    double totalChange;
    double itemValue;
    int numDollars;
    int numQuarters;
    int numDimes;
    int numNickel;
    int numPennies;
    char moreItems = 'y';
    int changeLeft;
    
    cout<<"Cash register - new transaction"<<endl;
    
    while (moreItems == 'y') {
        cout<<"Enter item price: "<<endl;
        cin>>itemValue;
        
        totalCost += itemValue;
        numItems += 1;
        
        cout<<"Are there more items?"<<endl;
        cin>>moreItems;
        
        cout<<"Your current total is: "<<totalCost<<endl;
    }
    
    cout<<"Enter cash from customer: "<<endl;
    cin>>cash;
    
    totalChange = cash - totalCost;
    
    cout<<"Total change back is "<<fixed<<setprecision(2)<<totalChange<<endl;
    
    numDollars = int(totalChange);
    changeLeft = 100 * (totalChange - numDollars);
    numQuarters = changeLeft / 25;
    changeLeft -= 25 * numQuarters;
    numDimes = changeLeft / 10;
    changeLeft -= 10 * numDimes;
    numNickel = changeLeft / 5;
    changeLeft -= 5 * numNickel;
    numPennies = changeLeft;
    
    cout<<"Dollars: "<<numDollars<<endl;
    cout<<"Quarters: "<<numQuarters<<endl;
    cout<<"Dimes: "<<numDimes<<endl;
    cout<<"Nickel: "<<numNickel<<endl;
    cout<<"Pennies: "<<numPennies<<endl;
    
    return 0;
}


// test text add