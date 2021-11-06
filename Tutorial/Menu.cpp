#include "Menu.h"

Menu::Menu(float width, float height)
{	
	
	this->size = sf::Vector2f(800.0f, 600.0f);
	
	
	if (!font.loadFromFile("SDfont.ttf"))
	{

	}
	menu[0].setFont(font);
	menu[0].setCharacterSize(80);
	menu[0].setFillColor(sf::Color::Black);
	menu[0].setString("Play");
	menu[0].setOrigin(menu[0].getGlobalBounds().width / 2, menu[0].getGlobalBounds().height / 2);
	menu[0].setPosition(sf::Vector2f(width / 2, height / (MAX_ITEMS + 4) * 1));

	menu[1].setFont(font);
	menu[1].setCharacterSize(80);
	menu[1].setFillColor(sf::Color::Red);
	menu[1].setString("Learderboard");
	menu[1].setOrigin(menu[1].getGlobalBounds().width / 2, menu[1].getGlobalBounds().height / 2);
	menu[1].setPosition(sf::Vector2f(width / 2, height / (MAX_ITEMS + 2) * 2));

	menu[2].setFont(font);
	menu[2].setCharacterSize(80);
	menu[2].setFillColor(sf::Color::Red);
	menu[2].setString("Exit");
	menu[2].setOrigin(menu[2].getGlobalBounds().width / 2, menu[2].getGlobalBounds().height / 2);
	menu[2].setPosition(sf::Vector2f(width / 2, height / (MAX_ITEMS + 1.5) * 3));

}

Menu::~Menu()
{
	
}

void Menu::draw(sf::RenderWindow& window)
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		window.draw(menu[i]);
	}	
}

void Menu::MoveUp()
{
	if (selectedItem -1 >= 0)
	{
		menu[selectedItem].setFillColor(sf::Color::Black);
		     selectedItem--;
	    menu[selectedItem].setFillColor(sf::Color::Red);

	}

}

void Menu::MoveDown()
{
	if (selectedItem +1 < MAX_ITEMS)
	{
		
menu[selectedItem].setFillColor(sf::Color::Black);
		selectedItem++;
		menu[selectedItem].setFillColor(sf::Color::Red);

	}

}
