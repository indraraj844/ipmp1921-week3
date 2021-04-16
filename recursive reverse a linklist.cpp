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

void reverse(struct node* temp)
{if(!temp)return;
reverse(temp->next);
cout<<temp->data<<" ";

}
    int main()
    {
    push(1);
    push(2);
    push(3);
    push(4);
    print_list();
    cout<<endl;
    reverse(root);
    return 0;
    }