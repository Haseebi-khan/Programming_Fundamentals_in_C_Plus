#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>     
#include <fstream>

using namespace std;

void starting_Page()
{

                            //STARTING INTERFACE
    
    string runTimeMessage = "PRESS KEY TO RUN CONTACT BOOK";

    cout <<"\t\t\t" <<runTimeMessage<< endl;

    for (int rows = 1; rows <= 20; rows++)
    {
        for (int column = 1; column <= 80; column++)
        {
                if(rows <= 1 || rows >= 20 || column <= 3 || column >=78){
                    cout << "*";
                }
                // make a formula for printing Wellcom message to end-user 
                //row divided by 2  and column 37 to 43 
                else if(rows == 10 && column >= 37 && column <= 43) 
                {
                    
                    cout << "WELCOME" ;
                    column += 6;
                }
                else
                {
                    cout<< " ";
                }   
        }
        cout << endl;
    }   
}

void list_Contact( fstream &contactsfile )
{

    //////////////////////////////////////// Contact list ///////////////////////////////////////////////////
    for (int rows = 1; rows <= 2; rows++) {
        for (int column = 1; column <= 80; column++) {
            if (rows == 1 || column <= 3 || column >= 78) {
                cout << "*";
            } else if (rows == 2 && column >= 35 && column <= 46) {
                cout << "CONTACT LIST";
                  column += 11; // after printing contact list 
                               //  column + 11 will false the condition print asterstar in the end
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int rows = 1; rows <= 2; rows++) {
        for (int column = 1; column <= 80; column++) {
            
            if (rows == 1 && column > 8 && column <= 13) {
                cout << "Name";
                  column +=5; // after printing contact list 
                               //  column + 11 will false the condition print asterstar in the end
            } 
            else if (rows == 1 && column > 66 && column <= 72)
            {
                cout << "Number";
                column +=6;
            }
             else {
                cout << " ";
            }
        }
        cout << endl;
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //  In this line i will print all the names  or numbers.
    
    contactsfile.open("C:\\Users\\hasee\\Desktop\\CODES\\contacts.txt", ios::in);
    if (!contactsfile.is_open())
    {
        cout << "Error!"<<endl;
    }
    string line;
    int no_of_lines_in_file = 0;
    
    while (getline(contactsfile, line))
    {
        no_of_lines_in_file++;
    }
    string* separate_names = new string[no_of_lines_in_file];
    string* separate_numbers = new string[no_of_lines_in_file];

    contactsfile.clear();    // like attempting to read from a file that doesn't 
                             // exist or trying to read more data than available.
    contactsfile.seekg(0,ios::beg);

    for (int i = 0; i < no_of_lines_in_file; i++)
    {
        string seperate_number,seperate_name;
        getline(contactsfile,line);

        for (int j = 0; j < line.length(); j++)
        {
            
            if (line[j] >= '0' && line[j] <= '9')
            {
                seperate_number += line[j];
            }
            else if (line[j] >= 'a' && line[j] <= 'z' || line[j] >= 'A' && line[j] <= 'Z')
            {
                seperate_name += line[j];
                
            }

        }

        if (seperate_name == "" && seperate_number == "")
        {
            continue;
        }else
        {
            separate_names[i] = seperate_name;
            separate_numbers[i] = seperate_number;
        }
            
        cout << "\t" << separate_names[i] << "\t\t\t\t\t\t\t" << separate_numbers[i]  << "\t\t\t" << endl;       
    }
    
    cout << endl;

    delete[] separate_names;
    delete[] separate_numbers;
    
    contactsfile.close();

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    ////////////////////////////////////////////// for end two lines ////////////////////////////////////////////////////

    for (int rows = 1; rows <= 2; rows++) {
        for (int column = 1; column <= 80; column++) 
        {
            cout << "*" ;
        }
        cout << endl;
    }

    cin.ignore();

    system("pause");
    system("cls");
}

void save_contact( fstream &contactsfile )
{

    
    // opening file in folder
    

    cin.ignore();
    int back_To_Menu;
    do
    {  
        
        

                // SAVE Contact
        for (int rows = 1; rows <= 2; rows++) {
            for (int column = 1; column <= 80; column++) {
                if (rows == 1 || column <= 3 || column >= 78) {
                    cout << "*";
                } else if (rows == 2 && column >= 35 && column <= 46) {
                    cout << "SAVE CONTACT";
                    column += 13; // after printing contact list
                                //  column + 11 will false the condition print asterstar in the end
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;


        for (int rows = 1; rows <= 2; rows++) {
            for (int column = 1; column <= 80; column++) {
                
                if (rows == 1 && column > 8 && column <= 13) {
                    cout << "Name";
                    column +=5; // after printing contact list 
                                //  column + 11 will false the condition print asterstar in the end
                } 
                else if (rows == 1 && column > 66 && column <= 72)
                {
                    cout << "Number";
                    column +=6;
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


        //  In this line i will print all the names  or numbers.

        contactsfile.open("C:\\Users\\hasee\\Desktop\\CODES\\contacts.txt", ios::in );
        if (!contactsfile.is_open())
        {
            cout << "Error!"<<endl;
        }
        contactsfile.seekg(0,ios::beg);
        string line;
        int no_of_lines_in_file = 0;
        
        while (getline(contactsfile, line))
        {
            no_of_lines_in_file++;
        }
        string* separate_names = new string[no_of_lines_in_file];
        string* separate_numbers = new string[no_of_lines_in_file];

        contactsfile.clear();    
        contactsfile.seekg(0,ios::beg);

        for (int i = 0; i < no_of_lines_in_file; i++)
        {
            string seperate_number,seperate_name;
            getline(contactsfile,line);

            for (int j = 0; j < line.length(); j++)
            {
                
                if (line[j] >= '0' && line[j] <= '9')
                {
                    seperate_number += line[j];
                }
                else if (line[j] >= 'a' && line[j] <= 'z' || line[j] >= 'A' && line[j] <= 'Z')
                {
                    seperate_name += line[j];
                    
                }

            }
            if (seperate_name == "" && seperate_number == "")
            {
                continue;
            }else
            {
                separate_names[i] = seperate_name;
                separate_numbers[i] = seperate_number;
            }
            
            cout << "\t" << separate_names[i] << "\t\t\t\t\t\t\t" << separate_numbers[i]  << "\t\t\t" << endl;
            
        }
        
        cout << endl;

        delete[] separate_names;
        delete[] separate_numbers;
        contactsfile.close();

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        for (int rows = 1; rows <= 2; rows++) 
        {
            for (int column = 1; column <= 80; column++) 
            {
                cout << "*";
            }
            cout << endl;
        }

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        
        contactsfile.open("C:\\Users\\hasee\\Desktop\\CODES\\contacts.txt", ios :: out | ios::app);
        
        if (!contactsfile.is_open())
        {
            cout << "\tError!" <<endl;
        }


        cout << "\tEnter the name: \t";
        string save_Name;
        getline(cin, save_Name);
        cout << "\tEnter the Number: \t";
        string save_Number;
        getline(cin,save_Number);

        contactsfile << save_Name + save_Number <<endl;

        cout << "\tName \tNumber\n";
        cout << "\t" << save_Name << "\t" << save_Name << endl;
        
        cout << "\tContact have been saved.\n";
        cout << "\tIf you want to add another name then press 1 else 0: ";
        cin >> back_To_Menu;
        cin.ignore();

        system("cls");

        contactsfile.close();
        
    } while (back_To_Menu == 1); 

    contactsfile.close();

}

void search_Contacts( fstream &contactsfile )
{

    cin.ignore();

    contactsfile.open("C:\\Users\\hasee\\Desktop\\CODES\\contacts.txt", ios::in);

    if (!contactsfile.is_open())
    {
        cout << "Error!"<<endl;
    }
    string line;
    int no_of_lines_in_file = 0;
        
    while (getline(contactsfile, line))
    {
        no_of_lines_in_file++;
    }
    string* separate_names = new string[no_of_lines_in_file];
    string* separate_numbers = new string[no_of_lines_in_file];

        // like attempting to read from a file that doesn't 
                             // exist or trying to read more data than available.
        
        contactsfile.clear();
        contactsfile.seekg(0,ios::beg);

    for (int i = 0; i < no_of_lines_in_file; i++)
    {

        string seperate_number,seperate_name;

        getline(contactsfile,line);

        for (int j = 0; j < line.length(); j++)
        {
                
            if (line[j] >= '0' && line[j] <= '9')
            {
                seperate_number += line[j];
            }
            else if (line[j] >= 'a' && line[j] <= 'z' || line[j] >= 'A' && line[j] <= 'Z')
            {
                seperate_name += line[j];
                    
            }
        }
        if (seperate_name == "" && seperate_number == "")
        {
            continue;
        }else
        {
            separate_names[i] = seperate_name;
            separate_numbers[i] = seperate_number;
        }
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    char asking_Again_For_Search;

    do
    {
        ///////////////////////////////////////// Search Contact
        for (int rows = 1; rows <= 2; rows++) {
            for (int column = 1; column <= 80; column++) {
                if (rows == 1 || column <= 3 || column >= 78) {
                    cout << "*";
                } else if (rows == 2 && column >= 35 && column <= 46) {
                    cout << "Search Contact";
                    column += 13; // after printing contact list
                                //  column + 11 will false the condition print asterstar in the end
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }


        //////////////////////////////////////////////////////////////////////////////////////////////////////

        //  In this line i will print all the names  or numbers.
        
        cout << "\tName" << "\t\t\t\t\t\t  Number\n" << endl;

        for (int i = 0; i < no_of_lines_in_file; i++)
        {
            if (separate_names[i] != "" || separate_numbers[i] != "")
            {
                cout << "\t" << separate_names[i] << "\t\t\t\t\t\t  "<< separate_numbers[i] << endl;
            }
        }

        cout << endl;

        //////////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////////

        for (int i = 0; i < 2; i++)
        {
            for (int i = 0; i < 80; i++)
            {
                cout << "*";
            }
            cout << endl;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////////////

        string search;
        cout << "\tSearch :";
        getline(cin, search);
        
        bool checking_Nam_A_Num = false;

        for (int i = 0; i < no_of_lines_in_file; i++)
        {

            if (search == separate_names[i] || search == separate_numbers[i])
            {
                checking_Nam_A_Num = true;
                cout << "\tName is found."<<endl;
                cout << "\tName is: " << separate_names[i] << endl;
                cout << "\tNumber is: " << separate_numbers[i] << endl;
            }
            
        }

        if (!checking_Nam_A_Num)
        {
            cout << "\tNo Results." << endl;
        }

        cout << "\tPress 'x' to go back: ";
        cin >> asking_Again_For_Search;
        cin.ignore();

        system("cls");

    } while (asking_Again_For_Search != 'x');
    
    delete[] separate_names;
    delete[] separate_numbers;
    
    contactsfile.close();

    system("cls");

}

void delete_Contact(string*& names, string*& numbers, int& size, fstream &contactsfile)
{

       //DELETE Contact
    for (int rows = 1; rows <= 2; rows++) {
        for (int column = 1; column <= 80; column++) {
            if (rows == 1 || column <= 3 || column >= 78) {
                cout << "*";
            } else if (rows == 2 && column >= 35 && column <= 46) {
                cout << "DELETE CONTACT";
                  column += 13; //////////// after printing contact list
                                ////////////  column + 11 will false the condition print asterstar in the end
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int rows = 1; rows <= 2; rows++) {
        for (int column = 1; column <= 80; column++) {

            if (rows == 1 && column > 8 && column <= 13) {
                cout << "Name";
                  column +=5; ////// after printing contact list
                             //////  column + 11 will false the condition print asterstar in the end
            }
            else if (rows == 1 && column > 66 && column <= 72)
            {
                cout << "Number";
                column +=6;
            }
             else {
                cout << " ";
            }
        }
        cout << endl;
    }

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    //  In this line i will print all the names  or numbers.

        contactsfile.open("C:\\Users\\hasee\\Desktop\\CODES\\contacts.txt", ios::in);
        if (!contactsfile.is_open())
        {
            cout << "Error!"<<endl;
        }
        string line;
        int no_of_lines_in_file = 0;
        
        while (getline(contactsfile, line))
        {
            no_of_lines_in_file++;
        }
        string* separate_names = new string[no_of_lines_in_file];
        string* separate_numbers = new string[no_of_lines_in_file];



        contactsfile.clear();    // like attempting to read from a file that doesn't 
                                 // exist or trying to read more data than available.
        
        contactsfile.seekg(0,ios::beg);

        for (int i = 0; i < no_of_lines_in_file; i++)
        {
            string seperate_number,seperate_name;
            getline(contactsfile,line);

            for (int j = 0; j < line.length(); j++)
            {
                
                if (line[j] >= '0' && line[j] <= '9')
                {
                    seperate_number += line[j];
                }
                else if (line[j] >= 'a' && line[j] <= 'z' || line[j] >= 'A' && line[j] <= 'Z')
                {
                    seperate_name += line[j];
                    
                }

            }
            if (seperate_name == "" && seperate_number == "")
            {
                continue;
            }else
            {
                separate_names[i] = seperate_name;
                separate_numbers[i] = seperate_number;
            }
            
        }
        for (int i = 0; i < no_of_lines_in_file; i++)
        {
            if (separate_names[i] != "" || separate_numbers[i] != "")
            {
                cout << "\t" << separate_names[i] << "\t\t\t\t\t\t  "<< separate_numbers[i] << endl;
            }
        }
        
        cout << endl;

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        for (int rows = 1; rows <= 2; rows++) {
            for (int column = 1; column <= 80; column++) 
            {
                cout << "*";
            }
            cout << endl;
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        fstream temp;
        temp.open("C:\\Users\\hasee\\Desktop\\CODES\\temp.txt", ios::out);

        contactsfile.seekg(0,ios::beg);

        string lines, deleting_name_number, 
               Connecting_Name_Number = "";
        bool checking_Nam_A_Num = false;


        cout << "\tContact can deleted based on numbers or names and Both. "<<endl;
        cout << "\tEnter Name or Number Or Both Name and number: ";

        cin.ignore();

        getline(cin,deleting_name_number);


        for (int i = 0; i < no_of_lines_in_file; i++)
        {
            getline(contactsfile,line);
            if ( deleting_name_number == line)
            {
                Connecting_Name_Number = line;
            }
            else if ( deleting_name_number == separate_names[i] || deleting_name_number == separate_numbers[i] )
            {
                checking_Nam_A_Num = true;
                Connecting_Name_Number = separate_names[i] + separate_numbers[i];

                break;
            }
            
        }
        contactsfile.close();

        contactsfile.open("C:\\Users\\hasee\\Desktop\\CODES\\contacts.txt", ios::out | ios::in | ios::app);
        bool checking = false;
        int index;


        contactsfile.seekg(0,ios::beg);

        for (int i = 0; i < no_of_lines_in_file; i++)
        {
            getline(contactsfile,line);
            if ( Connecting_Name_Number == line) ///     
            {
                checking = true;
                index = i;
                continue;
            }

            temp << line << endl;
            
        }

        

        
        if (checking)
        {

            cout << "\t" << separate_names[index] <<  " " << separate_numbers[index]<<endl;
            cout << "\tContact deleted."<<endl; 
        }else
        {
            cout << "\tNo Result." <<endl;
        }


    delete[] separate_names;
    delete[] separate_numbers;
    temp.close();

    contactsfile.close();

    remove("C:\\Users\\hasee\\Desktop\\CODES\\contacts.txt");
    rename("C:\\Users\\hasee\\Desktop\\CODES\\temp.txt", "C:\\Users\\hasee\\Desktop\\CODES\\contacts.txt");

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout <<"\t";
    system("pause");
    system("cls");

}

void update_Contact(string*& names, string*& numbers, int& size, fstream &contactsfile)
{



    char asking_Again_For_Search;
    do
    {
                cin.ignore();

        system("cls");

                // UPDATE CONTACT 
        for (int rows = 1; rows <= 2; rows++) {
            for (int column = 1; column <= 80; column++) {
                if (rows == 1 || column <= 3 || column >= 78) {
                    cout << "*";
                } else if (rows == 2 && column >= 35 && column <= 46) {
                    cout << "UPTADE CONTACT";
                    column += 14; // after printing contact list
                                //  column + 11 will false the condition print asterstar in the end
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }

        for (int rows = 1; rows <= 2; rows++) {
            for (int column = 1; column <= 80; column++) {

                if (rows == 1 && column > 8 && column <= 13) {
                    cout << "Name";
                    column +=5; // after printing contact list
                                //  column + 11 will false the condition print asterstar in the end
                }
                else if (rows == 1 && column > 66 && column <= 72)
                {
                    cout << "Number";
                    column +=6;
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }

        ///////////////////////////////////////////////////////////////////////////////////////////

        //  In this line i should print all the names  or numbers.

        contactsfile.open("C:\\Users\\hasee\\Desktop\\CODES\\contacts.txt", ios::in | ios::out );
        fstream temp;

        temp.open("C:\\Users\\hasee\\Desktop\\CODES\\temp.txt", ios::out | ios::trunc);

        if (!contactsfile.is_open() || !temp.is_open())
        {
            cout << "Error!"<<endl;
        }
        string line;
        int no_of_lines_in_file = 0;
        
        while (getline(contactsfile, line))
        {
            no_of_lines_in_file++;
        }
        string* separate_names = new string[no_of_lines_in_file];
        string* separate_numbers = new string[no_of_lines_in_file];

        contactsfile.clear();
        contactsfile.seekg(0,ios::beg);

        for (int i = 0; i < no_of_lines_in_file; i++)
        {
            string seperate_number,seperate_name;
            getline(contactsfile,line);

            for (int j = 0; j < line.length(); j++)
            {
                
                if (line[j] >= '0' && line[j] <= '9')
                {
                    seperate_number += line[j];
                }
                else if (line[j] >= 'a' && line[j] <= 'z' || line[j] >= 'A' && line[j] <= 'Z')
                {
                    seperate_name += line[j];
                    
                }

            }
            if (seperate_name == "" && seperate_number == "")
            {
                continue;
            }else
            {
                separate_names[i] = seperate_name;
                separate_numbers[i] = seperate_number;
            }
            
            cout << "\t" << separate_names[i] << "\t\t\t\t\t\t\t" << separate_numbers[i]  << "\t\t\t" << endl;
            
        }
        
        cout << endl;

        

        ///////////////////////////////////////////////////////////////////////////////////////////

        // for end two lines

        for (int rows = 1; rows <= 2; rows++) 
        {
            for (int column = 1; column <= 80; column++)
            {
                cout << "*";
            }
            cout << endl;
        }


        ////////////////////////////////////////////////////////////////////////////////////////////////////
        
        string old_name_or_num;
        cout << "\tEnter the old name or number :";
        getline(cin, old_name_or_num);

        string update_nam, update_num, connecting_name_number;
        bool found = false;


        for (int i = 0; i < no_of_lines_in_file; i++)
        {
            if (old_name_or_num == separate_names[i] || old_name_or_num == separate_numbers[i])
            {
                found = true;

                cout << "\tEnter the New Name:";
                getline(cin, update_nam);
                cout << "\tEnter the New Number: ";
                getline(cin,update_num);
                cout << "\tContact Successfully Updated.\n";


                separate_names[i]=update_nam;
                separate_numbers[i]=update_num;

                break;
            }
        }
        for (int i = 0; i < no_of_lines_in_file; i++)
        {
            if (separate_names[i] == "" && separate_numbers[i] == "")
            {
                continue;
            }else
            {
                temp << separate_names[i] + separate_numbers[i] << endl;
            }
        }

        contactsfile.close();
        temp.close();

        
        remove("C:\\Users\\hasee\\Desktop\\CODES\\contacts.txt");
        rename("C:\\Users\\hasee\\Desktop\\CODES\\temp.txt", "C:\\Users\\hasee\\Desktop\\CODES\\contacts.txt");




        if (!found)
        {
            cout << "\tNot found." <<endl;
        }
        

        cout << "\tPress 'x' to go back: ";
        cin >> asking_Again_For_Search;
        

        delete[] separate_names;
        delete[] separate_numbers;
        
    } while (asking_Again_For_Search != 'x');


    contactsfile.close();
    system("cls");
    cin.ignore();

}

void exit_page()
{
                                 //EXIT PAGE
            for (int rows = 1; rows <= 20; rows++)
            {
                for (int column = 1; column <= 80; column++)
                {
                        if(rows <= 1 || rows >= 20 || column <= 3 || column >=78){
                            cout << "*";
                        }
                        // make a formula for printing Wellcom message to end-user 
                        //row divided by 2  and column 37 to 43 
                        else if(rows == 10 && column >= 38 && column <= 41) 
                        {
                            
                            cout << "EXIT" ;
                            column += 3;
                        }
                        else
                        {
                            cout<< " ";
                        }   
                }
                cout << endl;
            }   
    
            system("pause");

}

void menu(string*& names, string*& numbers, int& size, fstream &contactsfile)
{

                            //Menu Page

    int choice; 

    do
    {
                                                    // Menu
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        for (int rows = 1; rows <= 2; rows++) {
            for (int column = 1; column <= 80; column++) {
                if (rows == 1 || column <= 3 || column >= 78) {
                    cout << "*";
                } else if (rows == 2 && column >= 35 && column <= 46) {
                    cout << "CONTACT BOOK";
                    column += 11; // after printing contact list
                                //  column + 11 will false the condition print asterstar in the end
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////



        cout << "\n\t\t\t========== Contact Menu ==========" << endl; 
        cout << endl; 
        cout << "\t\t\t1.	Search Contact." << endl;
        cout << "\t\t\t2.	List contacts." << endl;
        cout << "\t\t\t3.	Save contacts." << endl;
        cout << "\t\t\t4.	Delete contacts." << endl;
        cout << "\t\t\t5.	Update contacts." << endl;
        cout << "\t\t\t6.	Exit." << endl;

        cout << endl;
        cout << endl;
        cout << endl;
        
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        for (int i = 0; i < 2; i++)
        {
            for (int i = 0; i < 80; i++)
            {
                cout << "*";
            }
            cout << endl;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


        cout << "\t\t\tKindly use integers.\n" ;
        cout << "\t\t\tEnter Your Choice: " ;
        
        cin >> choice;

        while (choice <= 0 || choice >= 7)
        {
            cout << "\t\t\tInvalid Enter the choice between 0 to 6." << endl;
            cout << "\t\t\tEnter Your Choice: ";
            cin >> choice;
        }
        
        system("cls");

        switch (choice)
            {
                case 1:
                    search_Contacts(  contactsfile);
                    break;
                case 2:
                    list_Contact( contactsfile ); 
                    break;
                case 3:
                    save_contact(contactsfile);
                    break;
                case 4:
                    delete_Contact(names, numbers, size, contactsfile);
                    break;
                case 5:
                    update_Contact(names, numbers, size, contactsfile);
                    break;
                case 6:
                    exit_page();
                    choice = 0;
            }


    } while (choice != 0);

} 

int main()
{

    int size = 5;
    string* names = new string[size];
    names[0] = "Haseeb";
    names[1] = "Noman";
    names[2] = "Haider";
    names[3] = "Waqus";
    names[4] = "Ahmed";
        
    string* numbers = new string[size];
    numbers[0] ="03129034432";
    numbers[1] ="03435432335";
    numbers[2] ="03372342344";
    numbers[3] ="03346565657";
    numbers[4] ="03226456546";

    fstream contactsfile;
    contactsfile.open("C:\\Users\\hasee\\Desktop\\CODES\\contacts.txt", ios::in | ios::app);
    if (!contactsfile.is_open())
    {
        cout << "Error!"<<endl;
    }

    contactsfile.close();


    
    starting_Page();
        
    Sleep(200);

    cin.ignore();
    system ("cls");

        

    menu( names, numbers, size, contactsfile);

        

    delete[] names;
    delete[] numbers;


    
    system("cls");


    contactsfile.close();

    return 0;
}