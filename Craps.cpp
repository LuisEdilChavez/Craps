#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice() {
    return (rand() % 6) + 1;
}

int main() {
    srand(time(0)); // Simulates Dice rolling
    
    char ready; // Menu screen
    cout << "Welcome to the Game of Craps!" << endl;
    cout << "Here are the rules:" << endl;
    cout << "- If you roll a 7 or 11 on the first roll, you win." << endl;
    cout << "- If you roll a 2, 3, or 12 on the first roll, you lose." << endl;
    cout << "- If you roll any other number on the first roll, that number becomes the point." << endl;
    cout << "- To win, you must then roll the point again before rolling a 7." << endl;
    cout << "Are you ready to play? (Y/N): ";
    cin >> ready;
    
    if (ready == 'Y' || ready == 'y') {
// initializing datatypes for each invdividual dice roll
int roll1 = rollDice();
int roll2 = rollDice();
int sum = roll1 + roll2;
cout << "You rolled: " << roll1 << " + " << roll2 << " = " << sum << endl;
if (sum == 7 || sum == 11) {
  // if roll is 7 , 11 its a win
cout << "You win!" << endl;
// if roll is 2  ,3 , 11 its a L
} else if (sum == 2 || sum == 3 || sum == 12) {
cout << "You lose!" << endl;
} else {
int point = sum;
cout << "Point is set to: " << point << endl;
// Repeats if conditions above were not met
do {
roll1 = rollDice();
roll2 = rollDice();
sum = roll1 + roll2;
cout << "You rolled: " << roll1 << " + " << roll2 << " = " << sum << endl;
if (sum == point) {
cout << "You win!" << endl;
break;
} else if (sum == 7) {
cout << "You lose!" << endl;
break;
}
 } while (true);
}
cout << "Game Over!" << endl;
} else {
cout << "Have a nice day!" << endl;
}
    return 0;
}
