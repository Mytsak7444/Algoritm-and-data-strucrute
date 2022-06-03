#include <iostream>
#include <string>
using namespace std;

class QUEUE{
	private:
		int size, pushEl, first;
		int* queue;
		bool empty;
	public:
		QUEUE();
		~QUEUE();
		
		void Print();
		void MAKENULL();
		int FRONT();
		int EMPTY();
		void ENQUEUE();
		void DEQUEUE();
		
};

QUEUE::QUEUE(){
	size = 5;
	pushEl = 0;
	first = 0;
	queue = new int[size];
	for(int i=0; i<size; i++){
		queue[i]=(i*2)+1;
	}
	empty = false;
}
QUEUE::~QUEUE(){
	delete []queue;
}
void QUEUE:: Print(){
	for(int i=0; i<size;i++){
		cout<<queue[i]<<"  ";
	}
}
void QUEUE::MAKENULL(){
	for(int i=0;i<size; i++){
		queue[i]=0;
	}
	cout<<queue[0];
}

int QUEUE::FRONT(){
	cout<<queue[0];
	return queue[0];
}

int QUEUE::EMPTY(){
	if (size>0){
		cout<<"False"<<endl;
		return false;
	}
	else{
		cout<<"True"<<endl;
		return true;
	}
}

void QUEUE::DEQUEUE(){
	for(int i=0; i<size; i++){
		queue[i]=queue[i+1];
	}
	size--;
}
void QUEUE::ENQUEUE(){
	cout<<"Enter the element:";
	cin>>pushEl;
	queue[size]=pushEl;
	size++;
}
int main(){
	QUEUE q;
	
	
	q.ENQUEUE();
	q.Print();
}
