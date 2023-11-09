#ifndef SAPPERVIEW_H
#define SAPPERVIEW_H

#include <QWidget>
#include <QVector>
#include <QMouseEvent>
#include <QPainter>
#include <QPaintEvent>
#include <QPixmap>
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QDialog>
#include <QIcon>
#include <QPushButton>
#include <QRadioButton>
#include <QVBoxLayout>
#include <QAbstractButton>
#include "sapperfield.h"

enum class Level {easy, average, hard};

class SnapperView : public QWidget
{
    Q_OBJECT
int rows = 9;
int columns = 9;
int numBombs = 10;
int fieldSize = 35;
Level currentLevel = Level::easy;

int flagsNumber = 0;
int openedNumber = 0;
QVector<SnapperField> myFields;

bool gameOn = true;


public:
    explicit SnapperView(QWidget *parent = nullptr);

void openField(int index, fieldStatus status);

signals:
void scoreChangedSignal(int);
void sizeChangedSignal(int widthDelta, int heightDelta);

public slots:
void newGameSlot();
void setLevelSlot();


// QWidget interface
protected:
virtual void mousePressEvent(QMouseEvent *event) override;
virtual void paintEvent(QPaintEvent *event) override;
};

#endif // SAPPERVIEW_H
