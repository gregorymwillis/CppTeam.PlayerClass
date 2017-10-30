/**************************************************************************
** Author: Greg Willis
** Date: 10/26/2017
** Description: Implementation file for Team class "Team.cpp"
***************************************************************************/
#include "Team.hpp"

// Default contructor
Team::Team() {
	ptGuard = Player();
	shGuard = Player();
	smForward = Player();
	poForward = Player();
	center = Player();
}

// Constructor with parameters
Team::Team(Player p1, Player p2, Player p3, Player p4, Player p5) {
	setPointGuard(p1);
	setShootingGuard(p2);
	setSmallForward(p3);
	setPowerForward(p4);
	setCenter(p5);
}

// Set the point guard
void Team::setPointGuard(Player p) {
	ptGuard = p;
}

// Get the point guard
Player Team::getPointGuard() {
	return ptGuard;
}

// Set the shooting guard
void Team::setShootingGuard(Player p) {
	shGuard = p;
}

// Get the shooting guard
Player Team::getShootingGuard() {
	return shGuard;
}

// Set the small forward
void Team::setSmallForward(Player p) {
	smForward = p;
}

// Get the small forward
Player Team::getSmallForward() {
	return smForward;
}

// Set the power forward
void Team::setPowerForward(Player p) {
	poForward = p;
}

// Get the power forward
Player Team::getPowerForward() {
	return poForward;
}

// Set the center
void Team::setCenter(Player p) {
	center = p;
}

// Get the center
Player Team::getCenter() {
	return center;
}

// Returns sum of all the players points on the team
int Team::totalPoints() {
	return ptGuard.getPoints() + shGuard.getPoints() + smForward.getPoints()
		+ poForward.getPoints() + center.getPoints();
}
