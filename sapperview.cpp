#include "sapperview.h"


void SnapperView::openField(int index, fieldStatus status)
{
    myFields[index].setStatus(status);

    myFields[index].setIsOpened(true);
    openedNumber++;

    if (status == fieldStatus::zero)
    {
        int currentIndex = 0;

        if (index >= columns)   //if not first row
        {
            currentIndex = index - columns;

            if (myFields.at(currentIndex).getIsOpened() == false)
            {
                fieldStatus currentStatus = fieldStatus::closed;
                switch (myFields.at(currentIndex).getNeighboursBombs()) {
                case 0: currentStatus = fieldStatus::zero; break;
                case 1: currentStatus = fieldStatus::num1; break;
                case 2: currentStatus = fieldStatus::num2; break;
                case 3: currentStatus = fieldStatus::num3; break;
                case 4: currentStatus = fieldStatus::num4; break;
                case 5: currentStatus = fieldStatus::num5; break;
                case 6: currentStatus = fieldStatus::num6; break;
                case 7: currentStatus = fieldStatus::num7; break;
                case 8: currentStatus = fieldStatus::num8; break;
                default:
                    break;
                }
                openField(currentIndex, currentStatus);
            }
        }

        if (index < columns*(rows-1))   //if not last row
        {
            currentIndex = index + columns;
            if (myFields.at(currentIndex).getIsOpened() == false)
            {
                fieldStatus currentStatus = fieldStatus::closed;
                switch (myFields.at(currentIndex).getNeighboursBombs()) {
                case 0: currentStatus = fieldStatus::zero; break;
                case 1: currentStatus = fieldStatus::num1; break;
                case 2: currentStatus = fieldStatus::num2; break;
                case 3: currentStatus = fieldStatus::num3; break;
                case 4: currentStatus = fieldStatus::num4; break;
                case 5: currentStatus = fieldStatus::num5; break;
                case 6: currentStatus = fieldStatus::num6; break;
                case 7: currentStatus = fieldStatus::num7; break;
                case 8: currentStatus = fieldStatus::num8; break;
                default:
                    break;
                }
                openField(currentIndex, currentStatus);
            }
        }

        if (index%columns)   //if not left column
        {
            currentIndex = index-1;
            if (myFields.at(currentIndex).getIsOpened() == false)
            {
                fieldStatus currentStatus = fieldStatus::closed;
                switch (myFields.at(currentIndex).getNeighboursBombs()) {
                case 0: currentStatus = fieldStatus::zero; break;
                case 1: currentStatus = fieldStatus::num1; break;
                case 2: currentStatus = fieldStatus::num2; break;
                case 3: currentStatus = fieldStatus::num3; break;
                case 4: currentStatus = fieldStatus::num4; break;
                case 5: currentStatus = fieldStatus::num5; break;
                case 6: currentStatus = fieldStatus::num6; break;
                case 7: currentStatus = fieldStatus::num7; break;
                case 8: currentStatus = fieldStatus::num8; break;
                default:
                    break;
                }
                openField(currentIndex, currentStatus);
            }
        }

        if ((index+1)%columns)   //if not right column
        {
            currentIndex = index+1;
            if (myFields.at(currentIndex).getIsOpened() == false)
            {
                fieldStatus currentStatus = fieldStatus::closed;
                switch (myFields.at(currentIndex).getNeighboursBombs()) {
                case 0: currentStatus = fieldStatus::zero; break;
                case 1: currentStatus = fieldStatus::num1; break;
                case 2: currentStatus = fieldStatus::num2; break;
                case 3: currentStatus = fieldStatus::num3; break;
                case 4: currentStatus = fieldStatus::num4; break;
                case 5: currentStatus = fieldStatus::num5; break;
                case 6: currentStatus = fieldStatus::num6; break;
                case 7: currentStatus = fieldStatus::num7; break;
                case 8: currentStatus = fieldStatus::num8; break;
                default:
                    break;
                }
                openField(currentIndex, currentStatus);
            }
        }

        if (index >= columns && index%columns) //has LT neighbour
        {
            currentIndex = index - columns - 1;
            if (myFields.at(currentIndex).getIsOpened() == false)
            {
                fieldStatus currentStatus = fieldStatus::closed;
                switch (myFields.at(currentIndex).getNeighboursBombs()) {
                case 0: currentStatus = fieldStatus::zero; break;
                case 1: currentStatus = fieldStatus::num1; break;
                case 2: currentStatus = fieldStatus::num2; break;
                case 3: currentStatus = fieldStatus::num3; break;
                case 4: currentStatus = fieldStatus::num4; break;
                case 5: currentStatus = fieldStatus::num5; break;
                case 6: currentStatus = fieldStatus::num6; break;
                case 7: currentStatus = fieldStatus::num7; break;
                case 8: currentStatus = fieldStatus::num8; break;
                default:
                    break;
                }
                openField(currentIndex, currentStatus);
            }
        }

        if (index >= columns && (index+1)%columns) //has RT neighbour
        {
            currentIndex = index - columns + 1;
            if (myFields.at(currentIndex).getIsOpened() == false)
            {
                fieldStatus currentStatus = fieldStatus::closed;
                switch (myFields.at(currentIndex).getNeighboursBombs()) {
                case 0: currentStatus = fieldStatus::zero; break;
                case 1: currentStatus = fieldStatus::num1; break;
                case 2: currentStatus = fieldStatus::num2; break;
                case 3: currentStatus = fieldStatus::num3; break;
                case 4: currentStatus = fieldStatus::num4; break;
                case 5: currentStatus = fieldStatus::num5; break;
                case 6: currentStatus = fieldStatus::num6; break;
                case 7: currentStatus = fieldStatus::num7; break;
                case 8: currentStatus = fieldStatus::num8; break;
                default:
                    break;
                }
                openField(currentIndex, currentStatus);
            }
        }

        if (index < columns*(rows-1) && (index+1)%columns) //has RB neighbour
        {
            currentIndex = index + columns + 1;
            if (myFields.at(currentIndex).getIsOpened() == false)
            {
                fieldStatus currentStatus = fieldStatus::closed;
                switch (myFields.at(currentIndex).getNeighboursBombs()) {
                case 0: currentStatus = fieldStatus::zero; break;
                case 1: currentStatus = fieldStatus::num1; break;
                case 2: currentStatus = fieldStatus::num2; break;
                case 3: currentStatus = fieldStatus::num3; break;
                case 4: currentStatus = fieldStatus::num4; break;
                case 5: currentStatus = fieldStatus::num5; break;
                case 6: currentStatus = fieldStatus::num6; break;
                case 7: currentStatus = fieldStatus::num7; break;
                case 8: currentStatus = fieldStatus::num8; break;
                default:
                    break;
                }
                openField(currentIndex, currentStatus);
            }
        }

        if (index%columns && index < columns*(rows-1)) //has LB neighbour
        {
            currentIndex = index + columns - 1;
            if (myFields.at(currentIndex).getIsOpened() == false)
            {
                fieldStatus currentStatus = fieldStatus::closed;
                switch (myFields.at(currentIndex).getNeighboursBombs()) {
                case 0: currentStatus = fieldStatus::zero; break;
                case 1: currentStatus = fieldStatus::num1; break;
                case 2: currentStatus = fieldStatus::num2; break;
                case 3: currentStatus = fieldStatus::num3; break;
                case 4: currentStatus = fieldStatus::num4; break;
                case 5: currentStatus = fieldStatus::num5; break;
                case 6: currentStatus = fieldStatus::num6; break;
                case 7: currentStatus = fieldStatus::num7; break;
                case 8: currentStatus = fieldStatus::num8; break;
                default:
                    break;
                }
                openField(currentIndex, currentStatus);
            }
        }
    }
}

