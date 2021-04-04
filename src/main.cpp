
#include "main.h"

int main(int argc, char** argv)
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Main window", sf::Style::Titlebar | sf::Style::Close );
    sf::CircleShape shapeR(10.f);
    sf::CircleShape shapeB(10.f);
    shapeR.setFillColor(sf::Color::Red);
    shapeB.setFillColor(sf::Color::Blue);

    Manager mngr;

    mngr.init();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            std::cout << "Haut" << std::endl;
            window.setTitle("Haut");
            shapeR.setPosition(shapeR.getPosition()+sf::Vector2f(0, -1));
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            std::cout << "Bas" << std::endl;
            window.setTitle("Bas");
            shapeR.setPosition(shapeR.getPosition()+sf::Vector2f(0, 1));
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            std::cout << "Gauche" << std::endl;
            window.setTitle("Gauche");
            shapeR.setPosition(shapeR.getPosition()+sf::Vector2f(-1, 0));
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            std::cout << "Droite" << std::endl;
            window.setTitle("Droite");
            shapeR.setPosition(shapeR.getPosition()+sf::Vector2f(1, 0));
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
        {
            std::cout << "Haut" << std::endl;
            window.setTitle("Haut");
            shapeB.setPosition(shapeB.getPosition()+sf::Vector2f(0, -1));
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            std::cout << "Bas" << std::endl;
            window.setTitle("Bas");
            shapeB.setPosition(shapeB.getPosition()+sf::Vector2f(0, 1));
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
        {
            std::cout << "Gauche" << std::endl;
            window.setTitle("Gauche");
            shapeB.setPosition(shapeB.getPosition()+sf::Vector2f(-1, 0));
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            std::cout << "Droite" << std::endl;
            window.setTitle("Droite");
            shapeB.setPosition(shapeB.getPosition()+sf::Vector2f(1, 0));
        }

        mngr.process();

        window.clear();
        window.draw(shapeR);
        window.draw(shapeB);
        window.display();
    }

    return 0;
}