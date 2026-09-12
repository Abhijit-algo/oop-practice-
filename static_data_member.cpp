# include <iostream>
using namespace std;
class student
{
    public:
    string name;
    int static total_student;


    student(string n){
        name=n;
        total_student++;

    }

    void display();
};

int student :: total_student=0;
void student :: display(){
    cout<<"name: "<<name<<endl;

}

int main(){
    student s1("abhijit");
    student s2("subhajit");
    student s3("rahul");
    s1.display();
    s2.display();
    s3.display();
    cout<<"total students: "<<student ::total_student<<endl;
    return 0;

}

