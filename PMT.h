//
// Created by Maguette Top on 2019-01-19.
//

#ifndef UNTITLED9_PMT_H
#define UNTITLED9_PMT_H

#include <iostream>
    using namespace std;

    void pmt() {
        int n;
        double r, PV, PMT;


        cout << "Provide a postive first number : n " << endl;
        cin >> n;
        while(n<0) {
            cout << "Please provide a positive integer n " << endl;
            cin >> n;
        }

        cout << "Provide  an interest rate : r " << endl;
        cin >> r;
        while(r<=0) {
            cout << "Please provide a strictly positive interest rate r " << endl;
            cin >> r;
        }

        cout << "Provide third number : PV" << endl;
        cin >> PV;


        cout << "PMT: " << r* PV * (1+ 1/(pow(1+r,n) -1)) << "\n";


    }
#endif //UNTITLED9_PMT_H
