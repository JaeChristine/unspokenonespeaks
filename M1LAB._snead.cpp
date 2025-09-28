// CSC 134
// M1LAB
// Janice Snead
// September 28, 2025

#include <iostream>
using namespace std;

int main() {
    string owner = "Janice Snead";
    int apples = 100;
    double price_per_apple = 0.25;
    double total_cost = apples * price_per_apple;

    cout << "Welcome to " << owner << "’s apple orchard." << endl;
    cout << "We have " << apples << " apples in stock" << endl;
    cout << "Apples are currently $" << price_per_apple << " each." << endl;
    cout << "If you want them all, that will be $" << total_cost << endl;

    return 0;
}
