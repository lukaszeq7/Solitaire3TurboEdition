#ifndef APP_H
#define APP_H

#include <QObject>
#include <QQmlApplicationEngine>
#include <QQmlContext>

// #include "card.h"
#include "gamecontrol.h"

class App : public QObject {
    Q_OBJECT

public:
    explicit App(QObject *parent = nullptr);

    void run();

private:
    QQmlApplicationEngine engine;
    // Card* _card;
    GameControl* _gameControl;
};

#endif // APP_H
