/*************************************************************************
	> File Name: clist.h
	> Author: 
	> Mail: 
	> Created Time: Wed 29 Nov 2017 11:09:41 AM UTC
 ************************************************************************/

#ifndef _CLIST_H
#define _CLIST_H

struct Node;

typedef struct Node Node;
typedef Node List;
typedef int DataType;

List* createList();
int insert(List* l, DataType data);
int erase(List* l, DataType data);
int set(List* l, DataType o, DataType n);
int find(List* l, DataType data);

struct Node{
    DataType data_;
    Node* next_;
};

#endif
