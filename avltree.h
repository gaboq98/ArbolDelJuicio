//
// Created by gaboq on 26/10/2017.
//
#include "Lista.h"

#ifndef UNTITLED_AVLTREE_H
#define UNTITLED_AVLTREE_H

struct  TreeNode {
    Persona *ptHumano;
    int hgt;
    TreeNode *lson;
    TreeNode *rson;
    int freq;

};

struct AVLtree {

    TreeNode *root;

    AVLtree();

    TreeNode *findpri(TreeNode *node, Persona *x);

    void insert(Persona *x);

    void insertpri(TreeNode *&node, Persona *x);

    void DoubleRotateRL(TreeNode *&k3);

    void DoubleRotateLR(TreeNode *&k3);

    void SingRotateRight(TreeNode *&k2);

    void SingRotateLeft(TreeNode *&k2);

    int Max(int cmpa, int cmpb);

    int height(TreeNode *node);

    void Deletepri(TreeNode *&node, Persona *x);

    TreeNode *find(Persona *x);

    Persona *buscarPersona(TreeNode *raiz);

};


#endif //UNTITLED_AVLTREE_H
