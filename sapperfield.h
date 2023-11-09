#ifndef SAPPERFIELD_H
#define SAPPERFIELD_H

#include <QPoint>
#include <QVector>

enum class fieldStatus {closed, flaged, num1, num2, num3, num4, num5, num6, num7, num8, bomb, bombed, zero};


class SnapperField
{
    fieldStatus status = fieldStatus::closed;
    bool isBomb = false;
    bool isOpened = false;
    int neighboursBombs = 0;

public:
    SnapperField();

    bool getIsBomb() const;
    void setIsBomb(bool value);
    fieldStatus getStatus() const;
    void setStatus(const fieldStatus &value);
    int getNeighboursBombs() const;
    void addNeighboursBombs();

    void openField(int col, int row);
    bool getIsOpened() const;
    void setIsOpened(bool value);
};

#endif // SAPPERFIELD_H
