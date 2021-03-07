#include <iostream>  // cout

#include "tasks.hpp"

using namespace std;

int main() {
    int arr[4] = {2, 4, 6, 8};
    int *par0 = &arr[0];
    int *par3 = &arr[3];
    par0[3] = 1;
    cout << "par0: " << par0 << endl;
    cout << "*par0: " << *par0 << endl;
    cout << "par3: " << par3 << endl;
    cout << "*par3: " << *par3 << endl;
    return 0;
}