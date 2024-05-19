#include "app.h"

App::App(QObject *parent) : QObject(parent)
{

}

void App::run()
{
    _gameControl = new GameControl(this);
    engine.rootContext()->setContextProperty("gameControl", _gameControl);
    engine.load(QUrl(QStringLiteral("qrc:/Solitaire3TurboEdition/Main.qml")));

    if (engine.rootObjects().isEmpty())
        return;
}
