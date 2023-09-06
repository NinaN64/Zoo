#ifndef PLAYER_H
#define PLAYER_H
#include <string>


class Player
{
    public:
        std::string name;
        Player(const std::string & n);
        virtual ~Player();
        virtual char PlayerChoice();
        std::string Name() const {return name;}
};

#endif // PLAYER_H
