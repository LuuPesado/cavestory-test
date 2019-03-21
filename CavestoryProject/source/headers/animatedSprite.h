/*
 * animatedSprite.h
 *
 *  Created on: Mar 9, 2019
 *      Author: luupesado
 */

#ifndef SOURCE_HEADERS_ANIMATEDSPRITE_H_
#define SOURCE_HEADERS_ANIMATEDSPRITE_H_

#include "sprite.h"
#include <map>
#include <string>
#include <vector>
#include "globals.h"

class Graphics;

class AnimatedSprite: public Sprite{
public:
	AnimatedSprite();
	AnimatedSprite(Graphics &graphics, const std::string &filePath, int sourceX, int sourceY, int width, int height,
			float posX, float posY, float timeToUpdate);

	/*void play animation
	 * Plays the animation provided if it's not already playing
	 */
	void playAnimation(std::string animation, bool once = false);
	/* void update
	 * Updates the animation sprite (timer)
	 */
	void update(int elapsedTime);
	/*void draw
	 * DRaws the sprites to the screen
	 */
	void draw(Graphics &graphics, int x, int y);

protected:
	double _timeToUpdate;
	bool _currentAnimationOnce;
	std::string _currentAnimation;

	/*void addAnimation
	 * Adds an animatios to the map of animations for the sprite
	 */
	void addAnimation(int frames, int x, int y, std::string name, int width, int height, Vector2 offset);
	/* void resetAnimations
	 * Reset all animations associated with the sprite
	 */
	void resetAnimations();
	/*void stopAnimation
	 * stops the current animation
	 */
	void stopAnimation();
	/* setVIsible
	 * CHanges the visibility of the animated sprite
	 */
	void setVisible( bool visible);
	/* void animationDone
	 * Logic that happens when an animation ends
	 */
	virtual void animationDone(std::string _currentAnimation)=0;
	/*void setUpAnimations
	 * A required function that sets up all animations for a sprite
	 */
	virtual void setupAnimations() = 0;


private:
	std::map<std::string, std::vector<SDL_Rect> > _animations;
	std::map<std::string, Vector2> _offsets;

	int _frameIndex;
	double _timeElapsed;
	bool _visible;
};



#endif /* SOURCE_HEADERS_ANIMATEDSPRITE_H_ */
