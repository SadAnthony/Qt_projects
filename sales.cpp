#include <sales.h>
#include <iostream>
#include <string>
namespace SALES {
    Sales::Sales(){
        for (int i = 0; i < 4; i++) {
            average = min = max = sales[i] = 0;
        }
    }
    Sales::Sales(const double * ar, int n) {
        average = 0;
        int i;
        for (i = 0; i < n; i++){
            sales[i] = ar[i];
            average += sales[i] / QUARTERS;
        }
        for (i = n; i < QUARTERS; i++)
            sales[i] = 0;
        max = min = sales[0];
        for (i = 1; i < QUARTERS; i++){
            max = sales[i] > max ? sales[i] : max;
            min = sales[i] < min ? sales[i] : min;
        }
    }
    void Sales::setSales(){
        int i;
        double ar[4];
        std::cout << "Enter 4 sales: ";
        for (i = 0; i < QUARTERS; i++){
            std::cin >> ar[i];
        }
        Sales one(ar);
        *this = one;
    }
    void Sales::showSales() const {
        using std::cout;
        using std::endl;
        cout << "Sales: ";
        for (int i = 0; i < QUARTERS; i++){
            cout << sales[i] << " ";

        }
        cout << "\nMax: " << max << "\nMin: " << min;
        cout << "\nAverage: " << average << endl;
    }
}
