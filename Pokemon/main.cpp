#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------- //
// ------------------------------  FEATURE 1 POKEMON SELECTION  ------------------------------- //
// -------------------------------------------------------------------------------------------- //


// ENUM structure
enum PokemonChoice {    
    Bulbasaur,
    Charmander,
    Squirtle,
    InvalidChoice
};

// Selecting Pokemon using enums
PokemonChoice enum_Pokemon_Choosing(PokemonChoice pokemonAssignedHere, int choice)
{
    // Implementation using Switch statements
    switch (choice)
    {
        case 1:
        {
            pokemonAssignedHere = Bulbasaur;
            cout << "\nProfessor Oak: A fine choice! Bulbasaur is always ready to grow on you! \n";
            break;
        }
        case 2:
        {
            pokemonAssignedHere = Charmander;
            cout << "\nProfessor Oak: A fiery choice! Charmander is yours! \n";
            break;
        }
        case 3:
        {
            pokemonAssignedHere = Squirtle;
            cout << "\nProfessor Oak: Splendid! Squirtle will keep you cool under pressure! \n";
            break;
        }
        default:
        {
            pokemonAssignedHere = Charmander;
            cout << "\nProfessor Oak: Hmm, that doesn't seem right. Let me choose for you… Charmander seems to be perfect for you. A fiery beast!\n";
            break;
        }
    }
    return pokemonAssignedHere;
}

// if-else allow to test values against specific conditions and blocks
int if_Else_Pokemon_Choosing(int choice)
{
    // Implementation using If-else statements
    if (choice == 1)
    {
        cout << "\nProfessor Oak: A fine choice! Bulbasaur is always ready to grow on you! \n";
    }
    else if (choice == 2)
    {
        cout << "\nProfessor Oak: A fiery choice! Charmander is yours!\n";
    }
    else if (choice == 3)
    {
        cout << "\nProfessor Oak: Splendid! Squirtle will keep you cool under pressure! \n";
    }
    else
    {
        cout << "\nProfessor Oak: Based on your input, I believe it's safe to assume that you do NOT want any of the choices I've provided.\n";
        cout << "Professor Oak: Goodbye and Good day.\n\n\n";
        return 1;
    }
    return 0;
}

// Compared to if-else, switch statements are clear and make code more readable
// It is a cleaner and readable way to replace if-else conditions and helps de-cluttering the code.
int switch_Pokemon_Choosing(int choice)
{
    // Implementation using Switch statements
    switch (choice)
    {
        case 1:
        {
            cout << "\nProfessor Oak: A fine choice! Bulbasaur is always ready to grow on you! \n";
            break;
        }
        case 2:
        {
            cout << "\nProfessor Oak: A fiery choice! Charmander is yours! \n";
            break;
        }
        case 3:
        {
            cout << "\nProfessor Oak: Splendid! Squirtle will keep you cool under pressure! \n";
            break;
        }
        default:
        {
            cout << "\nProfessor Oak: Hmm, that doesn't seem right. Let me choose for you… Just kidding! Let's go with Pikachu, the surprise guest!\n";
            break;
        }
    }
    return 0;
}

// -------------------------------------------------------------------------------------------- //
// ------------------------------------  MAIN STARTS HERE  ------------------------------------ //
// -------------------------------------------------------------------------------------------- //

int main() {
    
    // Player Game Start Code
    string player_name;    

    cout << "\nEnter your name: ";
    cin >> player_name;
    cout << "\n";

    // Meeting Professor Oak
    cout << "Professor Oak: Ah, a Trainer. Hi, " << player_name << "! Welcome to the world of POKEMON!My name is Professor Oak. \n";
    cout << "Today is a momentous day -- I will be helping you choose your first Pokemon. Every great Trainer remembers this day for the rest of their lives.\n";
    cout << "I give you three choices to choose from. So, choose wisely, young one. Your options are: ";
    cout << "\n\t1. Bulbasaur\n\t2. Charmander\n\t3. Squirtle\n";
    cout << "Which one would you like? \n\n";

    int choice = 0;
    cout << player_name << ": ";
    cin >> choice;

    int function_returned = 0;

    // Function if we want to select pokemon using if-else
    //function_returned = if_Else_Pokemon_Choosing(choice);
    
    // Function for if we want choose Pokemon using switch statements 
    //function_returned = switch_Pokemon_Choosing(choice);

    // Function for choosing Pokemon using an Enum
    // Setting it to Invalid Choice initially for surprise pokemon assignment
    PokemonChoice player_choice = InvalidChoice;
    player_choice = enum_Pokemon_Choosing(player_choice, choice);

    // Stopping code execution if invalid input
    if (function_returned != 0)
        return 0;
    

    cout << "Beware, Trainer, for this is only the beginning. Your journey is about to unfold. Now let's see if you've got what it takes to keep going.\n";
    cout << "Good luck, and Choose wisely. Remember, Trainer, you and your Pokémon are about to form an unstoppable bond!\n";
    cout << "Now, take your first step into the vast world of Pokémon…\n" << "Who knows what mysteries await you? ;D\n\n"

    return 0;
}