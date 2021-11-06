#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"
#include "SFML/System.hpp"
#include <vector>
#include "Menu.h"

using namespace std;
using namespace sf;
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My Game", Style::Titlebar | Style::Close);
    
    sf::Texture backgroundTexture;
    backgroundTexture.loadFromFile("background9.jpg");

    float deltaTime = 0;
    Clock clock;
   
    while (window.isOpen())
    {
        deltaTime = clock.restart().asSeconds();
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::KeyReleased:
                switch(event.key.code) {
                case sf::Keyboard::Up:
                    menu.MoveUp();
                    break;

                case sf::Keyboard::Down:
                    menu.MoveDown();
                    break;

                case sf::Keyboard::Return:
                    switch (menu.GetPressedItem())
                    {
                    case 0 :
                        std::cout << "Play has been preesed" << std::endl;
                        //go to state
                        break;

                    case 1 :
                        std::cout << "Leaderboard has been preesed" << std::endl;
                        //go to state
                        break;

                    case 2 :
                        window.close();
                        break;

                    case 3 :
                        window.close();
                        break;

                    case Event::KeyPressed:
                        if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
                            window.close();
                        break;
                        cout << char(event.text.unicode) << endl;
                        break;
                    default:
                        break;
                    }
                    break;
                }
                break;

            case sf::Event::Closed:
                window.close();
                break;
            }
        }
        window.clear();
        window.draw(background);
        menu.draw(window);
        window.display();
        
    }
    return 0;
}

