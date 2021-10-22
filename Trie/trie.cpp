#include<bits/stdc++.h>
using namespace std;

struct Trienode
{
    Trienode* child[256];
    bool isend;
    Trienode()
    {
        for(int i=0;i<256;i++)
        {
            child[i]=NULL;
        }
        isend=false;
    }
};

void insert(Trienode* root,string key)
{
    Trienode* curr=root;
    for(int i=0;i<key.length();i++)
    {
        if(curr->child[key[i]]==NULL)
        {
            curr->child[key[i]]=new Trienode();
        }
        curr=curr->child[key[i]];
    }
    curr->isend=true;
}

bool search(Trienode* root,string key)
{
    Trienode *curr=root;
    for(int i=0;i<key.length();i++)
    {
        if(curr->child[key[i]]==NULL)
        {
            return false;
        }
        curr = curr->child[key[i]];
    }
    return curr->isend;
}

// i is initially 0
Trienode* delkey(Trienode* root,string key,int i)
{
    if(root==NULL)return NULL;
    if(i==key.length())
    {
        root->isend=false;
        if(isempty(root)==true)
        {
            delete(root);
            root=NULL;
        }
        return root;
    }
    int index=key[i];
    root->child[index]=delkey(root->child[index],key,i+1);
    if(isempty(root) && root->isend==false)
    {
        delete(root);
        root=NULL;
    }
    return root;
}

bool isempty(Trienode* root)
{
    for(int i=0;i<256;i++)
    {
        if(root->child[i]!=NULL)return false;
    }
    return true;
}

int main()
{
    Trienode *root=new Trienode();
    insert(root,"geek");
    insert(root,"geeks");
    insert(root,"bad");
    insert(root,"bat");
    insert(root,"zoo");

    if(search(root,"bad"))
    {
        return true;
    }
    
}