void SnapperView::newGameSlot()
{
    gameOn = true;
    flagsNumber = 0;
    emit scoreChangedSignal(flagsNumber);

    openedNumber = 0;

    int mySize = columns*rows;
    myFields = QVector<SnapperField>(mySize);

    for (int i = 0; i < numBombs; i++)
    {
        int index = 0;
        do
        {
            index = rand()%mySize;
        }
        while (myFields.at(index).getIsBomb());

        myFields[index].setIsBomb(true);

        //neighbours
        if (index >= columns)   //if not first row
        {
            myFields[index - columns].addNeighboursBombs();
        }

        if (index < columns*(rows-1))   //if not last row
        {
            myFields[index + columns].addNeighboursBombs();
        }

        if (index%columns)   //if not left column
        {
            myFields[index-1].addNeighboursBombs();
        }

        if ((index+1)%columns)   //if not right column
        {
            myFields[index+1].addNeighboursBombs();
        }

        if (index >= columns && index%columns) //has LT neighbour
        {
            myFields[index - columns - 1].addNeighboursBombs();
        }

        if (index >= columns && (index+1)%columns) //has RT neighbour
        {
            myFields[index - columns + 1].addNeighboursBombs();
        }

        if (index < columns*(rows-1) && (index+1)%columns) //has RB neighbour
        {
            myFields[index + columns + 1].addNeighboursBombs();
        }

        if (index%columns && index < columns*(rows-1)) //has LB neighbour
        {
            myFields[index + columns - 1].addNeighboursBombs();
        }
    }
    for(int i = 0; i < mySize; i++)
    {
        myFields[i].setStatus(fieldStatus::closed);
        myFields[i].setIsOpened(false);
    }

    int oldWidth = width();
    int oldHeight = height();

    QSize newSize(columns*fieldSize, rows*fieldSize);
    resize(newSize);
    update();
    setFixedSize(newSize);
    emit sizeChangedSignal(width()-oldWidth, height()-oldHeight);

    repaint();
}

