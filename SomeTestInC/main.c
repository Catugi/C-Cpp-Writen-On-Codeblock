struct FPGAInfo
{
    union
    {
        struct bits
        {
            unsigned int bulb1On : 1;
            unsigned int bulb2On : 1;
            unsigned int bulb1Off : 1;
            unsigned int bulb2Off : 1;
            unsigned int jetOn : 1;
        };
        unsigned int data;
    };
};
