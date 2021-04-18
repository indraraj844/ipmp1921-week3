    #include<bits/stdc++.h>
    using namespace std;

    struct node{
        int data;
        node* next;
    };
    struct node* root=NULL;

  void push(int data)
  {
      node* temp=new node();
      temp->data=data;
      temp->next=root;

      root=temp;
  }
    void print_list()
    {
        if(!root)
        {
            cout<<" no element ";
            return;
        }
        struct node* temp=root;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    node* reverse(struct node* temp,int k)
    {
        if(!temp)return NULL;
        node* curr=temp;
        node* prev=NULL;
        node* next=NULL;
        int count=0;
        while(count<k &&curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }

        if(temp)
        {
            temp->next=curr;
        }
       count=1;
        while(count<k &&curr)
        {
            curr=curr->next;
            count++;
        }
        if(curr)
        curr->next=reverse(curr->next,k);

        return prev;
       
    }

    int main()
    {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);

    print_list();
    cout<<endl;
    root=reverse(root,2);
    print_list();
    return 0;
    }