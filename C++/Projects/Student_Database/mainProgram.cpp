// Include the libraries
#include<iostream>
#include<cstring>
#include <cstdlib>
#include<iomanip>

using namespace std;

class Student{
public:
    string firstName,lastName;
    string course;
    string section;
    Student(){
        firstName = "";
        lastName = "";
        course = "";
        section = "";
    }
};

int main(){
    FILE *fp, *ft;
    char another;
    string first,last;
    Student s;
    fp = fopen("./users.txt","rb+");
    if(fp == NULL){
        fp = fopen("./users.txt","wb+");
        if(fp==NULL){
            cout<<"Can't Open file !"<<endl;
            return 0;
        }
    }
    long int recSize=sizeof(s);

    int choice;
    while(1){
        cout<<"\n\nSTUDENT INFORMATION SYSTEM\n"<<endl;
        cout<<"1. Add Records"<<endl;
        cout<<"2. List Records"<<endl;
        cout<<"3. Modify Records"<<endl;
        cout<<"4. Delete Records"<<endl;
        cout<<"5. Exit Program"<<endl;

        cin>>choice;
        switch(choice){
            case 1:
                fseek(fp,0,SEEK_END);
                another = 'Y';
                while(another == 'Y' or another == 'y'){
                    cout<<"Enter First Name : ";
                    cin>>s.firstName;
                    cout<<"Enter Last Name : ";
                    cin>>s.lastName;
                    cout<<"Enter Course Name : ";
                    cin>>s.course;
                    cout<<"Enter Section : ";
                    cin>>s.section;
                    fwrite(&s,recSize,1,fp);
                    cout<<"Add another record (y/N) : ";
                    cin>>another;
                }
                cout<<"Records Added Successfully !";
                break;
            
            case 2:
                rewind(fp);
                fp = fopen("./users.txt","rb+");
                cout<<"\nRecords in database"<<endl;
                while(fread(&s,recSize,1,fp)==1){
                    cout<<"******************************************"<<endl;
                    cout<<"Name : "<<s.firstName<<" "<<s.lastName<<endl;
                    cout<<"Course : "<<s.course<<endl;
                    cout<<"Section : "<<s.section<<endl;
                    // cout<<"******************************************"<<endl;
                }
                break;
            
            case 3:
                another = 'Y';
                while(another == 'Y' or another == 'y'){
                    cout<<"Enter the last name of student : ";
                    cin>>last;
            
                    rewind(fp);
                    while(fread(&s,recSize,1,fp)==1){
                        if(s.lastName == last){
                            cout << "Enter new the Firt Name : ";
                            cin >> s.firstName;
                            cout << "Enter new the Last Name : ";
                            cin >> s.lastName;
                            cout << "Enter new the Course    : ";
                            cin >> s.course;
                            cout << "Enter new the Section   : ";
                            cin >> s.section;
                            fseek(fp,-recSize,SEEK_CUR);
                            fwrite(&s,recSize,1,fp);
                            break;
                        }
                        else{
                            cout<<"Record Not Found"<<endl;
                            break;
                        }
                    }
                    cout<<"Modify Another Record ? (y/N) : ";
                    cin>>another;
                }
                cout<<"Records modified !"<<endl;
                break;
            
            case 4:
                another = 'Y';
                while(another=='Y' or another=='y'){
                    cout<<"Enter the last name to delete : ";
                    cin>>last;

                    ft = fopen("temp.txt","wb");
                    rewind(fp);

                    while(fread(&s,recSize,1,fp)==1){
                        if(s.lastName == last){
                            fwrite(&s,recSize,1,ft);
                        }
                        fclose(fp);
                        fclose(ft);
                        remove("./users.txt");
                        rename("./temp.txt","./users.txt");
                    }
                    fp=fopen("./users.txt","rb+");
                    cout<<"Delete Another Record ? (y/N) : ";
                    cin>>another;
                }
                cout<<"Records Deleted !"<<endl;
                break;

            case 5:
                fclose(fp);
                cout<<"Thank you ! \n Have a nice day !"<<endl;
                exit(0);
        }
    }

    return 0;
}
