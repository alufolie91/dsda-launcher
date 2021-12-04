#include "mainwindow.h"
#include <QFile>
#include <QApplication>
#include <QStyleFactory>
#include <QSplashScreen>
#include <QTimer>
#include <QDebug>


int main(int argc, char *argv[])
{
    #ifdef LINUX
    std::string os = "Linux";
    #else
    #ifdef WINDOWS
    std::string os = "Windows";
    #else
    std::string os = "Mac OSX";
    #endif
    #endif



    if(os=="Linux" || os=="Windows")
    {
       // QApplication::setStyle("Fusion");
        qApp->setStyle(QStyleFactory::create("Fusion"));

            QPalette darkPalette;
            darkPalette.setColor(QPalette::Window, QColor(53,53,53));
            darkPalette.setColor(QPalette::WindowText, Qt::white);
            darkPalette.setColor(QPalette::Base, QColor(25,25,25));
            darkPalette.setColor(QPalette::AlternateBase, QColor(53,53,53));
            darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
            darkPalette.setColor(QPalette::ToolTipText, Qt::white);
            darkPalette.setColor(QPalette::Text, Qt::white);
            darkPalette.setColor(QPalette::Button, QColor(53,53,53));
            darkPalette.setColor(QPalette::ButtonText, Qt::white);
            darkPalette.setColor(QPalette::BrightText, Qt::red);
            darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));

            darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
            darkPalette.setColor(QPalette::HighlightedText, Qt::black);

            qApp->setPalette(darkPalette);

            qApp->setStyleSheet("QToolTip { color: #ffffff; background-color: #2a82da; border: 1px solid white; }");
    }


    QApplication a(argc, argv);

    MainWindow w;
    w.ensurePolished();
    w.show();

    a.setQuitOnLastWindowClosed(false);

    return a.exec();
}
