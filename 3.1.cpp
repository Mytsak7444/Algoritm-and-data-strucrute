#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

class STACK{
	private:
		int pushEl, size;
		int* stack;
		bool empty;
	public:
		STACK();
		~STACK();
		void Print();
		void MAKENULL();
		void PUSH();
		void POP();
		int TOP();
		int EMPTY();
		
		
		
};
STACK::STACK(){
	
	pushEl = 0;
	size = 10;
	stack = new int [size];
	for (int i=0; i<size; i++){
		stack[i]= i+5;
	}
	empty = true;
}
STACK::~STACK(){
	delete []stack;
}
void STACK::Print(){
	for (int i=0; i<size; i++){
		cout<<stack[i]<<" ";
	}
}

void STACK::MAKENULL(){
	for (int i=0; i<size; i++){
		stack[i]=0;
	}
	cout<<stack[0];
}

void STACK::PUSH(){
	cout<<"Enter new element: ";
	cin>>pushEl;
	for (int i = size; i > 0; --i){
		stack[i] = stack[i-1];
	}
	size++;
	stack[0]=pushEl;
}

void STACK::POP(){
	for(int i=0; i<size; i++){
		stack[i]=stack[i+1];
	}
	size--;
}
int STACK::TOP(){
	cout<<"TOP: "<<stack[0];
	return stack[0];
}
int STACK::EMPTY(){
	if(size>0){
		cout<<"Stack isn't empty";
		return false;
	}
	else{
		cout<<"Stack is empty";
		return true;
	}
}

int main(){
	STACK s;
	
	s.PUSH();
	s.Print();
	return 0;
}
