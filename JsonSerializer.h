#include <iostream>



class JsonSerializer:public Serializable{
    private:
        std::string text1;
        std::string text2;
        
    public:
        JsonSerializer(std::string text1, std::string text2);
        
        Serialize(Serializer *);

};


