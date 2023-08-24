#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

class SnowAnimation {
public:

    float snowflakeRadius;
    SnowAnimation(int windowWidth, int windowHeight, int numSnowflakes);
    void update(float deltaTime);
    void draw(sf::RenderWindow& window);
    void accumulatedSnow(sf::RenderWindow& window);


private:
    struct Snowflake {
        float x, y;
        float speed;
    };

    int windowWidth;
    int windowHeight;
    std::vector<Snowflake> snowflakes;
    std::vector<sf::Vector2f> accumulatedSnowPositions;
};

