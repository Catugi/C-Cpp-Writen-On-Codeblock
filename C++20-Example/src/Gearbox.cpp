#include "Gearbox.h"

Gearbox::Gearbox(int maxGears)
{
    this.m_maxGears = maxGears;
    this->m_gears = new std::vector<Gear>;
}

Gearbox::~Gearbox()
{
    //dtor
}
