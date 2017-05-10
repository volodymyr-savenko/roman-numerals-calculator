#include "stdafx.h"
#include "RomanNumeralsCalculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RomanNumeralsCalculator w;
    w.show();
	
    return a.exec();
}
