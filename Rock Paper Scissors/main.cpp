#include <iostream>
#include <string>
#include <algorithm>  // For std::transform
#include <cctype>     // For toupper()
#include <cstdlib>
#include <ctime>

using namespace std;

void game_round() {

    enum hand_options {
        SCISSORS,
        ROCK,
        PAPER,
    };

    cout << "What do you throw: ";
    string player_input;
    cin >> player_input;

    ranges::transform(player_input, player_input.begin(), ::toupper);
// source_range → The input data of  string or vector etc.)
// .begin() → Where to store the result
// ::function → The function applied to each element in the range

    int player_choice {};
    if (player_input == "SCISSORS") {
        player_choice = 0;
    } else if (player_input == "ROCK") {
        player_choice = 1;
    } else if (player_input == "PAPER") {
        player_choice = 2;
    } else {
        cout << "Invalid answer\n";
        return;
    }

    srand(time(nullptr));
    int ai_choice = rand() % (2 - 0);
    string ai_output;

    if (ai_choice == 0) {
        ai_output = "SCISSORS";
    } else if (ai_choice == 1) {
        ai_output = "ROCK";
    } else if (ai_choice == 2) {
        ai_output = "PAPER";
    } else {
        cout << "Something went wrong...\n";
        return;
    }


    cout << "You chose to throw: " << player_input << "\n";
    cout << "AI chose to throw: " << ai_output << "\n\n";

    int player_choice_value = static_cast<hand_options>(player_choice);
    int ai_choice_value = ai_choice;

    switch (player_choice_value) {
        case SCISSORS:
            if (ai_choice_value == ROCK) {
                cout << "You win!\n";
            } else if (ai_choice_value == PAPER) {
                cout << "You lose!\n";
            } else {
                cout << "It's a tie!\n";
            }
            break;
        case ROCK:
            if (ai_choice_value == SCISSORS) {
                cout << "You win!\n";
            } else if (ai_choice_value == PAPER) {
                cout << "You lose!\n";
            } else {
                cout << "It's a tie!\n";
            }
            break;
        case PAPER:
            if (ai_choice_value == ROCK) {
                cout << "You win!\n";
            } else if (ai_choice_value == SCISSORS) {
                cout << "You lose!\n";
            } else {
                cout << "It's a tie!\n";
            }
    }

}




int main() {
    cout << "RPS V1.0\n";
    int i = 1;
    string continue_playing;




    while (i < 20) {
        cout << "Round: " << i << "\n";

        game_round();

        cout << "Do You want to continue?  [Y/N]: ";
        cin >> continue_playing;

        if (continue_playing == "Y") {
            cout << "";
        } else if (continue_playing == "N") {
            break;
        }

        i++;
    }

    return 0;
}