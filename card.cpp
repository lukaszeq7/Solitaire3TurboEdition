#include "card.h"

Card::Card(QString color, int value, QObject *parent)
    : _color(color)
    , _value(value)
{

}

QString Card::color() const {
    return _color;
}

int Card::value() const {
    return _value;
}
