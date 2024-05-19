#include <QGuiApplication>
#include "app.h"

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);

    App solitaireApp;
    solitaireApp.run();

    return app.exec();
}
