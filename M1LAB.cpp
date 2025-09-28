// CSC 134
// M1LAB
// Janice Snead
// September 28, 2025

#include <iostream>
using namespace std;

int main() {
    // This program will simulate an apple orchard.
    // The owner’s name
    string name = "Janice Snead";
    // number of apples owned
    int apples = 100;
    // price per apple
    double pricePerApple = 0.25;
    // calculate the total price of the apples
    double totalPrice = apples * pricePerApple;

    // print all the information about the orchard
    cout << "Welcome to " << name << "'s apple orchard." << endl;
    cout << "We have " << apples << " apples in stock." << endl;
    cout << "Apples are currently $" << pricePerApple << " each." << endl;
    // Final line, to print totalPrice
    cout << "If you want them all, that will be $" << totalPrice << endl;

    return 0;
}