#include<iostream>


using namespace std;

//implementing the tree with insert,delete,print,search


class node
{   public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

class tree{
    public:
    node* root;
    tree(){
        root=NULL;
    }
    void insert(int data){
        node* newnode= new node(data);
        if(root=NULL){
            root=newnode;
            return;
        }
        else{
            node* temp=root;
            while(temp!=NULL){
                if(temp->left=NULL){
                    temp->left=newnode;
                    return;
                }
                else if(temp->right=NULL){
                    temp->right=newnode;
                    return;
                }
                else{
                    temp=temp->left;
                }
            }
        }

    }
/*    void printtree(node* root){
        if(root=NULL){
            return;
        }
        printtree(root->left);
        cout<<root->data<<" ";
        printtree(root->right);
    }
*/

};

int main(){
    tree t;
    t.insert(10);
    t.insert(20);
    t.insert(5);
    t.insert(15);
    t.insert(25);
    t.insert(50);
    //t.printtree(t.root);

}

