M-1
  USING TWO STACK
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
    void segrate_odd_even()
    {
        if(!root)return;
        stack<int>odd;
        stack<int>even;
        node* temp=root;
        while(temp)
        {
            if(temp->data%2)
            odd.push(temp->data);
            else
            even.push(temp->data);
        }
         temp=root;
         while(!even.empty())
         {
             temp->data=even.top();
             even.pop();
             temp=temp->next;
         }
          while(!odd.empty())
         {
             temp->data=odd.top();
             odd.pop();
             temp=temp->next;
         }

    }
    
    

    int main()
    {
     push(2);
    push(1);
    push(0);
    push(2);
    push(1);
    push(0);
    segrate_odd_even();
    print_list();
    return 0;
    }

M-2
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
    void segrate_odd_even(struct node* root)
    {
        if(!root)
        {
            cout<<" no test case"<<endl;
            return;
        }
       node* curr=root;
       node* end=root;
       node* new_end=NULL;
       node* prev=NULL;
       while(end->next)
         end=end->next;
        
        new_end=end;
        while(curr->data%2 &&curr!=end)
        {
            cout<<"jai1"<<" ";
            new_end->next=curr;
            curr=curr->next;
            new_end->next->next=NULL;
            new_end=new_end->next;
        }
        if(!curr->data%2)
        {cout<<"jai2"<<" ";
            root=curr;
            while(curr!=end)
            {
                if(!curr->data%2 &&curr!=end)
                {
                    prev=curr;
                    curr=curr->next;
                }
                if(curr->data%2)
                {
                    prev->next=curr->next;
                    new_end->next=curr;
                    curr->next=NULL;
                    new_end=new_end->next;
                    curr=prev->next;
                }

            }
        }
        else prev = curr; 
    if (new_end != end && (end->data) % 2 != 0) 
    { 
        prev->next = end->next; 
        end->next = NULL; 
        new_end->next = end; 
    } 
    return; 
    }
    int main()
    {
     push(2);
    push(1);
    push(4);
    push(3);
    push(6);
    push(8);
    segrate_odd_even(root);
    print_list(root);
    return 0;
    }
M-3
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
    void  segrateUtil(node* head,node** odd,node** even)
    {
        if(!head)
        {
            *odd=NULL;
            *even=NULL;
            return;
        }
        else
        {
            if(head->data%2)
            {
                *odd=head;
                segrateUtil(head->next,&(*odd)->next,&(*even));
            }
            else
            {
                *even=head;
                segrateUtil(head->next,&(*odd),&(*even)->next);
            }
        }
    }
    void segrate_odd_even()
    {
        if(!root)return;
        node* odd;
        node* even;
        segrateUtil(root,&odd,&even);
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
M-4 
  SIMILAR WAY M3 USING 4 POINTER 
  even start,even end,odd start,odd end;
thankyou
