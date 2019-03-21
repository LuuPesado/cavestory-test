#ifndef GRAPHICS_H
#define GRAPHICS_H
/*Graphics
 * Holds all class information dealing with graphics for the game
 */
#include <map>
#include <string>
#include <SDL2/SDL_image.h>

struct SDL_Window;
struct SDL_Renderer;



class Graphics{
	public:
		Graphics();
		~Graphics();

		/*SDL_Surface* loadImage
		 * Loads an image into the spriteSheets map if it doesn't already exists
		 * As a result,, each image will only be loaded once
		 * Returns the image of the map regardless of whether or not it was just loaded
		 */
		SDL_Surface* loadImage(const std::string &filePath);

		/*void blitsurface
		 * Draws a texture to a certain part of the screen
		 */

		void blitSurface(SDL_Texture* source, SDL_Rect* sourceRectanlgle, SDL_Rect* destinationRectangle);

		/*void flip
		 * RENDERS EVERYTHING TO THE SCREEN
		 */
		void flip();

		/*void clear
		 * Clears the screen
		 */
		void clear();
		/* SDL_Renderes getRenderer
		 * Returns the renderer
		 */

		SDL_Renderer* getRenderer() const;

	private:
		SDL_Window* _window;
		SDL_Renderer* _renderer;
		std::map<std::string, SDL_Surface*> _spriteSheets;
};

#endif
