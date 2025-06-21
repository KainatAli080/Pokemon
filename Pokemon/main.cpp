#include <iostream>
#include <string.h>
using namespace std;

// -------------------------------------------------------------------------------------------- //
// ------------------------------  FEATURE 1 POKEMON SELECTION  ------------------------------- //
// -------------------------------------------------------------------------------------------- //
// 
// ENUM CLASS structure intro
enum class PokemonChoice {    
    Bulbasaur,
    Charmander,
    Squirtle,
    Pikachu //Dafault
};

enum class PokemonType {
    FIRE,
    ELECTRIC,
    WATER,
    EARTH
};

class Pokemon {
public:
    string name;
    int health;
    PokemonType type;

    // Default Constructur
    Pokemon() {

    }

    // Parametrised Constructor
    Pokemon(string n, int h, PokemonType t) {
        name = n;
        health = h;
        type = t;
    }

    // What functions would a Pokemon Perform?
    void attack() {
        cout << "My Pokemon did a Powerful attack move!\n";
    }
};

class Player {
public:
    string playerName;
    Pokemon chosenPokemon;

    Player() {

    }

    Player(string name, Pokemon pokemon) {
        this->playerName = name;
        this->chosenPokemon = pokemon;  
    }

    // To Sleect a pokemon
    void choosePokemon(int choice)
    {
        switch ((PokemonChoice)choice)
        {
            // converted choice to PokemonCHoiceEnum enum class object to find pokemon
            case PokemonChoice::Bulbasaur:
                chosenPokemon = Pokemon("Bulbasaur", 100, PokemonType::EARTH);
                break;
            case PokemonChoice::Charmander:
                chosenPokemon = Pokemon("Charmander", 100, PokemonType::FIRE);
                break;
            case PokemonChoice::Squirtle:
                chosenPokemon = Pokemon("Squirtle", 100, PokemonType::WATER);
                break;
            default:
                cout << "\nAhh... A hidden choice. Surprise!";
                chosenPokemon = Pokemon("Pikachu", 100, PokemonType::ELECTRIC);
                break;
        }
        cout << "\nPlayer " << playerName << " chose " << chosenPokemon.name << "!\n";
    }
};

class ProfessorOak {
    public:
    string name;

    // Method to greet the player
    void greetPlayer() {
        cout << name << ": Ah, a Trainer. Hello there! Welcome to the world of Pokemon!\n";
        cout << name << ": My name is Oak. People call me the Pokemon Professor!\n";
        cout << name << ": But enough about me. Let's talk about you!\n";
    }

    // Method to offer the player Pokemon Choices
    void offerPokemonChoices(Player& player) {
        cout << name << ": Let's start with your name.\n";
        getline(cin, player.playerName);
        cout << name << ": " << player.playerName << ", what a fantastic name!\n\n";

        cout << name << ": Today is a momentous day -- I will be helping you choose your first Pokemon. Every great Trainer remembers this day for the rest of their lives.\n";
        cout << name << ": Now, I give you three choices to choose from. So, choose wisely, young one. Your options are: ";
        cout << "\n\t1. Bulbasaur\n\t2. Charmander\n\t3. Squirtle\n";
        cout << name << ": Which one would you like? Let me know your choice number and we'll begin.\n\n";

        int choice;
        cin >> choice;
        player.choosePokemon(choice);
    }
};

// -------------------------------------------------------------------------------------------- //
// ------------------------------------  MAIN STARTS HERE  ------------------------------------ //
// -------------------------------------------------------------------------------------------- //

int main() {
    
    ProfessorOak professorOak;
    professorOak.name = "Professor Oak";
    Pokemon playerPokemon = Pokemon("Pikachu", 100, PokemonType::ELECTRIC);
    Player player = Player("Trainer", playerPokemon);
    
    // Callinf funstions for convo with Professor Oak
    professorOak.greetPlayer();
    professorOak.offerPokemonChoices(player);

    // Conclusion
    cout << "\n\nProfessor Oak: Beware, Trainer, for this is only the beginning. Your journey is about to unfold. Now let's see if you've got what it takes to keep going.\n";
    cout << "Good luck, and Choose wisely. Remember, Trainer, you and your Pokemon are about to form an unstoppable bond!\n";
    cout << "Now, take your first step into the vast world of Pokemon…\n" << "Who knows what mysteries await you? ;D\n\n";

    return 0;
}