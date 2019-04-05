#include "searchscreen.h"

class searchscreenData : public QSharedData
{
public:

};

searchscreen::searchscreen() : data(new searchscreenData)
{

}

searchscreen::searchscreen(const searchscreen &rhs) : data(rhs.data)
{

}

searchscreen &searchscreen::operator=(const searchscreen &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

searchscreen::~searchscreen()
{

}
