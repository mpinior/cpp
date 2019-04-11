#include "XmlSerializer.h"

XmlSerializer(std::string text1, std::string text2){
    this->text1 = text1;
    this->text2 = text2;
}

Serialize(Serializer *ser){
    ser->text += "<text1>";
    ser->text += text1;
    ser->text += "</text1>\n";
    ser->text += "<text2>";
    ser->text += text2;
    ser->text += "</text2>\n";

}