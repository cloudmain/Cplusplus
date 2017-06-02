#include "ArrayPoint.h"  
#include <iostream> 

 
ArrayPoint::ArrayPoint() 
{ 
    mysize = 0; 
    p = new Point[mysize]; 
}

 
ArrayPoint::ArrayPoint(const Point points[], const int len) 
{ 
    mysize = len; 
    p = new Point[mysize]; 
    for(int i = 0; i<mysize; i++) 
        p[i] = points[i]; 
} 

 
ArrayPoint::ArrayPoint(ArrayPoint &pv) 
{ 
    mysize = pv.mysize; 
    p = new Point[mysize]; 
    for(int i = 0; i<mysize;i++) 
        p[i] = pv.p[i]; 
} 
 
 
void ArrayPoint::mypush_back(const Point &p) 
{ 
    Point *t; 
    mysize = mysize +1; 
    t = new Point[mysize]; 
    this ->p[mysize-1]=p; 
} 

 
void ArrayPoint::myinsert(const int position, const Point &po) 
{ 
    if(position>mysize && position<0) 
        cout << ">>>>Ingrese una posición correcta<<<<" << endl; 
    else 
    { 
        Point *t; 
        mysize = mysize +1; 
        t = new Point[mysize]; 
        for(int i=position; i <mysize;i++) 
            p[position+1]=p[position]; 
        p[position] = po; 
    } 
} 

 
void ArrayPoint::myremove(const int position) 
{ 
    if(position>mysize && position<0) 
        cout << ">>>>Ingrese una posición correcta<<<<" << endl; 
    else 
    { 
        Point *t; 
        t = new Point[mysize-1]; 
        for(int i=position;i<mysize-1;i++) 
            p[i] = p[i+1]; 
        mysize = mysize-1; 
    } 
} 

 
const int ArrayPoint::getSize()const 
{ 
    return mysize; 
} 

 
void ArrayPoint::myclear() 
{ 
    delete[] p; 
    mysize = 0; 
} 

 
void ArrayPoint::printArrayPoint() 
{ 
    cout << "El array es :"<<endl; 
    for(int i=0; i<mysize;i++) 
        p[i].print_Point(); 
} 
