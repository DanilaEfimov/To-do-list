#ifndef BUTTON_H
#define BUTTON_H

#include<SFML/Graphics.hpp>

typedef sf::Vector2i vec2i;
typedef sf::RectangleShape rect;
typedef sf::Color color;

class TriggerButton : rect // pushButton
{
private:
	rect* buttonRect;

	vec2i* size;
	static const color on;
	static const color off;

	bool* triggered;

public:
	TriggerButton(int xSize, int ySize, int xPos, int yPos);
	virtual ~TriggerButton();

	void triggering();
	void draw(sf::RenderWindow* pWin);
};

# endif // BUTTON_H
