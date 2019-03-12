#include <iostream>

using namespace std;

struct ForwardList{
    int value;
    ForwardList *next;

    void Append(ForwardList *list, ForwardList *tail) {
        while(list->next != NULL) {
            list = list->next;
        }
        list->next = tail;
    }
    
    ForwardList *PushFront(ForwardList *list, ForwardList *head) {
        head->next = list;
        return head;
    }
};

ForwardList *CreateNode(int value) {
    ForwardList *node = new ForwardList;
    node->next = NULL;
    node->value = value;
    return node;
}

void DestroyList(ForwardList *list) {
    ForwardList *next = list->next;
    while(next->next != NULL) {
        delete list;
        list = next;
        next = next->next;
    }
    delete next;
}

int main() {
    ForwardList *myList = new ForwardList;
    myList->value = 1;
    myList->next = CreateNode(2);
    cout<<myList->value<<endl<<myList->next->value<<endl;
    myList = myList->PushFront(myList, CreateNode(3));
    cout<<myList->value<<endl<<myList->next->value<<endl;
    DestroyList(myList);
    return 0;
}