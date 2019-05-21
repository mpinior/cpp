#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <iostream>
#include <vector>
#include "Query.h"

template <class ObjectType>
class Repository{
    private:
        std::vector<ObjectType> elements;
    public:
        void Add(ObjectType element) {
            this->elements.push_back(element);
        }
        std::vector<ObjectType> FindBy(const Query<ObjectType> &query);
        int Size() {
            return this->elements.size();
        }
        ObjectType operator[](int index) {
            return this->elements[index];
        }
};

template <class ObjectType>
std::vector<ObjectType> Repository<ObjectType>::FindBy(const Query<ObjectType> &query) {
    std::vector<ObjectType> answer;
    for(int i=0;i<this->elements.size();i++) {
        if (query.Accept(this->elements[i])) {
            answer.push_back(this->elements[i]);
        }
    }
    return answer;
}

#endif