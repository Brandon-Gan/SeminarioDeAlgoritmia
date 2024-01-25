#include "mainwindow.h"
#include "neurona.h"
#include "administradorneuronas.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "Tarea1_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    w.show();

    // Ejemplo de uso neuronas
    AdministradorNeuronas administrador;

    Neurona neurona1(1, 2.5, 10, 20, 255, 0, 0);
    Neurona neurona2(2, 1.8, 15, 25, 0, 255, 0);

    administrador.agregarInicio(neurona1);
    administrador.agregarFinal(neurona2);

    administrador.mostrar();

    return a.exec();
}
