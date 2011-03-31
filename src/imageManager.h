#ifndef _IMAGEMANAGER_H_
#define _IMAGEMANAGER_H_

#include <SFML/Graphics.hpp>
#include <map>
#include <string>

class ImageManager {
  public:
    ImageManager();
    ~ImageManager();
    sf::Image *get(std::string);

  private:
    std::string nameToFile(std::string);

    std::string resDir;
    std::map<std::string, sf::Image*> pool;
};

#endif /* _IMAGEMANAGER_H_ */
