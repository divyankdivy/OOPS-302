#include <iostream>
#include <string>
using namespace std;

class Student {

    private:
    int rollNo;
    string name;
    
    public:
    Student(){
        rollNo = 101;
        name = "Div";
    };

    void showDetails() {
        cout<<"name: "<<this->name<<endl;
        cout<<"roll no: "<<this->rollNo;
    }
};

int main() {

    Student s1;
    s1.showDetails();
    cout<<endl;
    return 0;
}