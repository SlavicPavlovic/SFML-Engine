/*
** 13/03/2020 Paris
** GameObject.hpp
** File description:
** Adrien Colombier
*/

#pragma once

#include <SFML/Graphics.hpp>

class GameObject
{
    public:
        GameObject();
        ~GameObject() = default;

        /* SETTERS */
        void setTag(std::string const &tag);
        void setType(std::string const &type);
        void setPosition(sf::Vector2f const &position);
        void setPosition(sf::Vector2f const &position, sf::Sprite *sprite);
        void setScale(sf::Vector2f const &scale, sf::Sprite *sprite);
        void setOrigin(sf::Vector2f const &origin, sf::Sprite *sprite);
        void setLayout(size_t const &layout);
        void setActive(bool const &active);

        /* GETTERS */
        std::string     getTag(void)        const;
        std::string     getType(void)       const;
        sf::Vector2f    getPosition(void)   const;
        sf::Vector2f    getScale(void)      const;
        size_t          getLayout(void)     const;
        bool            getActive(void)     const;

        /* OPERATORS */
        bool operator < (const GameObject &object) const { return _layout < object.getLayout(); }

    private:
        std::string     _tag;
        std::string     _type;
        sf::Vector2f    _position;
        sf::Vector2f    _scale;
        sf::Vector2f    _origin;
        size_t          _layout;
        bool            _active;
};