/*
 * input.h
 *
 *  Created on: Mar 6, 2019
 *      Author: luupesado
 */

#ifndef SOURCE_HEADERS_INPUT_H_
#define SOURCE_HEADERS_INPUT_H_
#include<SDL2/SDL.h>
#include <map>

class Input{
	public:
		void beginNewFrame();
		void keyUpEvent(const SDL_Event& event);
		void keyDownEvent(const SDL_Event& event);

		bool wasKeyPressed(SDL_Scancode key);
		bool wasKeyReleased(SDL_Scancode key);
		bool isKeyHeld(SDL_Scancode key);


	private:
		std::map<SDL_Scancode, bool> _heldKeys;
		std::map<SDL_Scancode, bool> _pressedKeys;
		std::map<SDL_Scancode, bool> _releasedKeys;
};




#endif /* SOURCE_HEADERS_INPUT_H_ */
