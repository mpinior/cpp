#include <iostream>
#include "JsonSerializer.h"

class XmlSerializer:public Serializable{
    private:
        std::string text1;
        std::string text2;
        
    public:
        XmlSerializer(std::string text1, std::string text2);
        void Serialize(Serializer *);

};

