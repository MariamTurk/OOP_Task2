#include <iostream>

using namespace std;

class Vehicle
{
protected :
    string Model;
    string Reg_number;
    int Speed;
    double Fule_capacity;
    double Fule_consumption;
public:

    //default constructor
    Vehicle (){
        Model = "";
        Reg_number = "";
        Speed=0;
        Fule_capacity =0.0;
        Fule_consumption =0.0;
    }

    //parameterized constructor
    Vehicle(string m , string r , int s , double fca , double fco){
        Model = m;
        Reg_number = r;
        Speed=s;
        Fule_capacity =fca;
        Fule_consumption =fco;
    }


    //setters
    void set_model (string m){
        Model = m;
    }

    void set_reg_number (string r){
    Reg_number = r;
    }

    void set_speed (int s){
    Speed = s;
    }

    void set_Fule_capacity (double fca){
    Fule_capacity = fca;
    }

    void set_Fule_consumption (double fco){
    Fule_consumption = fco;
    }

    //getters

    string get_model (){
    return Model ;
    }

    string get_reg_number (){
    return Reg_number;
    }

    int get_speed (){
    return Speed;
    }

    double get_Fule_capacity (){
    return Fule_capacity;
    }

    double get_Fule_consumption (){
    return Fule_consumption;
    }

    //methods

    double fuelNeeded(int dis) {
        double fn = 0;
        fn = Fule_consumption * dis ;
        return fn;
    }

    double distanceCovered(int hours) {
        double dis = 0 ;
        dis = Speed * hours;
        return dis;
    }

    void display () {
    cout<<"Model : "<<Model<<endl;
    cout<<"Reg_number : "<<Reg_number<<endl;
    cout<<"Speed : "<<Speed<<endl;
    cout<<"Fule_capacity : "<<Fule_capacity<<endl;
    cout<<"Fule_consumption : "<<Fule_consumption<<endl;
    }
};


class Truck : public Vehicle {
private :
    int cargo_weight_limit ;

public:

    //Default constructor
    Truck (){
    cargo_weight_limit =0;
    }

    //parameterized constructor
    Truck (int nop){
    cargo_weight_limit =nop;
    }


    Truck(string m , string r , int s , double fca , double fco ,int nop) :Vehicle(m,r,s,fca,fco){
        cargo_weight_limit =nop ;
    }

    //setter
    void set_cargo_weight_limit (int nop){
    cargo_weight_limit =nop;
    }

    //getter
    int get_cargo_weight_limit (){
    return cargo_weight_limit ;
    }


    //method
    void display(){
        Vehicle :: display() ;
        cout<<"Cargo weight limit : "<< cargo_weight_limit<<endl;
    }
};

class Bus : public Vehicle {
private :
    int Number_of_passengers ;

public :
    //Default constructor
    Bus (){
    Number_of_passengers =0;
    }

    //parameterized constructor
    Bus(int nop){
    Number_of_passengers = nop ;
    }

    Bus(string m , string r , int s , double fca , double fco ,int nop) :Vehicle(m,r,s,fca,fco){
        Number_of_passengers =nop ;
    }

    //setter
    void set_Number_of_passengers (int nop){
    Number_of_passengers = nop;
    }

    //getter
    int get_Number_of_passengers (){
    return Number_of_passengers ;
    }

    //method
    void display () {
    Vehicle :: display () ;
    cout<<"Number of passengers : "<<endl;
    }


};
int main()
{
    Vehicle v ("BMW" ,"2345.ps" ,1000 , 6.5 , 3.3);
    cout<<"**Information for "<<v.get_model()<<"**"<<endl;
    v.display();
    cout << "fuelNeeded : "<<v.fuelNeeded(1000)<<endl;
    cout << "distance Covered : "<<v.distanceCovered(4)<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------------"<<endl;
//-----------------------------------------------------------------
    Truck t("Truck 101" ,"345.t.ps" ,300 ,9.8 ,5.2,500);
    cout<<"**Information for "<<t.get_model()<<"**"<<endl;
    t.display();
    cout << "fuelNeeded : "<<t.fuelNeeded(1500)<<endl;
    cout << "distance Covered : "<<t.distanceCovered(12)<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------------"<<endl;
//-----------------------------------------------------------------
    Bus b ("Bus 10" , "67843.b.ps" , 150 , 8.3 , 2.4 , 50);
    cout<<"**Information for "<<b.get_model()<<"**"<<endl;
     b.display();
    cout << "fuelNeeded : "<<b.fuelNeeded(550)<<endl;
    cout << "distance Covered : "<<b.distanceCovered(3)<<endl;



    return 0;
}
