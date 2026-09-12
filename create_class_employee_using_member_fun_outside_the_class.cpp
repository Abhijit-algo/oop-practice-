# include <iostream>
using namespace std;
class employee
{
    public:
    string name;
    int id;
    int salary;


    employee(string a,int b,int c){
        name=a;
        id=b;
        salary=c;
    }

    void display();

};


void employee :: display()
{
    cout<<"employee name: "<<name<<endl;
    cout<<"employe id: "<<id<<endl;
    cout<<"salary: "<<salary<<endl;

}


int main(){
    employee e1("abhijit",101,60000);
    employee e2("subhajit",102,55000);
    e1.display();
    e2.display();
    return 0;
}
