#ifndef STACK_HPP
#define STACK_HPP


template<class T>
class Stack
{
    protected:
        T *aptr;
        int arraySize;
        int top;

    public:
        Stack();
        Stack(int);


        int size();
		bool isFull();
        bool isNull();
        bool isEmpty();  
        void push(T );
       	T& pop();


       	
       	class PushError {};
       	class PopError {};


};

template<class T>
Stack<T>::Stack()
{
	aptr = nullptr;
	arraySize = 0;
	top = -1;
}

template<class T>
Stack<T>::Stack(int N)
        {
            aptr = new T[N];
			arraySize = N;
            top = -1;

        }
        
    
template<class T>
bool Stack<T>::isNull()
        {
            return (aptr == nullptr);
        }
template<class T>
bool Stack<T>::isFull()
        {   
            
            return (top == arraySize - 1);
            
        }
    
        
template<class T>
bool Stack<T>::isEmpty()
        {
            return (top == -1);
        }
        
        
        
template<class T>
void Stack<T>::push(T data)
        {
        	
            if(isFull())
                throw PushError();
            aptr[++top] = data;
                                  
            
        }

        
template<class T>
int Stack<T>::size()
{
    return arraySize;   
}      
        
template<class T>
T& Stack<T>::pop()
        {
           
            if(isEmpty())
            	throw PopError();
            	
            return aptr[top--];
                    
    	}

#endif

/*
template<class T, int N>
class Stack
{
    private:
        T *aptr;
        int arraySize;
        int top;

    public:
        Stack();
       
		bool isFull();
        bool isEmpty();  
        void push(T );
       	T pop();
       	
       	class PushError {};
       	class PopError {};
};

template<class T, int N>
Stack<T, N>::Stack()
        {
            aptr = new T[N];

            for(auto a: aptr)
                a = 0;

            top = -1;

        }

template<class T, int N>
bool Stack<T, N>::isFull()
        {   
            bool f;
            f = top == N - 1 ? true : false;
            return f;
        }
        
        
        
template<class T, int N>
bool Stack<T, N>::isEmpty()
        {
            bool f;
            f = top == -1 ? true : false;
            return f;
        }
        
        
        
template<class T, int N>
void Stack<T, N>::push(T data)
        {
        	cout<<"Pushing...\n";
        	
            if(isFull())
                throw PushError();
                
            *(aptr + top) = data;
            top++;        
                
            
        }
        
        
        
template<class T, int N>
T Stack<T, N>::pop()
        {
            T item;
            if(!isEmpty())
            {
               item = *(aptr + top);
               top--;
            }
            
                return item;
                
    }


*/
