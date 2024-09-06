#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;

    virtual void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual ~Person() {}  // Virtual destructor
};

class Patient : public Person {
public:
    string medicalRecord;

    void displayInfo() const override {
        Person::displayInfo();
        cout << "Medical Record: " << medicalRecord << endl;
    }
};

class Doctor : public Person {
public:
    string specialty;

    void displayInfo() const override {
        Person::displayInfo();
        cout << "Specialty: " << specialty << endl;
    }
};

int main() {
    Patient patient;
    patient.name = "Jeevana Bhavani Reddy";
    patient.age = 50;
    patient.medicalRecord = "Mentally unstable";

    Doctor doctor;
    doctor.name = "Dr.Abhigna Bandi";
    doctor.age = 25;
    doctor.specialty = "psychiatrist";

    Person* personPtr;

    personPtr = &patient;
    cout << "Patient Information:" << endl;
    personPtr->displayInfo();

    cout << endl;

    personPtr = &doctor;
    cout << "Doctor Information:" << endl;
    personPtr->displayInfo();

    return 0;
}
