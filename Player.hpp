/**************************************************************************
** Author: Greg Willis
** Date: 10/26/2017
** Description: Player class definition file "Player.hpp" Creates a 
		player object that stores the players name, points,
		rebounds, and assists.
***************************************************************************/
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

using std::string;

class Player {
	// Player variables
	private:
		string name;
		int points;
		int rebounds;
		int assists;
	
	// Player functions
	public:
		// Default constructor
		Player() {
			name = "";
			points = -1;
			rebounds = -1;
			assists = -1;
		}

		// Function prototypes
		Player (string, int, int, int);
		string getName();
		bool setPoints(int);
		int getPoints();
		bool setRebounds(int);
		int getRebounds();
		bool setAssists(int);
		int getAssists();
		bool hasMorePointsThan(Player);
};
#endif
