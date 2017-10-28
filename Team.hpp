/**************************************************************************
** Author: Greg Willis
** Date: 10/26/2017
** Description: Team class definition file "Team.hpp. Team class has five
**		types of players from Player class. A point guard, a 
**		shooting guard, a small forward, a power forward, and a
**		center. This class also returns total points for all
**		players on the team.
***************************************************************************/
#ifndef TEAM_HPP
#define TEAM_HPP

#include "Player.hpp"

class Team {
	// Team player variables
	private:
		Player ptGuard;
		Player shGuard;
		Player smForward;
		Player poForward;
		Player center;

	// Team functions
	public:
		// Default constructor
		Team() {
			ptGuard = Player();
			shGuard = Player();
			smForward = Player();
			poForward = Player();
			center = Player();
		}

		// Function prototypes
		Team(Player, Player, Player, Player, Player);
		void setPointGuard(Player);
		Player getPointGuard();
		void setShootingGuard(Player);
		Player getShootingGuard();
		void setSmallForward(Player);
		Player getSmallForward();
		void setPowerForward(Player);
		Player getPowerForward();
		void setCenter(Player);
		Player getCenter();
		int totalPoints();
};
#endif
