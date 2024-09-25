#include <iostream>
#include <string>
#include <iomanip>
#include<windows.h>     

using namespace std;


void starting_Page()
{

                            //STARTING INTERFACE
    
    string runTimeMessage = "PRESS KEY TO RUN CONTACT BOOK";

    //number of columns to get set width - number of letter with in string.
    int paddingOfRunTime=((80 - 29)/2); //int 25 

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

void list_Contact(string*& names, string*& numbers, int& size)
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
    for (int i = 0; i < size; i++)
    {
        cout << "\t" << names[i] << "\t\t\t\t\t\t\t"<< numbers[i] << endl;
    }
    cout << endl;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   
////////////////////////////////////////////// for end two lines ////////////////////////////////////////////////////

    for (int rows = 1; rows <= 2; rows++) {
        for (int column = 1; column <= 80; column++) 
        {
            cout << "*";
        }
        cout << endl;
    }

    system("pause");
    system("cls");
}

void save_contact(string*& names, string*& numbers, int& size)
{
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

        for (int i = 0; i < size; i++)
        {
            cout << "\t" << names[i] << "\t\t\t\t\t\t\t" << numbers[i]  << "\t\t\t" << endl;
        }

        cout << endl;

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

        cout << "\tEnter the name: \t";
        string save_Name;
        getline(cin, save_Name);
        cout << "\tEnter the Number: \t";
        string save_Number;
        getline(cin,save_Number);

        string* new_Name = new string[size + 1];
        string* new_Number = new string[size + 1];

        for (int i = 0; i < size; i++)
        {
            new_Name[i] = names[i];
            new_Number[i] = numbers[i];
        }

        new_Name[size] = save_Name;
        new_Number[size] = save_Number;

        delete[] names;
        delete[] numbers;
        

        names = new_Name;
        numbers = new_Number;
        size++;


        cout << "\tName \tNumber\n";
        cout << "\t" << names[size - 1] << "\t" << numbers[size - 1] << endl;
        
        cout << "\tContact have been saved.\n";
        cout << "\tIf you want to add another name then press 1 else 0: ";
        cin >> back_To_Menu;
        cin.ignore();
        system("cls");


    } while (back_To_Menu == 1); 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


}

