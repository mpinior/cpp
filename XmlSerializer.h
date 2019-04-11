#include <iostream>

class XmlSerializer:public Serializable{
    private:
        std::string text1;
        std::string text2;
        
    public:
        XmlSerializer(std::string text1, std::string text2);
        Serialize(Serializer *);

};

