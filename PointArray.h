#ifndef ARRAYPOINT_H 
#define ARRAYPOINT_H 
#include <Point.h> 
 
 
class ArrayPoint 
{ 
    private: 
        Point *p; 
        int mysize; 
    public: 
        ArrayPoint(); 
        ArrayPoint(const Point points[], const int len); 
        ArrayPoint(ArrayPoint &pv); 
        void mypush_back(const Point &p); 
        void myinsert(const int position, const Point &p); 
        void myremove(const int position); 
        const int getSize()const; 
        void myclear(); 
        void printArrayPoint(); 

 
}; 

#endif // ARRAYPOINT_H 
