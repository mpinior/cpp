#include <iostream>
#include <string>
#include <memory>

struct SmartTree{
    int value;
    std::unique_ptr<SmartTree> LeftChild;
    std::unique_ptr<SmartTree> RightChild;
};

std::unique_ptr <SmartTree> CreateLeaf(int value) {
    std::unique_ptr <SmartTree> Leaf = std::make_unique <SmartTree>();
    Leaf->value = value;
    Leaf->LeftChild = nullptr;
    Leaf->RightChild = nullptr;
    return Leaf;
}

std::unique_ptr <SmartTree> InsertLeftChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> left_subtree) {
    tree->LeftChild = std::move(left_subtree);
    return tree;
}

std::unique_ptr <SmartTree> InsertRightChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> right_subtree) {
    tree->RightChild = std::move(right_subtree);
    return tree;
}
void PrintTreeInOrder(const std::unique_ptr<SmartTree> &unique_ptr, std::ostream *out){
    PrintTreeInOrder(unique_ptr->LeftChild, out);
    *out<<unique_ptr->value<<" ";
    PrintTreeInOrder(unique_ptr->RightChild, out);
}

std::string DumpTree(const std::unique_ptr<SmartTree> &tree) {
    std::string string_tree;
    if (tree != nullptr) {
        string_tree += DumpTree(tree->LeftChild);
        string_tree += std::to_string(tree->value);
        string_tree += " ";
        string_tree += DumpTree(tree->RightChild);
    }
    return string_tree;
}

//std::unique_ptr <SmartTree> RestoreTree(const std::string &tree) 
// Nie określono jednoznacznie w zadaniu, czy chodzi o drzewo pełne, czy nie.