void SnapperView::setLevelSlot()
{
    QMessageBox msgBox;

    msgBox.setWindowTitle(tr("Sapper"));
    msgBox.setText(tr("Choose level of the game:"));

    QPushButton *easyButton = msgBox.addButton(tr("Beginner"), QMessageBox::AcceptRole);
    QPushButton *averageButton = msgBox.addButton(tr("Average"), QMessageBox::AcceptRole);
    QPushButton *hardButton = msgBox.addButton(tr("Professional"), QMessageBox::AcceptRole);
    QPushButton *cancelButton = msgBox.addButton(tr("Cancel"), QMessageBox::NoRole);

    switch (currentLevel)
    {
        case Level::easy: easyButton->setDisabled(true); break;
        case Level::average: averageButton->setDisabled(true); break;
        case Level::hard: hardButton->setDisabled(true); break;
    }


    msgBox.exec();

    if (msgBox.clickedButton()==cancelButton) { return; }

    if (msgBox.clickedButton()==easyButton) { numBombs = 10; columns = 9; rows = 9; currentLevel = Level::easy;}
    if (msgBox.clickedButton()==averageButton) { numBombs = 40; columns = 16; rows = 16; currentLevel = Level::average;}
    if (msgBox.clickedButton()==hardButton) { numBombs = 99; columns = 30; rows = 16; currentLevel = Level::hard;}

    delete easyButton;
    delete averageButton;
    delete hardButton;
    delete cancelButton;

    newGameSlot();
}

