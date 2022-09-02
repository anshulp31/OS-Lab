#include<iostream>
using namespace std;

class Queue{
    private:
    int que[100],f=-1,r=-1;
    public:

    bool isfull()
    {
        return (r==99)?true:false;
    }
    void enqueue(int val)
    {
        if(isfull())
        cout<<"overflow"<<endl;
        else
        {
            if(f==-1 and r==-1)
            f++;

            r++;
            que[r]=val;
        }
    }


    bool isempty()
    {
        return (f>=r)?true:false;
    }
    int dequeue()
    {
        if(isempty()){
        cout<<"underflow"<<endl;
        return -1;
        }
        else{
            int val=que[r];
            r--;
            return val;
        }
    }
    void display()
    {
        for(int i=f;i<=r;i++)
        cout<<que[i]<<endl;
    }
};
int main()
{
      Queue obj;


      cout<<"1 for Enqueue"<<endl;
      cout<<"2 for Dequeue"<<endl;
      cout<<"3 for display"<<endl;
      cout<<"4 for exit"<<endl;
      int ch;
      do{
        cout<<"your choice"<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:
         {
            cout<<"enter value"<<endl;
            int val;
            cin>>val;
            obj.enqueue(val);
            break;
         }
        case 2:
             cout<<obj.dequeue();
             break;
        case 3:
            obj.display();
            break;
        case 4:
            break;
        
          default:
            cout<<"unvalid choice is entered"<<endl;
        }
      }
        while(ch!=4);
        {
            cout<<"code is terminated"<<endl;
        }

      return 0;
}