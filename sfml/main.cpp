#include <iostream>
#include <cmath>

using namespace std;

// when compile, you have to point -I option
// for include, 
// locate /usr/include/

// for -o option, 
// locate /usr/lib/ 
#include <SFML/Graphics.hpp>

void circle(sf::CircleShape shape, sf::Vector2f origin, float v) {
    sf::Vector2f pos = shape.getPosition();

    float dt = 0.01f;

    float r = std::sqrt(pos.x*pos.x + origin.x*origin.x + pos.y*pos.y + origin.y*origin.y);

    float theta = std::acos(pos.x); // arcsin

    float x = r * std::cos(theta + v * dt);
    float y = r * std::sin(theta + v * dt);

    sf::Vector2f newPos(x, y);

    shape.setPosition(newPos);
}


int main() {
    std::cout << "Hello" << std::endl;


    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!!!");
    cout << "window was defined" << endl; 
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    // std::cout << sf::Color::Green << std::endl;

    cout << "window, shape were defined" << endl; 

    sf::Vector2f origin(0.0, 0.0);
    std::cout << "origin:" << origin.x << "," << origin.y << std::endl;
    float v = 0.1;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            std::cout << "handling Event" << std::endl;

            circle(shape, origin, v);

            if (event.type == sf::Event::Closed) {
                std::cout << "window closed" << std::endl;
                window.close();
            }
        }
        window.clear();
        window.draw(shape);
        window.display();

        


    }
    std::cout << "NOTE: write draw in loop" << std::endl;
    std::cout << "window loop ended" << std::endl;


    return 0;
}

