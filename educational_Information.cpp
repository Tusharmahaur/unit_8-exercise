#include <iostream>
#include <string>
using namespace std;

class Staff{    
    private:
        string name;
        string employeeID;
        string department;
        string position;
        string dateOfHire;
        string email;
        string phoneNumber;
    public:
        Staff(string staffName, string empID, string dept, string pos, string hireDate, string emailAddr, string phone){
            name = staffName;
            employeeID = empID;
            department = dept;
            position = pos;
            dateOfHire = hireDate;
            email = emailAddr;
            phoneNumber = phone;
        }

        void displayStaffInfo(){
            cout << "\n\nName : " << name << endl;
            cout << "Employee ID : " << employeeID << endl;
            cout << "Department : " << department << endl;
            cout << "Position : " << position << endl;
            cout << "Date of Hire : " << dateOfHire << endl;
            cout << "Email : " << email << endl;
            cout << "Phone Number : " << phoneNumber << endl;
        }

};

class Teacher : public Staff{
    private:
        string subjectSpecialization;
        int yearsOfExperience;
    public:
        Teacher(string staffName, string empID, string dept, string pos, string hireDate, string emailAddr, string phone, string subject, int experience)
        : Staff(staffName, empID, dept, pos, hireDate, emailAddr, phone) {
            subjectSpecialization = subject;
            yearsOfExperience = experience;
        }

        void displayTeacherInfo(){
            displayStaffInfo();
            cout << "Subject Specialization : " << subjectSpecialization << endl;
            cout << "Years of Experience : " << yearsOfExperience << endl;
        }
};

class Officer : public Staff{
    private:
        string areaOfExpertise;
        string grade;
    public:
        Officer(string staffName, string empID, string dept, string pos, string hireDate, string emailAddr, string phone, string expertise, string grd)
        : Staff(staffName, empID, dept, pos, hireDate, emailAddr, phone) {
            areaOfExpertise = expertise;
            grade = grd;
        }

        void displayOfficerInfo(){
            displayStaffInfo();
            cout << "Area of Expertise : " << areaOfExpertise << endl;
            cout << "Grade : " << grade << endl;
        }
};

class Typist : public Staff{
    private:
        string typingSpeed;
    public:
        Typist(string staffName, string empID, string dept, string pos, string hireDate, string emailAddr, string phone, string speed)
        : Staff(staffName, empID, dept, pos, hireDate, emailAddr, phone) {
            typingSpeed = speed;
        }

        void displayTypistInfo(){
            displayStaffInfo();
            cout << "Typing Speed : " << typingSpeed << endl;
        }
};

class RegularTypist : public Typist{
    public:
        RegularTypist(string staffName, string empID, string dept, string pos, string hireDate, string emailAddr, string phone, string speed)
        : Typist(staffName, empID, dept, pos, hireDate, emailAddr, phone, speed) {}
};

class CasualTypist : public Typist{
    private:
        float dailyWages;
    public:
        CasualTypist(string staffName, string empID, string dept, string pos, string hireDate, string emailAddr, string phone, string speed, float wages)
        : Typist(staffName, empID, dept, pos, hireDate, emailAddr, phone, speed) {
            dailyWages = wages;
        }

        void displayCasualTypistInfo(){
            displayTypistInfo();
            cout << "Daily Wages : " << dailyWages << endl;
        }
};

int main(){
    Teacher mathTeacher("Alice Johnson", "T123", "Mathematics", "Senior Teacher", "15/08/2010", "alice.johnson@example.com", "9876543210", "Mathematics", 15);
    mathTeacher.displayTeacherInfo();

    Officer adminOfficer("Bob Smith", "O456", "Administration", "Administrative Officer", "20/05/2012", "bob.smith@example.com", "9876543211", "Human Resources", "Grade B");
    adminOfficer.displayOfficerInfo();

    return 0;
}