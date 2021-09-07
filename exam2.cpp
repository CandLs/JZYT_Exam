//
// Created by WangRuoFan on 2021/9/7.
//

#include "exam2.h"

QueueNode *Queue::get_tail() {
    unique_lock<shared_mutex> lock(x);
    return tail;
}

bool Queue::insert_head(QueueNode *node) {
    unique_lock<shared_mutex> lock(x);
    // 处理节点插入 head 和 tail特殊情况判断 size++等情况 时间原因不写了
}

int Queue::get_size() const{
    shared_lock<shared_mutex> lock(x);
    return m_size;
}
