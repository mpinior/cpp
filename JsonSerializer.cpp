#include "JsonSerializer.h"

JsonSerializer(std::string text1, std::string text2){

}

Serialize(Serializer *){
    ser->text += "{text1:\" ";
    ser->text += text1;
    ser->text += "\"}\n";
    ser->text += "{text2:\" ";
    ser->text += text2;
    ser->text += "\"}\n";
}
