#include <iostream>
#include "Serializer.h"


class Serializable{
    public:
        virtual void Serialize(Serializer *);
};

