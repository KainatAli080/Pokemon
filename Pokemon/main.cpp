#include <iostream>
using namespace std;

int main() {
    
    // Player Game Start Code
    string player_name;

    cout << "\nEnter your name: ";
    cin >> player_name;
    cout << "\n";

    // Meeting Professor Oak
    cout << "Professor Oak: Ah, a Trainer. Hi, " << player_name << "! \nWelcome to the world of POKEMON!My name is Professor Oak. \n";
    cout << "Today is a momentous day -- I will be helping you choose your first Pokemon.\nEvery great Trainer remembers this day for the rest of their lives.\n";
    cout << "I give you three choices to choose from. So, choose wisely, young one. Your options are: ";
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
        return 0;
    }

    cout << "And an excellent one. But beware, Trainer, for this is only the beginning.\nYour journey is about to unfold. Now let's see if you've got what it takes to keep going.\n";
    cout << "Good luck, and remember... Choose wisely!\n";

    return 0;
}