#ifndef GEARBOX_H
#define GEARBOX_H
#include <vector>


class Gearbox
{
public:
    Gearbox(int maxGears);
    virtual ~Gearbox();
    class Gear
    {
    public:
        Gear();
        ~Gear();
    protected:
    private:
    };


protected:

private:
    int m_currentGear;
    std::vector<Gear> m_gears;
    int m_maxGears;
};

#endif // GEARBOX_H
