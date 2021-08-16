#ifndef STATICLIBRARY_H
#define STATICLIBRARY_H

#include <QtWidgets>

class StaticLibrary : public QWidget
{
    Q_OBJECT
public:
    explicit StaticLibrary(QWidget *parent = 0);
    void updateBackground();
    int subtract(int a, int b);

private slots:
    void onClicked();
};

int add(int a, int b);

#endif // STATICLIBRARY_H
