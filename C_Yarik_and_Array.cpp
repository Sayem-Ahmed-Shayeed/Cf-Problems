#include <bits/stdc++.h>
#include <QCoreApplication>
#include <QFont>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString text = "Hello, world!";

    // Create a QFont object and set the font size
    QFont font;
    font.setPointSize(18); // Set font size to 18

    // Apply the font to the string
    text.setFont(font);

    qDebug() << text;

    return a.exec();
}
