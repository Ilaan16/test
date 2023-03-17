/*
** EPITECH PROJECT, 2023
** SYNTHESE
** File description:
** main
*/

#include <QApplication>
#include "client.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QApplication::setApplicationDisplayName(Client::tr("Babel Client"));
    Client client;
    client.show();
    return app.exec();
}