#include "XmlSerializer.h"

int main() {
    Serializer *serializer = new Serializer;
    Serializable *tab[2];
    tab[0] = new XmlSerializer("string in xml1", "string in xml2");
    tab[1] = new JsonSerializer("string in json1", "string in json2");
    tab[0]->Serialize(serializer);
    std::cout<<serializer->text<<std::endl;
    serializer->text = "";
    tab[1]->Serialize(serializer);
    std::cout<<serializer->text<<std::endl;
    return 0;
}