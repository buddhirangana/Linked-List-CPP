#include <iostream>

using namespace std;

int main(){
    class node{
    public:
        int key;
        int data;
        node * next;

        node()
        {
            key=0;
            data=0;
            next=NULL;
        }

        node(int k, int d)
        {
            key=k;
            data=d;
        }

    };

    class SlinglyLinkList{
    public:
        node * head;

    SlinglyLinkList(){
        head = NULL;
    }

    SlinglyLinkList(node * n){
        head=n;
    }

    node * nodeExists(int k){
        node * temp = NULL;
        node * ptr = head;

        while(ptr!=Null){
            if(ptr->key==k){
                temp=ptr;
            }
            ptr=ptr->next;
        }
        return temp;

    }

    };

    return 0;
}
