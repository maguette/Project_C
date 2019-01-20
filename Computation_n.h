//
// Created by Maguette Top on 2019-01-19.
//

#ifndef UNTITLED9_COMPUTATION_N_H
#define UNTITLED9_COMPUTATION_N_H

#include <iostream>
using namespace std;

void n_comptutation() {
    int n;
    double r, PV, PMT, r_PV;


    cout << "Provide an interest rate : r" << endl;
    cin >> r;
    while(r<=0) {
        cout << "Please provide a strictly positive interest rate r" << endl;
        cin >> r;
    }

    cout << "Provide Present value PV" << endl;
    cin >> PV;
    while(PV<=0) {
        cout << "Please provide a striclty positive  PV " << endl;
        cin >> PV;
    }

     cout << "r*PV = " << r*PV  << "\n";


    cout << "Provide a value for the instalment : PMT" << endl;
    cin >> PMT;
    while(PMT<= r*PV) {
        cout << "Please provide a strictly greater than r*PV " << endl;
        cin >> PMT;
    }


    cout << "n: " <<  log(PMT/(PMT-r*PV))/ log(1+r) << "\n";

}

#endif //UNTITLED9_COMPUTATION_N_H
