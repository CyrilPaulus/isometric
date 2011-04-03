#ifndef _GAME_H_
#define	_GAME_H_

#include <SFML/Graphics.hpp>
#include "imageManager.h"
#include "cursor.h"
#include "tileset.h"
#include "cannon.h"

class Game {
  public:
    Game();
    ~Game();
    void run();
    void exit();

  private:
    void scrollTo(const sf::Vector2f&);
    void scrollView();
    void update();
    void paint();

    void onResized(sf::Event);
    void onMouseButtonPressed(sf::Event);
    void onMouseButtonReleased(sf::Event);
    void onMouseMoved(sf::Event);
    void onKeyPressed(sf::Event);
    void onKeyReleased(sf::Event);

    bool running;
    sf::RenderWindow *window;
    sf::Vector2f center;
    sf::View view;
    Move::Type scroll;
    Cursor *cursor;
    ImageManager *imageMgr;
    Cannon *cannon;
    TileSet *set;
};

#endif	/* _GAME_H_ */
