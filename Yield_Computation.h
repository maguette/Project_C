//
// Created by Maguette Top on 2019-01-19.
//

#ifndef UNTITLED9_YIELD_COMPUTATION_H
#define UNTITLED9_YIELD_COMPUTATION_H

using namespace std;

    double f(double PMT, double PV, int n, double r) {
        double temp;
        temp = PMT / (r*(1+(1/(pow(1+r,n)-1)))) - PV ;
        return temp;
    }

    double approximateYTM(double PMT, double PV, int n){
        return (PMT -(PV)/(n))/(0.5*(PV));
    }

    double YTM(){
        double PMT,PV,r,rNext,k, temp;
        int n;

        //PROVIDING VALUES

        cout << "Please provide:" << endl;
        cout << "The Present Value:"; cin >> PV;
        cout << "The payment PMT:"; cin >> PMT;
        cout << "The number of periods"; cin >> n ;
        cout << "Periods Per Year:"; cin >> k;

        cout << "PMT: " << PMT << endl;
        cout << "n: " << n << endl;
     

        // starting points
        r = approximateYTM(PMT,PV,n);
        rNext = 0.95*r;

        while (abs(f(PMT,PV,n,rNext))> 0.001){
            temp = rNext;
            rNext = rNext - (f(PMT,PV,n,rNext)*(rNext - r))/(f(PMT,PV,n,rNext)-f(PMT,PV,n,r));
            r = temp;

        }

        cout << "objective function: " << f(PMT,PV,n,rNext) << endl;
        cout << "YTM : " << (rNext * k)*100 << "% ." << endl;
    }
#endif //UNTITLED9_YIELD_COMPUTATION_H
