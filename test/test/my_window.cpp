#include "my_window.h"
#include "ui_my_window.h"

My_Window::My_Window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::My_Window)
{
    ui->setupUi(this);
}

My_Window::~My_Window()
{
    delete ui;
}
