#include <iostream>

using namespace std;

class Movable {
public :
    virtual int moveUp () =0 ;
    virtual int moveDown () =0 ;
    virtual int moveLeft () =0 ;
    virtual int moveRight () =0 ;
};

class MovablePoint : public Movable {
private :
    int x;
    int y;
    int xSpeed;
    int ySpeed;
public:
    //default constructor
    MovablePoint (){
    x=0;
    y=0;
    xSpeed =0;
    ySpeed =0;
    }


    //parameterized constructor
      MovablePoint (int X , int Y , int xs , int ys){
      x=X;
      y=Y;
      xSpeed =xs;
      ySpeed =ys;
       }

    //methods
    //overriding

    int moveUp(){
    return y=y+ySpeed;
    }

    int moveDown (){
    return y=y-ySpeed;
    }

    int moveLeft(){
    return x=x-xSpeed;
    }

    int moveRight(){
    return x=x+xSpeed ;
    }

    void display_info(){
    cout<<"( "<<x<<" , "<<y<<" ) " <<endl;
    }
};

int main()
{
    MovablePoint m(5, 5, 2, 3);
m.moveUp(); // x = 5, y = 8
m.moveLeft(); // x = 3, y = 8
m.display_info();
    return 0;
}
