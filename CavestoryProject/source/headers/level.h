/*
 * level.h
 *
 *  Created on: Mar 10, 2019
 *      Author: luupesado
 */

#ifndef SOURCE_HEADERS_LEVEL_H_
#define SOURCE_HEADERS_LEVEL_H_
#include "globals.h"
#include <string>

class Graphics;
struct SDL_Texture;

class Level{
public:
	Level();
	Level(std::string mapname, Vector2 spawnPoint, Graphics &graphics);
	~Level();

	void update(int elapsedTime);
	void draw(Graphics &graphics);

private:
	std::string _mapName;
	Vector2 _spawnPoint;
	Vector2 _size;
	SDL_Texture* _backgroundTexture;

	void loadMap(std::string mapName, Graphics &graphics);

};



#endif /* SOURCE_HEADERS_LEVEL_H_ */
