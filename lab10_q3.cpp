/*Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). 
Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. 
Compare the areas and perimeter of the those rectangles.

                    */
                    
                    
#include <iostream>

using namespace std;

class rectangle {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box

		void getLength(void);  // to get the length
		void getBreadth(void); // to get the breadth
		double getArea(void);  //to get area
		double getPerimeter(void);// to get perimeter

};
void rectangle::getLength(void){
	double len;
	cout<<"enter your length-"<<endl;
	cin>>len;
	length=len;
}
void rectangle::getBreadth(void){
	double bre;
	cout<<"enter your breadth-"<<endl;
	cin>>bre;
	breadth=bre;
}
double rectangle::getArea(void){
	return length*breadth;
}
double rectangle::getPerimeter(void){
	return 2*(length+breadth);
}


int main() {
   rectangle rect1; //declare rect1 of type rectangle
   rectangle rect2; //declare rect2 of type rectangle
   double area1 = 0.0;// Store the volume of a box here
   double perimeter1 = 0.0;// Store the volume of a box here
   double area2 = 0.0;// Store the volume of a box here
   double perimeter2 = 0.0;// Store the volume of a box here
   // rect1 specification
   cout<<"enter the specifications of first rectangle"<<endl;
	rect1.getLength();
	rect1.getBreadth();

   // rect2 specification
   cout<<"enter the specifications of second rectangle"<<endl;
	rect2.getLength();
	rect2.getBreadth();
   
   // area of rect1
   area1 = rect1.getArea();
   cout << "area of rectangle 1 is= " << area1 <<endl;

   // perimeter of rect1
   perimeter1 = rect1.getPerimeter();
   cout << "perimeter of rectangle 1 is=: " << perimeter1 <<endl;


	// area of rect2
   area2 = rect2.getArea();
   cout << "area of rectangle 2 is= " << area2 <<endl;

   // perimeter of rect2
   perimeter2 = rect2.getPerimeter();
   cout << "perimeter of rectangle 2 is= " << perimeter2 <<endl;
   
   //comparing
   
   if(area1>area2)
   cout<<"The area of rectangle 1 is more than rectangle 2"<<endl;
   else if(area1<area2)
   cout<<"The area of rectangle 1 is less than rectangle 2 "<<endl;
   else
   cout<<"The area of rectangle 1 is same as rectangle 2 "<<endl;
   
   
    if(perimeter1>perimeter2)
   cout<<"The perimeter of rectangle 1 is more than rectangle 2"<<endl;
   else if(perimeter1<perimeter2)
   cout<<"The perimeter of rectangle 1 is less than rectangle 2 "<<endl;
   else
   cout<<"The perimeter of rectangle 1 is same as rectangle 2 "<<endl;
   


   return 0;
}