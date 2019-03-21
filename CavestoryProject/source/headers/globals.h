/*
 * globals.h
 *
 *  Created on: Mar 8, 2019
 *      Author: luupesado
 */

#ifndef SOURCE_HEADERS_GLOBALS_H_
#define SOURCE_HEADERS_GLOBALS_H_

enum Direction{
	RIGHT,
	LEFT,
	UP,
	DOWN
};


namespace globals{
	const int SCREEN_WIDTH = 640;
	const int SCREEN_HEIGHT = 480;

	const float SPRITE_SCALE = 2.0f;
}

struct Vector2 {
	int x, y;
	Vector2(): x(0),y(0){}
	Vector2( int x, int y) : x(x),y(y){}
	Vector2 zero(){
		return Vector2(0,0);
	}
};

#endif /* SOURCE_HEADERS_GLOBALS_H_ */
