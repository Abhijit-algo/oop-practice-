# include <iostream>
using namespace std;
// create class
class car
{
    public:
    string brand;
    int price;
    int year;
    
//create constructer

    car(string a,int b,int c){
        brand=a;
        price=b;
        year=c;
    }

//display function

    void display()
    {
        cout<<"brand"<<" name: "<<brand<<endl;
        cout<<"price: "<<price<<endl;
        cout<<"year: "<<year<<endl;
    }
};

//main function
    int main(){
        car c1("toyata",200000,2026);
        car c2("range_rover",400000,2026);
        c1.display();
        c2.display();

    
    return 0;
    }

