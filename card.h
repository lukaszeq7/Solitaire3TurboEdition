#ifndef CARD_H
#define CARD_H

#include <QObject>
#include <QString>

class Card : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString color READ color)
    Q_PROPERTY(int value READ value)

public:
    explicit Card(QString color, int value, QObject *parent = nullptr);

    QString color() const;
    int value() const;

private:
    QString _color;
    int _value;
};

#endif // CARD_H
