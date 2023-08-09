//
// Created by Hamza Beder on 8/9/2023.
//

#include "Trie.h"
using namespace std;
TrieNode:: TrieNode(){
    this->isDone = false;
    for(int i = 0; i < 26; i++)
        this->children[i] = nullptr;
}

void Trie:: insert(string s){
    TrieNode * temp = this->root;
    for(int i = 0; i < s.length(); i++){
        if (temp->children[s[i] - 'a'] == nullptr)
            temp->children[s[i] - 'a'] = new TrieNode();
        temp = temp->children[s[i] - 'a'];
    }
    temp->isDone = true;
}

bool Trie:: search(string s){
    TrieNode * temp = this->root;
    for(int i = 0; i < s.length(); i++){
        if(temp->children[s[i] - 'a'] == nullptr)
            return false;
        temp = temp->children[s[i] - 'a'];
    }
    if(temp->isDone)
        return true;
    return false;
}