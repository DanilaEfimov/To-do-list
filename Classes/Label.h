#ifndef LABEL_H
#define LABEL_H

#include<string>
#include<SFML/Graphics.hpp>

typedef sf::RectangleShape rect;

class Label : sf::RectangleShape
{
private:
	std::string note;

public:
	Label(std::string _note = "");
	virtual ~Label();

	void rewrite();
	virtual void draw();

	// Accessors
	void setNote();
	std::string getNote();
};



#endif // !LABEL_H