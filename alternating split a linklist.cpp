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
    void print_list(struct node* head)
    {
        if(!head)
        {
            cout<<" no element ";
            return;
        }
        struct node* temp=head;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void  segrateUtil(node* head,node** odd,node** even, bool b)
    {
        if(!head)
        {
            *odd=NULL;
            *even=NULL;
            return;
        }
        else
        {
            if(b)
            {
                b=false;
                *odd=head;
                segrateUtil(head->next,&(*odd)->next,&(*even),b);
            }
            else
            {
                b=true;
                *even=head;
                segrateUtil(head->next,&(*odd),&(*even)->next,b);
            }
        }
    }
    void segrate_odd_even()
    {
        if(!root)return;
        node* odd;
        node* even;
        segrateUtil(root,&odd,&even,true);
        cout<<" odd list:";
        print_list(odd);
        cout<<endl<<" even list:";
        print_list(even);

    }
    int main()
    {
     push(2);
    push(1);
    push(4);
    push(3);
    push(6);
    push(8);
    segrate_odd_even();
    return 0;
    }