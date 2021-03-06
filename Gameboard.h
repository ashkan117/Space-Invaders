#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include <vector>
#include <string>
#include "Utilities.h"
using namespace std;


class Screen;
class Hero;
class Alien;
class Laser;
class Actor;
class Game;

class Gameboard
{
public:
	void drawBorder(Screen& screen);
	void drawFancyBorder(COLOR color, Screen & screen);
	void displayGameOver();
	void drawActor(Screen& screen, Actor * actor);
	void drawLaser(Screen& screen, Laser * actor);
	void displayStats(Screen& screen, Game * game);
	void nextLevel(Screen & screen, Game*game);
	void displayScore(Screen & screen, Game * game);
};

#endif // GAMEBOARD_INCLUDED

