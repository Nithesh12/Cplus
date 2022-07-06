#include<iostream>
using namespace  std;
#define size 5
class stack
{
    int box[size];
    int pos;
    public :
    void init();
    void display();
    void push();
    int pop();
};
void stack::init(){
    pos=0;
}
void stack::push(){
    int i;
    if(pos==size){
        cout<<"Stack overflow\n";
        return;
    }
    cout<<"Enter the element\n";
    cin>>i;
    box[pos]=i;
    pos++;
}
int stack::pop(){
    if(pos==0){
        cout<<"Stack underflow\n";
        return 1;
    }
    pos--;
    cout<<"Popped element is "<<box[pos];
    return 0;
}
void stack::display(){
if(pos==0){
    cout<<"stack is empty\n";
    return;
}
for(int i=0;i<pos;i++){
    cout<<box[i]<<"\n";
}
}
int main(){
    int ch,i;
    stack s;
    s.init();
    while(1){
        cout<<"\n 1.push \n 2.pop \n 3.display \n";
        cin>>ch;
        switch (ch)
        {
        case 1:s.push();
            break;
        case 2:s.pop();
            break;
        case 3:s.display();
            break;
        default:
            printf("invlaid option");
        }
    }
}
