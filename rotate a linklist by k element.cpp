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
    void rotate(int k)
    {
        if(!root||!k)return;
         node* temp=root;
         int count=1;
         while(count<k&&temp)
         {
             temp=temp->next;
             count++;
         }
         if(!temp)return;
         node* kth_node=temp;
         while(temp->next)
            temp=temp->next;

         temp->next=root;
         root=kth_node->next;
         kth_node->next=NULL;
       
    }

    int main()
    {
    push(1);
    push(2);
    push(3);
    push(4);
    print_list();
    cout<<endl;
    rotate(2);
    print_list();
    return 0;
    }