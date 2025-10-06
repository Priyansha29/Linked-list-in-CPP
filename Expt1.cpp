//Priyansha
//24070123079
//ENTC-A3

//Program-1
#include<iostream>
using namespace std;

class Node{
    public:

    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

int main(){
    Node* n=new Node(20);
    cout<<n->val<<" "<<n->next<<endl;
    return 0;
}


/*==========OUTPUTS==========
20 0
*/
