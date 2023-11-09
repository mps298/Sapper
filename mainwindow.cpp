#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    show();
    //ui->sapperWidget->setLevelSlot();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sizeChangedSlot(int widthDelta, int heightDelta)
{
    setFixedSize(width()+widthDelta, height()+heightDelta);
    QDesktopWidget desktop;
    QRect rect = desktop.availableGeometry(this);
            //desktop.availableGeometry(desktop.primaryScreen());
    QPoint center = rect.center();
    int x = center.x() - (width()/2);
    int y = center.y() - (height()/2);
    center.setX(x);
    center.setY(y);
    move(center);
}
