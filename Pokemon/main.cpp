#include <iostream>
using namespace std;

int main() {
    
    // Player Game Start Code
    string player_name;

    cout << "\nEnter your name: ";
    cin >> player_name;
    cout << "\n" << endl;

    // Meeting Professor Oak
    cout << "Someone in a lab coat: Hi, " << player_name << "! Welcome to the world of POKEMON!My name is Professor Oak. \n";
    cout << "I will be helping you start with your first pokemon. I give you three choices to choose from:";
    cout << "\n\t1. Bulbasaur\n\t2. Charmander\n\t3. Squirtle\n";
    cout << "Which one would you like? \n\n";

    int choice = 0;
    cout << player_name << ": ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "\nProfessor Oak: You chose Bulbasuar! A wise choice. \n";
    }
    else if (choice == 2)
    {
        cout << "\nProfessor Oak: You chose Charmander! A fiery choice. \n";
    }
    else if (choice == 3)
    {
        cout << "\nProfessor Oak: You chose Squirtle! A cool choice. \n";
    }
    else
    {
        cout << "\nProfessor Oak: Based on your input, I believe it's safe to assume that you do NOT want any of the choices I've provided.\n";
        cout << "Professor Oak: Goodbye and Good day.\n\n\n";
    }



    return 0;
}