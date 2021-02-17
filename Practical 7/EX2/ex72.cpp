#include <iostream>
#include <string>
#include <vector> 

using namespace std;

struct FullStackException : public exception
{
	const char * what () const throw ()
    {
    	return "This stack is full.";
    }
};

//create EmptyStackException
struct EmptyStackException : public exception
{
	const char * what () const throw ()
    {
    	return "This stack is empty.";
    }
};


template <typename T>
class StackI
{
  public:
    virtual void push(T t) = 0;
    virtual void pop() = 0;
    virtual T top() =0;
    virtual bool isEmpty() =0;
    virtual void print()=0;
};

//define a class Stack that implements StackI interface 
template<typename T>
class Stack: 
public StackI<T> 
{
  public:
    int num_elements; // recording the number of elements in the stack
    vector<T> stack;
    
    //constructor that creates a stack with 20 elements and one with n elements
    Stack(): stack(20), num_elements(0) {};
    Stack(int n): stack(n), num_elements(0) {};

    void push(T t) 
    {
      // if this stack is full;
      if(num_elements == 20)
      {
        throw FullStackException();
      }
      //if not full; 
      else 
      {
        stack.at(num_elements) = t;
        num_elements++;
      }
    }

    void pop() 
    {
      //if stack is empty;
      if(num_elements == 0)
      {
        throw EmptyStackException();
      }
      //if not empty, remove the last element.
      else
      {
        stack.pop_back();
        num_elements--;
      }

    }

    T top() 
    {
      //if there are no element in the list;
      if(num_elements == 0)
      {
        throw EmptyStackException();
      }
      //if the stack is not empty return the last element
      return stack.at(num_elements-1);
      
    }

    bool isEmpty()
    {
      if(num_elements == 0)
      {
        return true;
      }
      else
      {
        return false;
      }
    }

    //print out all the elements of this stack
    void print()
    {
      cout << '[';
      if(num_elements > 0)
      {
        for(int i = 0; i < num_elements; i++) 
        {
          cout << stack.at(i) << ' ' ;
        }
      }
      cout << ']' << endl;
    }
};

int main()
{

  //create two stacks one with 20 elements and one with 30
  Stack<int> stack1;
  Stack<int> stack2(30);
  stack2.print();
  
  //try removing element from an empty stack
  try 
  {
    stack2.pop();
  }
  catch (exception &e) {
    cout << e.what() << endl;
  }

  //try to push more than 20 elements 
  try 
  {
    for (int i = 0; i < 19; i++) 
    {
      stack1.push(1);
    }
    stack1.push(2);
    stack1.push(2);
  }
  catch (exception &e) {
    cout << e.what() << endl;
  }
  
  stack1.print();
  try {
    stack1.pop();
  }
  catch (exception &e) {
    cout << e.what() << endl;
  }
  stack1.print();

  //getting the top value of a non-empty stack
  try {
    int top = stack1.top();
    cout << "Top value is " << top << endl; 
  }
  catch (exception &e) {
    cout << e.what() << endl;
  }
  return 0;
}
