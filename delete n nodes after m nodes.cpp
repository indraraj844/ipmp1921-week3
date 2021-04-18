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
    void delete_n(int n,int m)
    {
        if(!root)return;
        node* temp=root;
        int count=1;
        while(count<m && temp)
        {
            temp=temp->next;
            count++;
        }
        node* curr=temp;
        while(count<=n+m&&temp)
        {
            count++;
            temp=temp->next;
        }
        if(!temp)
        curr->next=NULL;
        else
        curr->next=temp;
    }


    int main()
    {
    push(1);
    push(2);
    push(3);
    push(4);
     push(5);
    push(6);
    delete_n(2,2);
    print_list();
    return 0;
    }