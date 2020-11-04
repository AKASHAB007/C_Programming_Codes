#include <iostream>
using namespace std;
 
#define MAX 10
 
class student
{
    private:
        char  name[30];
        int USN;
        float total_marks;
    public:
        void getDetails(void);
        void putDetails(void);
};
 
void student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> USN;
    cout << "Enter total marks outof 500: ";
    cin >> total_marks;
}
 
void student::putDetails(void){
    cout << "Student details:\n";
    cout << "Name:"<< name << ",Roll Number:" << USN << ",Total:" << total_marks << "\n";
}
 
int main()
{
    student std[MAX];       //array of objects creation
    int n,loop;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(loop=0;loop< n; loop++){
        cout << "Enter details of student " << loop+1 << ":\n";
        std[loop].getDetails();
    }
     
    cout << endl;
     
    for(loop=0;loop< n; loop++){
        cout << "Details of student " << (loop+1) << ":\n";
        std[loop].putDetails();
    }
     
    return 0;
}