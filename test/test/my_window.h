#ifndef MY_WINDOW_H
#define MY_WINDOW_H

#include <QMainWindow>

namespace Ui {
class My_Window;
}

class My_Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit My_Window(QWidget *parent = 0);
    ~My_Window();

private:
    Ui::My_Window *ui;
};

#endif // MY_WINDOW_H
