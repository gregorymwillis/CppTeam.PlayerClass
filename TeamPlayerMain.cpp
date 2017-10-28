/**************************************************************************
** Author: Greg Willis
** Date: 10/26/2017
** Description: Main function to test Team Player classes
***************************************************************************/
#include "Team.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

void displayPlayerInfo(Player);

int main() {
	Player p1("Charlotte", 24, 10, 7);
	Player p2("Emily", 21, 13, 9);
	Player p3("Anne", 20, 10, 8);
	Player p4("Jane", 19, 10, 10);
	Player p5("Mary", 18, 11, 8);
	p5.setRebounds(12);

	Team team1(p1, p2, p3, p4, p5);		//Point guard, shooting guard, small forward, power forward, center

	Player g1 = team1.getPointGuard();
	displayPlayerInfo(g1);
	Player g2 = team1.getShootingGuard();
	displayPlayerInfo(g2);
	Player g3 = team1.getSmallForward();
	displayPlayerInfo(g3);
	Player g4 = team1.getPowerForward();
	displayPlayerInfo(g4);
	Player g5 = team1.getCenter();
	displayPlayerInfo(g5);

	if (p1.hasMorePointsThan(p2)) {		// True
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	if(p5.hasMorePointsThan(p4)) {		// False
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	g1.setPoints(5);			// 5
	cout << p1.getPoints() << endl;

	p2.setRebounds(10);
	cout << p2.getRebounds() << endl;	// 10

	p3.setAssists(55);
	cout << p3.getAssists() << endl;		// 55

	cout << team1.totalPoints() << endl;	// 83
	displayPlayerInfo(p1);
	
	if (p1.hasMorePointsThan(p2)) {		// False 
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	
	cout << team1.totalPoints() << endl; // 83
}

void displayPlayerInfo(Player p) {
	cout << p.getName() << endl;
	cout << p.getPoints() << endl;
	cout << p.getRebounds() << endl;
	cout << p.getAssists() << endl;
}
