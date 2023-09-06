#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H
#include <Player.h>

class HumanPlayer : public Player
{
    public:
        HumanPlayer(const std::string name);
        virtual ~HumanPlayer();
        virtual char PlayerChoice();

};

#endif // HUMANPLAYER_H