void SnapperView::mousePressEvent(QMouseEvent *event)
{
    if (!gameOn) {   return; }

    int col = 0;
    while (col*fieldSize < event->pos().x()-fieldSize) {    col++;  }

    int row = 0;
    while (row*fieldSize < event->pos().y()-fieldSize) {    row++;  }

    qDebug()<<"col = "<<col;
    qDebug()<<"row = "<<row;

    int index = row*columns + col;

    if (event->button() == Qt::LeftButton)
    {
        if (myFields.at(index).getStatus() == fieldStatus::closed || myFields.at(index).getStatus() == fieldStatus::flaged)
        {
            if (myFields.at(index).getIsBomb())
            {
                for (int r = 0; r < rows; r++)
                {
                    for (int c = 0; c < columns; c++)
                    {
                        int ind = r*columns + c;

                        if (myFields.at(ind).getIsBomb())
                        {
                            myFields[ind].setStatus(fieldStatus::bomb);
                        }
                    }
                }
                myFields[index].setStatus(fieldStatus::bombed);

                gameOn = false;
            }
            else
            {
                fieldStatus currentStatus = fieldStatus::closed;
                switch (myFields.at(index).getNeighboursBombs())
                {
                    case 0: currentStatus = fieldStatus::zero; break;
                    case 1: currentStatus = fieldStatus::num1; break;
                    case 2: currentStatus = fieldStatus::num2; break;
                    case 3: currentStatus = fieldStatus::num3; break;
                    case 4: currentStatus = fieldStatus::num4; break;
                    case 5: currentStatus = fieldStatus::num5; break;
                    case 6: currentStatus = fieldStatus::num6; break;
                    case 7: currentStatus = fieldStatus::num7; break;
                    case 8: currentStatus = fieldStatus::num8; break;
                    default:
                        break;
                }

                openField(index, currentStatus);
            }
        }
    }
    else if (event->button() == Qt::RightButton)
    {
        if (myFields.at(index).getStatus() == fieldStatus::closed)
        {
            myFields[index].setStatus(fieldStatus::flaged);
            flagsNumber++;
            emit scoreChangedSignal(flagsNumber);
        }
        else if (myFields.at(index).getStatus() == fieldStatus::flaged)
        {
            myFields[index].setStatus(fieldStatus::closed);
            flagsNumber--;
            emit scoreChangedSignal(flagsNumber);
        }
        else {  return; }
    }
    else {  return; }

    if (flagsNumber+openedNumber == rows*columns && flagsNumber == numBombs)
    {
        gameOn = false;
        QMessageBox message;
        message.setWindowTitle(tr("Sapper"));
        message.setWindowIcon(QIcon(":/icons/icon.png"));
        message.setText(tr("Congratulations, YOU WON!"));
        message.exec();
   }

    qDebug()<<"open = "<<openedNumber;
    qDebug()<<"flagsNumber = "<<flagsNumber;
    qDebug()<<"numBombs = "<<numBombs;


    repaint();
}

void SnapperView::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < columns; c++)
        {
            QRect rect(QPoint(c*fieldSize, r*fieldSize), QSize(fieldSize, fieldSize));
            QString fileName;
            switch (myFields.at(c + r*columns).getStatus())
            {
                case fieldStatus::bomb: fileName = ":/icons/bomb.png"; break;
                case fieldStatus::bombed: fileName = ":/icons/bombed.png"; break;
                case fieldStatus::closed: fileName = ":/icons/closed.png"; break;
                case fieldStatus::flaged: fileName = ":/icons/flaged.png"; break;
                case fieldStatus::num1: fileName = ":/icons/num1.png"; break;
                case fieldStatus::num2: fileName = ":/icons/num2.png"; break;
                case fieldStatus::num3: fileName = ":/icons/num3.png"; break;
                case fieldStatus::num4: fileName = ":/icons/num4.png"; break;
                case fieldStatus::num5: fileName = ":/icons/num5.png"; break;
                case fieldStatus::num6: fileName = ":/icons/num6.png"; break;
                case fieldStatus::num7: fileName = ":/icons/num7.png"; break;
                case fieldStatus::num8: fileName = ":/icons/num8.png"; break;
                case fieldStatus::zero: fileName = ":/icons/zero.png"; break;
            }

            QPixmap pix(fileName);
            painter.drawPixmap(rect, pix);
        }
    }
}

SnapperView::SnapperView(QWidget *parent) : QWidget(parent)
{
    newGameSlot();
}
