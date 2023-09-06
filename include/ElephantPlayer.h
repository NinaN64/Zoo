#ifndef ELEPHANTPLAYER_H
#define ELEPHANTPLAYER_H
#include <string>
#include <Player.h>

class ElephantPlayer : public Player
{
    public:
        ElephantPlayer(const std::string name);
        virtual ~ElephantPlayer();
        virtual char PlayerChoice();
};

#endif // ELEPHANTPLAYER_H
