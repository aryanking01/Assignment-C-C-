
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

void area_circle(){
    float radius;
    cout<<"Please Enter the Radius of the Circle: ";
    cin>>radius;
    float area;
    area=M_PI*radius*radius;
    cout<<"Area of the Circle is : "<<area;

}

void area_triangle(){
    float base;
    float height;
    cout<<"Please Enter the Length of the base of triangle: ";
    cin>>base;
    cout<<"Please Enter the Length of the height of triangle: ";
    cin>>height;
    float area;
    area=0.5*base*height;
    cout<<"Area of the Triangle is : "<<area;
}

void area_rectangle(){
    float area;
    float length;
    float breadth;
    cout<<"Please Enter the Length of the triangle: ";
    cin>>length;
    cout<<"Please Enter the Breadth of the triangle: ";
    cin>>breadth;
    area=length*breadth;
    cout<<"Area of the Rectangle is : "<<area;

}


int main()
{

    string shape;
    cout<<"Please Enter the Shape of the object you want to calculate the area of: ";
    cin>>shape;

    cout<< "The shape you entered is a: "<<shape<<endl;
    if(shape=="CIRCLE"||shape=="circle"){

        area_circle();
    }
    else if(shape=="TRIANGLE"||shape=="triangle"){
        area_triangle();

    }
    else if(shape=="RECTANGLE"||shape=="rectangle"){
        area_rectangle();
    }
    else{
            cout<<"Invalid Shape entered. Please enter the shape in CAPITAL LETTERS."<<endl;
            cout<<"Please Enter the Shape of the object you want to calculate the area of: ";
        cin>>shape;

        cout<< "The shape you entered is: "<<shape;
        if(shape=="CIRCLE"||shape=="circle"){

            area_circle();
        }
        else if(shape=="TRIANGLE"||shape=="triangle"){
            area_triangle();

        }
        else if(shape=="RECTANGLE"||shape=="rectangle"){
            area_rectangle();
        }
        else{
            cout<<"Wrong input received."<<endl;
            return 1;
        }

    }
    cout<<" sq. units."<<endl<<endl<<endl;
    return 0;
}
