// head->first->second->third->fourth->NULL
// temp->

Node* removeDuplicates(Node *head) 
{
    unordered_map <int,int> mp;
    
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL)
    {
        int data=temp->data;
        if(mp[data]!=0)
        {
            prev->next=temp->next;
            temp=prev->next;
        }
        else 
        {
            mp[data]++;
            prev=temp;
            temp=temp->next;
        }
    }
    return head;
}