#ifndef MONKEYPLAYER_H
#define MONKEYPLAYER_H
#include <string>
#include <Player.h>

class MonkeyPlayer : public Player
{
    public:
        MonkeyPlayer(const std::string name);
        virtual ~MonkeyPlayer();
        virtual char PlayerChoice();

};

#endif // MONKEYPLAYER_H
