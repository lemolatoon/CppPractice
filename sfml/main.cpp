#include <iostream>

// when compile, you have to point -I option
// for include, 
// locate /usr/include/

// for -o option, 
// locate /usr/lib/ 
#include <SFML/Graphics.hpp>


int main() {
    std::cout << "Hello" << std::endl;


    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!!!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    // std::cout << sf::Color::Green << std::endl;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            std::cout << "handling Event" << std::endl;
            if (event.type == sf::Event::Closed) {
                std::cout << "window closed" << std::endl;
                window.close();
            }
        }
    }
    std::cout << "window loop ended" << std::endl;

    window.clear();
    window.draw(shape);
    window.display();

    return 0;
}