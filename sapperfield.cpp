#include "sapperfield.h"

bool SnapperField::getIsBomb() const
{
    return isBomb;
}

void SnapperField::setIsBomb(bool value)
{
    isBomb = value;
}

fieldStatus SnapperField::getStatus() const
{
    return status;
}

void SnapperField::setStatus(const fieldStatus &value)
{
    status = value;
}

int SnapperField::getNeighboursBombs() const
{
    return neighboursBombs;
}

void SnapperField::addNeighboursBombs()
{
    neighboursBombs++;
}

bool SnapperField::getIsOpened() const
{
    return isOpened;
}

void SnapperField::setIsOpened(bool value)
{
    isOpened = value;
}

SnapperField::SnapperField()
{

}
