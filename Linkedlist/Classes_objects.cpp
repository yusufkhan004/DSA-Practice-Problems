#include <iostream>
#include <string>
using namespace std;

// user defined datatype
class Cars{

    private:
        // member variables or data member
        string company_name;
        string model_name;
        string fuel_type;
        float mileage;
        double price;

    public:
        // member function
        void setData(string c_name, string mname, string ftype, float m, double p) {
            company_name = c_name;
            model_name = mname;
            fuel_type = ftype;
            mileage = m;
            price = p;
        }

        void display() {
            cout << "car properties.:" << endl;
            cout << "Company name -> " << company_name << endl;
            cout << "Model name -> " << model_name << endl;
            cout << "Fuel type -> " << fuel_type << endl;
            cout << "mileage -> " << mileage << endl;
            cout << "Price -> " << price << endl;
        }
};

int main() {

    Cars car1,car2,car3; //objects(car1) are nothing but variables of type class(Cars)

    car1.setData("Toyota","altis","petrol",15.5,150000);
    car2.setData("Tesla","model 3 plaid","None (fully electric)", 20.2,500000);
    car3.setData("ferrari","Enzo","Diesel",35.6,3000000);
    car1.display();
    cout << endl;
    car2.display();
    cout << endl;
    car3.display();
    
    return 0;
}