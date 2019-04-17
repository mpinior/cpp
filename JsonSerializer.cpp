#include "JsonSerializer.h"

JsonSerializer::JsonSerializer(std::string text1, std::string text2){
    this->text1 = text1;
    this->text2 = text2;
}

void JsonSerializer::Serialize(Serializer *ser){
    ser->text += "{text1:\" ";
    ser->text += text1;
    ser->text += "\"}\n";
    ser->text += "{text2:\" ";
    ser->text += text2;
    ser->text += "\"}\n";
}