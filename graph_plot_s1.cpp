#include <iostream>
#include <cmath>
#include <vector>
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

using namespace std;

class Graph {
public:
    vector<double> Hc_values;
    vector<double> T_values;

    void formula(double Hc) {
        double t;
        double Tc = 9.2;
        double Ho = 150 * 1000;

        double value = 1 - (Hc / Ho);
        if (value < 0) {
            cout << "Error: sqrt() of a negative number is not possible!" << endl;
            return;
        } else {
            t = Tc * sqrt(value);
            cout << "Hc: " << Hc << " -> T: " << t << endl;
            Hc_values.push_back(Hc);
            T_values.push_back(t);
        }
    }

    void loop() {
        int num;
        cout << "Enter number of readings: ";
        cin >> num;

        double *Hc = new double[num];  
        for (int i = 0; i < num; i++) {
            cout << "Enter value " << (i + 1) << " for Hc: ";
            cin >> Hc[i];
        }
        cout << endl;

        for (int i = 0; i < num; i++) {
            formula(Hc[i]);
        }

        delete[] Hc;  
    }

    void plot() {
        plt::scatter(Hc_values, T_values, 50);  
        plt::xlabel("Critical Magnetic Field (Hc)");
        plt::ylabel("Temperature (T)");
        plt::title("Hc vs. T Relationship");
        plt::show();
    }
};

int main() {
    Graph g1;
    g1.loop();
    g1.plot();
    return 0;
}
