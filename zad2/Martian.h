#include <iostream>
#include <time.h>

class Martian{
    static int martianCount;

    public:
        Martian();
        ~Martian();

        static int GetNumber();

        bool Attack();

};