void search_Contacts(string*& names, string*& numbers, int& size)
{


    cin.ignore();
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

        for (int i = 0; i < size; i++)
        {
            cout << "\t" << names[i] << "\t\t\t\t\t\t  "<< numbers[i] << endl;
        }
        cout << endl;


        for (int i = 0; i < 2; i++)
        {
            for (int i = 0; i < 80; i++)
            {
                cout << "*";
            }
            cout << endl;
        }

        string search;
        cout << "\tSearch :";
        getline(cin, search);
        
        bool checking_Nam_A_Num = false;

        for (int i = 0; i < size; i++)
        {
            if (search == names[i])
            {
                checking_Nam_A_Num = true;
                cout << "\tName is found."<<endl;
                cout << "\tName is: " << names[i] << endl;
                cout << "\tNumber is: " << numbers[i] << endl;

            }
            else if (search == numbers[i])
            {
                checking_Nam_A_Num = true;
                cout << "\tNumber is found."<<endl;
                cout << "\tName is: " << names[i] << endl;
                cout << "\tNumber is: " << numbers[i] << endl;
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
    

/////////////////////////////////////////////////////////////////////////////////////////////////////
 
    system("cls");


}

void delete_Contact(string*& names, string*& numbers, int& size)
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

    for (int i = 0; i < size; i++)
    {
        cout << "\t" << names[i] << "\t\t\t\t\t\t\t"<< numbers[i] << endl;
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



        cout << "\tContact can deleted based on numbers or names? "<<endl;
        cout << "\tMethod for deletion: 1 for name or 2 for number: ";
        int option;
        cin >> option;
        
        cin.ignore();

        if(option == 1)//checking option.
        {
                
            cout << "\tEnter the Name: ";
            string delete_name;
            getline(cin,delete_name);
        
            bool checking_Name = false;
        
            for (int i = 0; i < size; i++)
            {
                if (delete_name == names[i])
                {
                    checking_Name = true;
                    int indexToDelete;
                    //yaha p hum indux maloom kareeng ga jis ma value a
                    for (int i = 0; i < size; i++)
                        {
                            if (delete_name == names[i])
                            {
                                indexToDelete = i;
                                break;
                            }
                        } 
            
                    //////////////////////////////////////////////////////////////////////
            
                    string* old_Names = new string[size - 1];
                    string* old_Numbers = new string[size - 1];

            
            
            
                        //yaha py wo values copy kry ga us element ko nai store
                        //krwaye ga jisko del krwana
            
                        //isme humne us index wali value replace krdi
                    for(int i = indexToDelete; i < ( size - 1 ) ; i++)
                        {
                            names[i] = names[ i + 1 ];
                            numbers[i] = numbers[ i + 1 ];
                        }
            
                        //isme hum ab replaced wali  namearray ko new array 
                        //my store krwaye gy
                    for(int i=0;i<size-1; i++)
                        {
                            old_Names[i] = names[i];
                            old_Numbers[i] = numbers[i];
                        }
            
                        //previous array ko delete
                    delete[] names;
                    delete[] numbers;

            
                        //pointing names to the new array
                    names = old_Names;
                    numbers = old_Numbers;

                    size--; 
                    

                    cout << endl;
                    cout <<"\tName and Number is Sucessfully deleted." <<endl;
                        
                }
                
            }
            if (checking_Name == false)
            {
                cout << "\tName not found." << endl;
            }
        
        }
        else if(option == 2)
            {
                cout << "\tEnter the Number: ";
                string delete_number;
                getline(cin,delete_number);
            
                bool checking_number = false;
        
            for (int i = 0; i < size; i++)
            {
                if (delete_number == numbers[i])
                {
                    checking_number = true;
                    int index_Of_Number;
                    //yaha p hum indux maloom kareeng ga jis ma value a
                    for (int i = 0; i < size; i++)
                    {
                        if (delete_number == numbers[i])
                        {
                            index_Of_Number = i;
                            break;
                        }
                    } 
        
                //////////////////////////////////////////////////////////////////////
                    
                    string* old_Names = new string[size - 1];
                    string* old_Numbers = new string[size - 1];
        
        
        
                    //yaha py wo values copy kry ga us element ko nai store
                    //krwaye ga jisko del krwana
        
                    //isme humne us index wali value replace krdi
                    for(int i = index_Of_Number; i < ( size - 1 ) ; i++)
                    {
                        names[i] = names[ i + 1 ];
                        numbers[i] = numbers[ i + 1 ];
                    }
        
                    //isme hum ab replaced wali  namearray ko new array 
                    //my store krwaye gy
                    for(int i=0;i<size-1; i++)
                    {
                        old_Names[i] = names[i];
                        old_Numbers[i] = numbers[i];
                    }
        
                    //previous array ko delete
                    delete[] names;
                    delete[] numbers;
        
                    //pointing names to the new array
                    names = old_Names;
                    numbers = old_Numbers;
                    size--; 
                    cout <<"\tName and Number is Sucessfully deleted." <<endl;


                }
                
            }
            if (checking_number == false)
            {
                cout << "\n\tNumber not found." << endl;
            }
            
        }else {
            cout << "\tEnter vaild option."<<endl;
        }


    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout <<"\t";
    system("pause");
    system("cls");

}

void update_Contact(string*& names, string*& numbers, int& size)
{


    cin.ignore();

    char asking_Again_For_Search;
    do
    {

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

        for (int i = 0; i < size; i++)
        {
            cout << "\t" << names[i] << "\t\t\t\t\t\t\t"<< numbers[i] << endl;
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

        string update_nam;
        string update_num;

        bool found = false;

        for (int i = 0; i < size; i++)
        {
            if (old_name_or_num == names[i] || old_name_or_num == numbers[i])
            {
                found = true;
                cout << "\tEnter the New Name:";
                getline(cin, update_nam);
                cout << "\tEnter the New Number: ";
                getline(cin,update_num);

                names[i]=update_nam;
                numbers[i]=update_num;

                break;
            }
        }
        if (!found)
        {
            cout << "Not found." <<endl;
        }
        

        cout << "\tPress 'x' to go back: ";
        cin >> asking_Again_For_Search;

    } while (asking_Again_For_Search != 'x');

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

void menu(string*& names, string*& numbers, int& size)
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
            search_Contacts( names, numbers, size);
            // cin >> search; // using do while loop to see out all the contacts and then search. 
            break;
        case 2:
            list_Contact(names, numbers, size); 
            break;
        case 3:
            save_contact(names, numbers, size);
            break;
        case 4:
            delete_Contact(names, numbers, size);
            break;
        case 5:
            update_Contact(names, numbers, size);
            break;
        case 6:
            exit_page();
            choice = 0;
        }
        } while (choice != 0);

} 

int main()
{
    
    starting_Page();
    
    Sleep(200);

    cin.ignore();
    system ("cls");

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

    menu( names, numbers, size);

    delete[] names;
    delete[] numbers;


    getchar();
    system("cls");
    return 0;
}
