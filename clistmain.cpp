#include "clist.h"
#include <iostream>


int main()
{
    clist object;
    object.build();		//builds a circular LL
    object.display();	//displays the list
    
    //PLEASE PUT YOUR CODE HERE to call the function assigned
    node* rear = object.getRear();

    object.test(rear->next);

    cout << endl;
    
    object.display(); //resulting list after your function call!
    
    return 0;
}


