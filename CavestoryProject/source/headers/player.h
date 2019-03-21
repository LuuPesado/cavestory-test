/*
 * player.h
 *
 *  Created on: Mar 9, 2019
 *      Author: luupesado
 */

#ifndef SOURCE_HEADERS_PLAYER_H_
#define SOURCE_HEADERS_PLAYER_H_
#include <string>
#include "graphics.h"
#include "animatedSprite.h"
#include "globals.h"

class Graphics;
class Player: public AnimatedSprite{
public:
	Player();
	Player(Graphics &grapics, float x, float y);
	void draw(Graphics &graphics);
	void update(float elapsedTime);

	/*void left
	 * moves player left by _dx
	 */
	void moveLeft();
	/*void right
	 * moves player rigth by _dx
	 */
	void moveRight();
	/*void stops moving
	 * stops the character facing the direction it was walking before
	 */
	void stopMoving();


	virtual void animationDone(std::string curretAnimation);
	virtual void setupAnimations();\

private:
	float _dx, _dy;
	Direction _facing;


};


#endif /* SOURCE_HEADERS_PLAYER_H_ */
