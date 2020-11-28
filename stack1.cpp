#include <iostream>

using namespace std;

class Stack{
    
    public:
   
     int a[1000];
    
    int top=-1;
    void push(int s){
        if(top>=1000){
            
            cout<<"full";
            
        }
        else
        
        top+=1;
        a[top]=s;
        
            
        
    }
    
    void disp(){
        for(int i=0;i<=top;i++){
            cout<<a[i]<<endl;
        } 
    }
    
    int pop(){
        int e;
        if(top<0){
            cout<<"stack empty";
            
        }
        else{
        e=a[top];
        top--;
        cout<<e<<"popped";
        }
        
        
        
    }
    
    
};

int main()
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.disp();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.disp();
}
