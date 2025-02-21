#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::string;

void reveal_hands(int dealer_score, int player_score, int bust_score){
    if (player_score > bust_score) {
        cout << "Dealer's hand: " << dealer_score << "\n"
        << "Player's hand: " << player_score << "\n";
        cout << "Player busted.\n";

    } else if (player_score > dealer_score && player_score <= bust_score) {
        cout << "Dealer's hand: " << dealer_score << "\n"
        << "Player's hand: " << player_score << "\n";
        cout << "Player won!\n";

    } else if (dealer_score > player_score && dealer_score <= bust_score) {
        cout << "Dealer's hand: " << dealer_score << "\n"
        <<  "Player's hand: " << player_score << "\n";
        cout << "Player lost!\n";

    } else if (dealer_score == player_score) {
        cout << "Dealer's hand: " << dealer_score << "\n"
        <<  "Player's hand: " << player_score << "\n";
        cout << "It's a tie!\n";
    }
};

int main() {
    cout << "Blackjack V2.0\n\n"
    << "Rules:\n"
    << "Type 'hit' to receive another card. \n"
    << "Type 'stand' to to stop and reveal hands\n\n";

    int dealer_score {20};
    int player_score {};
    int bust_score {21};
    int card_dealt {10};

    for (int i = 0; i < 10; i++) {
        string player_choice {};

        cout << "Your hand is: " << player_score << "\n";
        cout << "Would you like to hit or stand: ";
        cin >> player_choice;

        if (player_choice == "hit") {
            cout << "You've been dealt: " << card_dealt << "\n";
            player_score += card_dealt;

            if (player_score > bust_score) {
                reveal_hands(dealer_score, player_score, bust_score);
                break;
            }
        }

        else if (player_choice == "stand") {
            reveal_hands(dealer_score, player_score, bust_score);
            break;
        }

        else {
            cout << "Invalid input\n";
        }
    };

    return 0;
}