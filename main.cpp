#include "SellBroCRM.h"
#include "LoginScreen.h"
#include "MainWidget.h"
#include <QtWidgets/QApplication>



int main(int argc, char *argv[])
{

    

    QApplication a(argc, argv);

   //  QFontDatabase::addApplicationFont("G:/projects/SellBroCRM/assets/fonts/Procrastinating_Pixie.ttf");

    MainWidget login;

    login.show();
    return a.exec();
}
