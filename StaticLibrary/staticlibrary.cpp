#include "staticlibrary.h"

StaticLibrary::StaticLibrary(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *pButton = new QPushButton(this);
    pButton->setText("Test Static Library");

    connect(pButton, SIGNAL(clicked()), this, SLOT(onClicked()));
}

void StaticLibrary::onClicked()
{
    updateBackground();
    QMessageBox::information(this, "Tip", "Static Library...");
}


void StaticLibrary::updateBackground()
{
    QTime time;
    time = QTime::currentTime();
    qsrand(time.msec() + time.second()*1000);

    int nR = qrand() % 256;
    int nG = qrand() % 256;
    int nB = qrand() % 256;

    QPalette palette(this->palette());
    palette.setColor(QPalette::Background, QColor(nR, nG, nB));
    this->setPalette(palette);
}

int StaticLibrary::subtract(int a, int b)
{
    return a - b;
}

int add(int a, int b)
{
    return a + b;
}
