#include "gamecontrol.h"

GameControl::GameControl(QObject *parent)
    : QObject{parent}
    , _card(new Card("h", 2, this))
{

}
