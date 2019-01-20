//
// Created by Maguette Top on 2019-01-19.
//

#ifndef UNTITLED9_PV_H
#define UNTITLED9_PV_H

#include <iostream>
using namespace std;

void pv() {
    int n;
    double r, PV, PMT;

    cout << "Provide the number of period : n" << endl;
    cin >> n;
    while(n<0) {
        cout << "Please provide a positive integer for n " << endl;
        cin >> n;
    }

    cout << "Provide an interest rate : r" << endl;
    cin >> r;
    while(r<=0) {
        cout << "Please provide a strictly positive interest rate r" << endl;
        cin >> r;
    }

    cout << "Provide a value for the instalment : PMT" << endl;
    cin >> PMT;


    cout << "PV: " <<  PMT / (r* (1+ 1/(pow(1+r,n) -1))) << "\n";

}

#endif //UNTITLED9_PV_H
