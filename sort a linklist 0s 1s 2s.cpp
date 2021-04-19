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
    
    void sorten()
    {
        if(!root)return;
        node* temp=root;
        int count0,count1,count;
        while(temp)
        {
            if(temp->data==0)count0++;
            else if(temp->data==1)count1++;
        }
        temp=root;
        count=0;
        while(count<count0)
        {
            temp->data=0;
            temp=temp->next;
            count++;
        }
        count=0;
        while(count<count1)
        {
            temp->data=1;
            temp=temp->next;
            count++;
        }
        while(temp)
        {
            temp->data=2;
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
    sortn();
    print_list();
    return 0;
    }