/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
constexpr float PI = 3.14;
class Circle{
public:
    //Constructor to initialize radius
    Circle(float r){
        radius = r;
    }
    
    //Function to calculate and return area
    float calcArea() const{
        return PI*radius*radius; 
    }
    
    //Function to calculate and return perimeter
    float calcPer() const{
        return 2*PI*radius;
    }
    
    //Function to get the radius
    float getRadius() const{
        return radius;
    }
    
    //Function to set the radius
    void setRadius(float r){
        radius = r;
    }
private:
    float radius;
    
};

int main(){
    float r = 0, area = 0, peri = 0;
    
    //Enter radius of the circle
    std::cout << "Enter radius: ";
    std::cin >> r;
    
    //Create class object
    Circle circle(r);
    
    //Call member function area and store the value in area
    area = circle.calcArea();
    
    //Call member function perimeter and store the value in perimeter
    peri = circle.calcPer();
    
    //Print the area and perimeter
    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimeter: " << peri << std::endl;
    
    
    return 0;
    
    
    
}
