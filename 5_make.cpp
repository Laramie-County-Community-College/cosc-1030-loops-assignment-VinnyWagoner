/*
Complete the following programs; when finished take a screen capture of the output from your running program and package it with your .cpp file. Submit a zipped folder with your work.

1.  Apartment Building

A brand new 16 floor apartment building is wrapping up construction and it is time for the building to start bringing in residents. Each floor can hold a maximum of 6 residents (it's a really pricey building).

Set up a loop to display the number of each floor, and ask the user how many apartments are occupied. Do not accept numbers greater than 6 for the number of occupied apartments.

When the loop is complete have it total up the number of occupied apartments (this should be a running total throughout the loops iterations).

Display the total number of rooms, the number of occupied rooms, the number of unoccupied rooms, and the percentage of occupied rooms, all with appropriate labels and spacing.

NOTE: It is traditional that American buildings do not have a 13th floor!  The loop should skip the entire 13th iteration.

INPUT VALIDATION: Remember not to accept numbers less than 0 or greater than 6 for the number of occupied rooms per floor.

 #include <iostream>
using namespace std;

int main() {
    const int FLOORS = 16;
    const int MAX_PER_FLOOR = 6;

    int totalRooms = 0;
    int totalOccupied = 0;

    for (int floor = 1; floor <= FLOORS; ++floor) {
        if (floor == 13) { // Skip floor 13
            continue;
        }

        int occupied;
        cout << "Floor " << floor << ": How many apartments are occupied (0-6)? ";
        cin >> occupied;

        // simple input check
        while (occupied < 0 || occupied > MAX_PER_FLOOR) {
            cout << "Invalid. Enter a number 0-6: ";
            cin >> occupied;
        }

        totalRooms += MAX_PER_FLOOR;
        totalOccupied += occupied;
    }

    int totalUnoccupied = totalRooms - totalOccupied;
    double percent = (static_cast<double>(totalOccupied) / totalRooms) * 100.0;

    cout << "\nTotal apartments: " << totalRooms << endl;
    cout << "Occupied: " << totalOccupied << endl;
    cout << "Unoccupied: " << totalUnoccupied << endl;
    cout << "Percent occupied: " << percent << "%" << endl;

    return 0;
}

2.  Random Number Guessing Game

Write a program that generates a random number between 1 and 100 and asks the user to guess what the number is.  

If the user's guess is higher than the random number, the program should display "Too high, try again."  

If the user's guess is lower than the random number the program should display "Too low, try again."  

The program should use a do-while loop that repeats until the user guesses the number correctly.  

The program should also employ a while loop that keeps track of the number of guesses made by the user and, once the user guesses the number correctly, displays the number of guesses the user made.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // seed random
    int number = (rand() % 100) + 1;
    int guess;
    int tries = 0;

    do {
        cout << "Enter a guess (1-100): ";
        cin >> guess;
        tries++;

        if (guess > number) {
            cout << "Too high, try again.\n";
        } else if (guess < number) {
            cout << "Too low, try again.\n";
        }
    } while (guess != number);

    cout << "Correct! The number was " << number << ".\n";
    cout << "You guessed it in " << tries << " tries.\n";

    return 0;
}

*/
 #include <iostream>
using namespace std;

int main() {
    const int FLOORS = 16;
    const int MAX_PER_FLOOR = 6;

    int totalRooms = 0;
    int totalOccupied = 0;

    for (int floor = 1; floor <= FLOORS; ++floor) {
        if (floor == 13) { // Skip floor 13
            continue;
        }

        int occupied;
        cout << "Floor " << floor << ": How many apartments are occupied (0-6)? ";
        cin >> occupied;

        // simple input check
        while (occupied < 0 || occupied > MAX_PER_FLOOR) {
            cout << "Invalid. Enter a number 0-6: ";
            cin >> occupied;
        }

        totalRooms += MAX_PER_FLOOR;
        totalOccupied += occupied;
    }

    int totalUnoccupied = totalRooms - totalOccupied;
    double percent = (static_cast<double>(totalOccupied) / totalRooms) * 100.0;

    cout << "\nTotal apartments: " << totalRooms << endl;
    cout << "Occupied: " << totalOccupied << endl;
    cout << "Unoccupied: " << totalUnoccupied << endl;
    cout << "Percent occupied: " << percent << "%" << endl;

    return 0;
}