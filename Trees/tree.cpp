#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct snowflake_node
{
    int snowflake[6];
    struct  snowflake_node *node;
    
}snowflake_node;

typedef struct node{
    int candy;
     node *left;
    node *right;
} node;
node *new_house(int candy){
    node *house = new node;
    if(house==nullptr){
        cerr<<"memory not allocated---house"<<endl;
        exit(1);
    }
    house->candy=candy;
    house->left=nullptr;
    house->right=nullptr;
    return house;


}
 node *new_nonehouse(node *left, node *right){
    node *nonhouse = new node;
    if(nonhouse==nullptr){
        cerr<<"memory not allocated--nonhouse"<<endl;
        exit(1);
    }
    nonhouse->left=left;
    nonhouse->right=right;
    return nonhouse;
 }
 int main(){
 node *four = new_house(4);
 node *five = new_house(5);
 node *B = new_nonehouse(four,five);
 cout<<B->left->candy;
    return 0;
 }