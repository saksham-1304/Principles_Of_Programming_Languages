#include<bits/stdc++.h>
using namespace std;
class PhD_Student{

protected:
    int age;

public:
    PhD_Student(int valueA) 
    {
        age=valueA;
    }
    void Display_info() const 
    {
        cout << "Class PhD_Student: age_Phd_Student = " << age << endl;
    }


};

class Student : virtual public PhD_Student{
protected:
    int marks;

public:
    Student(int valueA, int valueB) : PhD_Student(valueA)
    { 
        marks=valueB ;
    } 
    void Display_info() const {
        cout << "Class Student: age_Phd_Student = " << age << ", data_student_marks = " << marks << endl;
    }
};
class Staff : virtual public PhD_Student{
protected:
    int staff_id;

public:
    Staff(int valueA, int valueC) : PhD_Student(valueA)
    { 
        staff_id=valueC ;
    } 
    void Display_info() const 
    {
        cout << "Class Staff: age_Phd_Student = " << age << ", data_staff_id = " << staff_id << endl;
    }
};

 
 class Person : public Student, public Staff {
    int identity_number;

public:
    Person(int valueA, int valueB, int valueC, int valueD): PhD_Student(valueA), Student(valueA, valueB), Staff(valueA, valueC)
    {
        identity_number=valueD;
    } 

    void Display_info() const 
    {
        cout << "Class Person: age_Phd_Student = " << age << ", data_student_marks = " << marks<< ", data_staff_id = " << staff_id << ", data_person_identity_number = " << identity_number << endl;
    }
};

    int main() {
    
    PhD_Student objA(10);
    Student objB(10, 80);
    Staff objC(10, 30);
    Person objD(10, 80, 30, 40);

   
    cout << "Displaying information for objA:" << endl;
    objA.Display_info();

    cout << "Displaying information for objB:\n" << endl;
    objB.Display_info();

    cout << "Displaying information for objC:\n" << endl;
    objC.Display_info();

    cout << "Displaying information for objD:\n" << endl;
    objD.Display_info();

    return 0;
}





