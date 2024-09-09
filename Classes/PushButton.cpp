#include "TriggerButton.h"

const color TriggerButton::on = {0, 255, 0};
const color TriggerButton::off = {255, 0, 0};

TriggerButton::TriggerButton(int x, int y, int xPos, int yPos) {
	this->size = new vec2i{ abs(x), abs(y) };
	this->triggered = new bool{ false }; // strange maybe?
	this->buttonRect = new rect{ static_cast<sf::Vector2f>(*this->size) };
	this->buttonRect->setPosition(static_cast<sf::Vector2f>(vec2i{ xPos, yPos }));
	if (*(this->triggered)) {
		this->buttonRect->setFillColor(on);
	}
	else {
		this->buttonRect->setFillColor(off);
	}
}

TriggerButton::~TriggerButton() {
	delete this->size;
	delete this->triggered;
	delete this->buttonRect;
}

void TriggerButton::triggering() {
	*(this->triggered) = !(*triggered);
	if (*(this->triggered)) {
		this->buttonRect->setFillColor(on);
	}
	else {
		this->buttonRect->setFillColor(off);
	}
}

void TriggerButton::draw(sf::RenderWindow* pWin) {
	pWin->draw(*this->buttonRect);
}
