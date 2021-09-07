//
// Created by WangRuoFan on 2021/9/7.
//

#ifndef TEST_EXAM2_H
#define TEST_EXAM2_H

#include<bits\stdc++.h>
using namespace std;

struct QueueNode{
    QueueNode* prev;
    QueueNode* next;
    char* data;
};

class Queue{
public:
    Queue():head(nullptr),tail(nullptr),m_size(0){};
    QueueNode* get_tail();
    bool insert_head(QueueNode *node);
    int get_size() const;
private:
    QueueNode *head;
    QueueNode *tail;
    mutable shared_mutex x;    // C++17
    int m_size;         // 变量命名考虑需求
    // 作为一个deque缺少大量方法和变量
};


#endif //TEST_EXAM2_H
