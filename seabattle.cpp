/*
  1. GENERAL INFORMATION
  1.1. The classic "Sea Battle" console game. The 2021 year.
  1.2. Vitaly Polyakov <polyakov_vs@icloud.com>

  2. DESCRIPTION
  2.1. A game for two participants, in which the players take turns 
calling the coordinates on the opponent's unknown map.
If the opponent has a ship at these coordinates (the coordinates 
are occupied), then the ship or its part is "drowned", and the one
who got it gets the right to make one more move.
  2.2. The goal of the game is to be the first to sink all enemy
ships.

  3. RULES FOR LOCATION OF SHIPS
  3.1. The playing field is 10 × 10 square for each player, on which 
a fleet of ships is located. Verticals are numbered from top 
to bottom from 0 to 9, and horizontal lines are labelled with 
letters from left to right (A, B, C, D, E, F, G, H, I, J).
  3.2. Next to the "own" field is drawn "hostile" of the same size, 
only empty. This is an area of ​​the sea where enemy ships sail.
  3.3. Placed on their field:
	- four-deck battleship (row of 4 cells) - 1 ship;
	- three-deck cruisers (row of 3 cells) - 2 ships;
	- double-deck destroyers (row of 2 cells) - 3 ships;
	- single-deck torpedo boats (one cage) - 4 ships.
  3.4. When placed, ships cannot touch each other with sides and 
corners.
  3.5. When it hits the enemy's ship, a cross is placed on 
a foreign field, and when a blank shot is fired, a dot 
is placed. The victim shoots again.

  4. HEATING OF THE OPPONENT'S SHIPS
  4.1. The player making the move makes a shot - enters the 
coordinates of the cell in which, in his opinion, the enemy ship 
is located, for example, "B1".
  4.2. If the shot hit a cell that is not occupied by an enemy ship, 
then the answer is "Missed!". The right to move passes to 
the opponent.
  4.3. If the shot hit a cell where a multi-deck ship is located 
(larger than 1 cell), then the answer is “Wounded!”. 
Except for one case (see the next paragraph). The shooter is 
entitled to one more shot.
  4.4. If the shot hit the cell where the single-deck ship 
is located, or the last unaffected cell of the multi-deck ship, 
then the answer is “Killed!”. The shooter is entitled 
to one more shot.

  5. VICTORY
  5.1. The winner is the one who sinks all 10 enemy ships first.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	string user1;
	string user2;

	cout << "Enter user 1 name: ";
	cin >> user1;

	cout << "Enter user 2 name: ";
	cin >> user2;

	cout << endl;

	string currentUser;
	currentUser = user1; // default user 1

	// main game loop
	int gameOver = 0;
	while (gameOver != 1) {

		int currentAction = 0;
		cout << "[" << currentUser << "]. Enter coordinates X, Y. Type [-1] for quit game.";
		cin >> currentAction;

		if (currentAction == -1) {
			gameOver = 1;
		}

		if (currentAction == 0) {
			cout << "False. Change user." << endl;
			if (currentUser == user1)
			{
				currentUser = user2;
			}
			else
			{
				currentUser = user1;
			}

		}

		if (currentAction == 1) {
			cout << "True. Continue..." << endl;
		}

		if (currentAction == 2) {
			cout << "True. Game over." << endl;
			cout << "[" << currentUser << "] win! Congratulations!!!" << endl;
			gameOver = 1;
		}




	} // end main game loop
	cout << "Game over! Interrupt by [" << currentUser << "]." << endl;
	return 0;
}
