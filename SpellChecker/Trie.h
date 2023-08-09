//
// Created by Hamza Beder on 8/9/2023.
//

#ifndef SPELLCHECKER_TRIE_H
#define SPELLCHECKER_TRIE_H
#include <iostream>
class TrieNode{
public:
    bool isDone;
    TrieNode * children[26];
    TrieNode();
    TrieNode(bool isDone);
};

class Trie {
public:
    TrieNode* root = new TrieNode;
    void insert(std::string s);
    bool search(std::string s);

};


#endif //SPELLCHECKER_TRIE_H
