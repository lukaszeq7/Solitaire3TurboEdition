#ifndef GAMECONTROL_H
#define GAMECONTROL_H

#include <QObject>
#include "card.h"

class GameControl : public QObject
{
    Q_OBJECT
public:
    explicit GameControl(QObject *parent = nullptr);

private:
    Card* _card;
};

#endif // GAMECONTROL_H
