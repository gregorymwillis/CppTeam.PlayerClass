/**************************************************************************
** Author: Greg Willis
** Date: 10/26/2017
** Description: Implementation file for Player class. Player class provides
		a name, points, rebounds, and assists for a player on a team
***************************************************************************/
#include "Player.hpp"

// Constructor

Player::Player(string n, int p, int r, int a) {
	name = n;
	points = p;
	rebounds = r;
	assists = a;
}

string Player::getName() {
	return name;
}

bool Player::setPoints(int p) {		// If a player's points are greater than or
	if(p >= 0) {			// equal to zero, set the points and return
		points = p;		// true
		return true;
	}
	else {
		return false;
	}
}

int Player::getPoints() {		// Returns a player's points
	return points;
}

bool Player::setRebounds(int r) {	// If a player's rebounds are greater than
	if(r >= 0) {			// or equal to zero, set the rebounds and
		rebounds = r;		// return true.
		return true;
	}
	else {
		return false;
	}
}

int Player::getRebounds() {		// Returns a player's rebounds
	return rebounds;
}

bool Player::setAssists(int a) {	// If a player's assists are greater than
	if(a >= 0) {			// or equal to zero, set the assists and
		assists = a;		// return true.
		return true;
	}
	else {
		return false;
	}
}

int Player::getAssists() {		// Returns a player's assists
	return assists;
}

bool Player::hasMorePointsThan(Player p) { 	// Returns true or false depending on
	int thisPlayer = getPoints();		// if this player has more points than
	int otherPlayer = p.getPoints();	// the player passed in as a parameter

	return thisPlayer > otherPlayer;
}
