/*
** EPITECH PROJECT, 2023
** SYNTHESE
** File description:
** main
*/

#include <QApplication>

#include "server.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QApplication::setApplicationDisplayName(Server::tr("Babel Server"));
    Server server;
    server.show();
    return app.exec();
}