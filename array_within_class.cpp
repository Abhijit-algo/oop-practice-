# include <iostream>
using namespace std;
class student
{
    public:
    string name;
    int marks [5];


    student()
    {
        for(int i=0;i<5;i++){
            name ="unknown";
             marks[i]=0;
        }
    }

    student(string n){
        name=n;
        for(int i=0;i<5;i++){
            marks[i]=0;

        }
    }


    void input()
    {
        cout<<"name name: "<<endl;
        cin >>name;
        cout<<"enter 5 marks for student: "<<endl;
        for(int i=0;i<5;i++){
            cout<<"subject "<<(i+1)<<": "<<endl;

            cin >>marks[i];
        }
    }



    void display()
    {
        cout<<"name: "<<name<<endl;
        for(int i=0;i<5;i++){
            cout <<"marks["<<i<<"]"<<" = "<<marks[i]<<endl;
        }
    }



};


int main(){
    student s1[5];
    for(int i=0;i<5;i++){
        cout<<"----student"<<(i+1)<<"---"<<endl;
        s1[i].input();
        s1[i].display();
        
    }
    return 0;
}

