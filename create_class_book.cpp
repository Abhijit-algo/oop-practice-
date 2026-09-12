# include <iostream>
using namespace std;

//create class

class book
{
    public:
    string title;
    int price;
    int pages;

//create constructor

    book(string a,int b,int c){
        title=a;
        price=b;
        pages=c;

    }

//create member function insiside the class

    void display()
    {
        cout<<"book title: "<<title<<endl;
        cout<<"book price: "<<price<<endl;
        cout<<"total pages of the book: "<<pages<<endl;
    }

};


//main function

int main(){
    book b1("python for begainer",250,350);
    book b2("java",450,400);
    b1.display();
    b2.display();
    return 0;

}