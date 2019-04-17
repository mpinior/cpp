#include <iostream>
#include "Serializable.h"



class JsonSerializer:public Serializable{
    private:
        std::string text1;
        std::string text2;
        
    public:
        JsonSerializer(std::string text1, std::string text2);
        
        void Serialize(Serializer *);

};