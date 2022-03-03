#include <iostream>
#include <stdlib.h>
using namespace std;
int playerMoney = 1000;

void BlackJack() {
    int bet;
    int deck;
    int cardSum;
    cout << " ====================================================================" << endl;
    cout << "||                                                                  ||" << endl;
    cout << "||                  You have : $" << playerMoney <<"                                ||" << endl;
    cout << "||                                                                  ||" << endl;
    cout << " ====================================================================" << endl;
    cout << "How Much Will You Bet?: ";
    cin >> bet;
    if (bet > playerMoney) {
        cout << "You don't have enough" << endl;
        BlackJack();
    }
    else {
        switch (deck) {
        case 1:
            cout << "Ace of Clubs";
            break;
        case 2:
            cout << "Ace of Spades";
            break;
        case 3:
            cout << "Ace of Hearts";
            break;
        case 4:
            cout << "Ace of Diamonds";
            break;
        case 5:
            cout << "2 of Clubs";
            break;
        case 6:
            cout << "2 of Spades";
            break;
        case 7:
            cout << "2 of Hearts";
            break;
        case 8:
            cout << "2 of Diamonds";
            break;
        case 9:
            cout << "3 of Clubs";
            break;
        case 10:
            cout << "3 of Spades";
            break;
        case 11:
            cout << "3 of Hearts";
            break;
        case 12:
            cout << "3 of Diamonds";
            break;
        case 13:
            cout << "4 of Clubs";
            break;
        case 14:
            cout << "4 of Spades";
            break;
        case 15:
            cout << "4 of Hearts";
            break;
        case 16:
            cout << "4 of Diamonds";
            break;
        case 17:
            cout << "5 of Clubs";
            break;
        case 18:
            cout << "5 of Spades";
            break;
        case 19:
            cout << "5 of Hearts";
            break;
        case 20:
            cout << "5 of Diamonds";
            break;
        case 21:
            cout << "6 of Clubs";
            break;
        case 22:
            cout << "6 of Spades";
            break;
        case 23:
            cout << "6 of Hearts";
            break;
        case 24:
            cout << "6 of Diamonds";
            break;
        case 25:
            cout << "7 of Clubs";
            break;
        case 26:
            cout << "7 of Spades";
            break;
        case 27:
            cout << "7 of Hearts";
            break;
        case 28:
            cout << "7 of Diamonds";
            break;
        case 29:
            cout << "8 of Clubs";
            break;
        case 30:
            cout << "8 of Spades";
            break;
        case 31:
            cout << "8 of Hearts";
            break;
        case 32:
            cout << "8 of Diamonds";
            break;
        case 33:
            cout << "9 of Clubs";
            break;
        case 34:
            cout << "9 of Spades";
            break;
        case 35:
            cout << "9 of Hearts";
            break;
        case 36:
            cout << "9 of Diamonds";
            break;
        case 37:
            cout << "10 of Clubs";
            break;
        case 38:
            cout << "10 of Spades";
            break;
        case 39:
            cout << "10 of Hearts";
            break;
        case 40:
            cout << "10 of Diamonds";
            break;
        case 41:
            cout << "Jack of Clubs";
            break;
        case 42:
            cout << "Jack of Spades";
            break;
        case 43:
            cout << "Jack of Hearts";
            break;
        case 44:
            cout << "Jack of Diamonds";
            break;
        case 45:
            cout << "Queen of Clubs";
            break;
        case 46:
            cout << "Queen of Spades";
            break;
        case 47:
            cout << "Queen of Hearts";
            break;
        case 48:
            cout << "Queen of Diamonds";
            break;
        case 49:
            cout << "King of Clubs";
            break;
        case 50:
            cout << "King of Spades";
            break;
        case 51:
            cout << "King of Hearts";
            break;
        case 52:
            cout << "King of Diamonds";
            break;
        
        }
    }
}
int main()
{
    int gameChoice;
    cout << " ===================================================================== " << endl;
    cout << "||    CCCCC       A       SSSSSSSS   IIIIII   NN     NN    OOOOOOO   ||" << endl;
    cout << "||  CC           A A      SS           II     NN N   NN   OO     OO  ||" << endl;
    cout << "|| CC           A   A     SSSSSSSS     II     NN  N  NN   OO     OO  ||" << endl;
    cout << "||  CC         AAAAAAA          SS     II     NN   N NN   OO     OO  ||" << endl;
    cout << "||    CCCCC   A       A   SSSSSSSS   IIIIII   NN     NN    OOOOOOO   ||" << endl;
    cout << " =====================================================================" << endl;
    cout << " ====================================================================" << endl;
    cout << "||                                                                  ||" << endl;
    cout << "||                WHAT GAME DO YOU WANT TO PLAY?                    ||" << endl;
    cout << "||                                                                  ||" << endl;
    cout << " ====================================================================" << endl;
    cout << " ====================================================================" << endl;
    cout << "||                                                                  ||" << endl;
    cout << "||     (1) Blackjack                                                ||" << endl;
    cout << "||     (2) Slots                                                    ||" << endl;
    cout << "||     (3) Roulette                                                 ||" << endl;
    cout << "||                                                                  ||" << endl;
    cout << " ====================================================================" << endl;
    cout << "Choose a Game: ";
    cin >> gameChoice;

    if (gameChoice == 1) {
        system("CLS");
        cout << " =========================================================================================== " << endl;
        cout << "||  BBBBBB    LL           A        CCCCC   K   K    JJJJJJJ     A         CCCCC   K   K   ||" << endl;
        cout << "||  B     B   LL          A A     CC        K  K        J       A A      CC        K  K    ||" << endl;
        cout << "||  BBBBBBB   LL         A   A   CC         K K         J      A   A    CC         K K     ||" << endl;
        cout << "||  B     B   LL        AAAAAAA   CC        K  K    J   J     AAAAAAA    CC        K  K    ||" << endl;
        cout << "||  BBBBBB    LLLLLLL  A       A    CCCCC   K   K    JJJ     A       A     CCCCC   K   K   ||" << endl;
        cout << " =========================================================================================== " << endl;
        BlackJack();
    }
    else if (gameChoice == 2) {
        cout << "2 works" << endl;
    }
    else if (gameChoice == 3) {
        cout << "3 works" << endl;
    }
    else {
        system("CLS");  
        main();
    }
}

