//
// Created by Alexander Winter on 2022-02-11.
//

#ifndef GAMETEMPLATE_SCREEN_H
#define GAMETEMPLATE_SCREEN_H

#include "Game.h"
#include "SFML/Graphics/RenderTarget.hpp"

namespace wiz {
	class Screen;
}

class wiz::Screen {
	const Game& game;

public:
	explicit Screen(const Game& game);

	virtual ~Screen() = default;

	virtual void tick(float delta) = 0;
	virtual void render(const sf::RenderTarget& target) = 0;

	virtual void show() = 0;
	virtual void hide() = 0;

	virtual const std::string& getName() const = 0;
	const Game& getGame() const;
};


#endif //GAMETEMPLATE_SCREEN_H
