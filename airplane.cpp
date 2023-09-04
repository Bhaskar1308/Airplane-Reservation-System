#include<iostream>
#include<fstream>
#include<iomanip>

 using namespace std;

 void mainmenu();

 class Management{
    public:

     Management(){
         
         mainmenu();
     }
 };

 class Details {
    public:

     static string name, gender;
     int phoneNo;
     int age;
     string add;
     static int cId;
     char arr[100];

     void information() {

        cout<<"\nEnter the customer ID : ";
        cin>>cId;
        cout<<"\nenter the name : ";
        cin>>name;
        cout<<"\nEnter the age : ";
        cin>>age;
        cout<<"\n Address : ";
        cin>>add;
        cout<<"\n Gender : ";
        cin>>gender;
        cout<<"Your details are saved with us\n"<<endl;

     }
 };

 int Details::cId;
 string Details::name;
 string Details::gender;

 class Registration {
    public:

      static int choice;
      int choice1;
      int back;
      static float charges;

      void flight(){
           
           string flightN[]={"Dubai" , "Canada" , "UK" , "USA" , "Australis"};

           for(int a=0;a<5;a++){
               
               cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
           }
            
            cout<<"\nWelcome to the Airlines! "<<endl;
            cout<<"Press the number of the country of which you want to book the flight:";
            cin>>choice;

            switch(choice){

                case 1:
                {
                    cout<<"___________________________Welcome to Dubai Emitrate_____________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. DUB - 498"<<endl;
                    cout<<"\t08-01-2023 8:00AM 10hrs Rs.14000"<<endl;
                    
                    cout<<"2. DUB - 658"<<endl;
                    cout<<"\t09-01-2023 7:00AM 10hrs Rs.10000"<<endl;

                    cout<<"3. DUB - 734"<<endl;
                    cout<<"\t12-01-2023 3:00PM 10hrs Rs.11000"<<endl;

                    cout<<"\nSelect the flight you want to book : "<<endl;
                    cin>>choice1;

                    if(choice1==1){

                        charges=14000;
                        cout<<"\n You have successfully booked the flight DUB - 498"<<endl;
                        cout<<"\nYou can go to the menu and take the ticket"<<endl;

                    }
                    else if(choice1==2){

                        charges=10000;
                        cout<<"\n You have successfully booked the flight DUB - 658"<<endl;
                        cout<<"\nYou can go to the menu and take the ticket"<<endl;
                }
                else if(choice1==3){

                        charges=11000;
                        cout<<"\n You have successfully booked the flight DUB - 734"<<endl;
                        cout<<"\nYou can go to the menu and take the ticket"<<endl;
                } 
                else{
                    cout<<"Invald input , shifting to the previous menu"<<endl;
                     flight();
                }     
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;

                if(back==1){
                    mainmenu();
                }  
                else{
                    mainmenu();
                }    
            }

            case 2:
            {
                cout<<"___________________________Welcome to Canadian Airlines_____________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. CA - 990"<<endl;
                    cout<<"\t08-02-2023 8:00AM 10hrs Rs.15000"<<endl;
                    
                    cout<<"2. CA - 876"<<endl;
                    cout<<"\t10-01-2023 10:00AM 10hrs Rs.20000"<<endl;

                    cout<<"3. CA - 551"<<endl;
                    cout<<"\t21-01-2023 9:00PM 10hrs Rs.16000"<<endl;

                    cout<<"\nSelect the flight you want to book : "<<endl;
                    cin>>choice1;

                    if(choice1==1){

                        charges=15000;
                        cout<<"\n You have successfully booked the flight DUB - 990"<<endl;
                        cout<<"\nYou can go to the menu and take the ticket"<<endl;

                    }
                    else if(choice1==2){

                        charges=20000;
                        cout<<"\n You have successfully booked the flight DUB - 876"<<endl;
                        cout<<"\nYou can go to the menu and take the ticket"<<endl;
                }
                else if(choice1==3){

                        charges=16000;
                        cout<<"\n You have successfully booked the flight DUB - 551"<<endl;
                        cout<<"\nYou can go to the menu and take the ticket"<<endl;
                } 
                else{
                    cout<<"Invald input , shifting to the previous menu"<<endl;
                     flight();
                }     
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;

                if(back==1){
                    mainmenu();
                }  
                else{
                    mainmenu();
                }    
            }

            case 3:
            {
                cout<<"___________________________Welcome to UK Airways_____________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. UK - 432"<<endl;
                    cout<<"\t03-04-2023 6:00AM 10hrs Rs.13000"<<endl;
                    
                    cout<<"2. UK - 605"<<endl;
                    cout<<"\t10-04-2023 11:00AM 10hrs Rs.30000"<<endl;

                    cout<<"3. UK - 142"<<endl;
                    cout<<"\t24-04-2023 9:00PM 10hrs Rs.26000"<<endl;

                    cout<<"\nSelect the flight you want to book : "<<endl;
                    cin>>choice1;

                    if(choice1==1){

                        charges=13000;
                        cout<<"\n You have successfully booked the flight UK - 432"<<endl;
                        cout<<"\nYou can go to the menu and take the ticket"<<endl;

                    }
                    else if(choice1==2){

                        charges=30000;
                        cout<<"\n You have successfully booked the flight UK - 605"<<endl;
                        cout<<"\nYou can go to the menu and take the ticket"<<endl;
                }
                else if(choice1==3){

                        charges=26000;
                        cout<<"\n You have successfully booked the flight UK - 142"<<endl;
                        cout<<"\nYou can go to the menu and take the ticket"<<endl;
                } 
                else{
                    cout<<"Invald input , shifting to the previous menu"<<endl;
                     flight();
                }     
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;

                if(back==1){
                    mainmenu();
                }  
                else{
                    mainmenu();
                }    
            }

            case 4:
            {
               cout<<"___________________________Welcome to US Airways_____________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. US - 632"<<endl;
                    cout<<"\t05-02-2023 6:00AM 11hrs Rs.23000"<<endl;
                    
                    cout<<"2. US - 905"<<endl;
                    cout<<"\t07-02-2023 11:00AM 14hrs Rs.40000"<<endl;

                    cout<<"3. US - 542"<<endl;
                    cout<<"\t14-02-2023 9:00PM 8hrs Rs.16000"<<endl;

                    cout<<"\nSelect the flight you want to book : "<<endl;
                    cin>>choice1;

                    if(choice1==1){

                        charges=23000;
                        cout<<"\n You have successfully booked the flight US - 632"<<endl;
                        cout<<"\nYou can go to the menu and take the ticket"<<endl;

                    }
                    else if(choice1==2){

                        charges=40000;
                        cout<<"\n You have successfully booked the flight US - 905"<<endl;
                        cout<<"\nYou can go to the menu and take the ticket"<<endl;
                }
                else if(choice1==3){

                        charges=16000;
                        cout<<"\n You have successfully booked the flight US - 542"<<endl;
                        cout<<"\nYou can go to the menu and take the ticket"<<endl;
                } 
                else{
                    cout<<"Invald input , shifting to the previous menu"<<endl;
                     flight();
                }     
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;

                if(back==1){
                    mainmenu();
                }  
                else{
                    mainmenu();
                }     
            }

            case 5:
            {
                cout<<"___________________________Welcome to Australian Airlines_____________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. AUS - 190"<<endl;
                    cout<<"\t05-02-2023 6:00AM 11hrs Rs.33000"<<endl;
                    
                    cout<<"2. AUS - 945"<<endl;
                    cout<<"\t07-02-2023 11:00AM 14hrs Rs.20000"<<endl;

                    cout<<"3. AUS - 631"<<endl;
                    cout<<"\t14-02-2023 9:00PM 8hrs Rs.19000"<<endl;

                    cout<<"\nSelect the flight you want to book : "<<endl;
                    cin>>choice1;

                    if(choice1==1){

                        charges=33000;
                        cout<<"\n You have successfully booked the flight AUS - 190"<<endl;
                        cout<<"\nYou can go to the menu and take the ticket"<<endl;

                    }
                    else if(choice1==2){

                        charges=20000;
                        cout<<"\n You have successfully booked the flight AUS - 945"<<endl;
                        cout<<"\nYou can go to the menu and take the ticket"<<endl;
                }
                else if(choice1==3){

                        charges=19000;
                        cout<<"\n You have successfully booked the flight AUS - 631"<<endl;
                        cout<<"\nYou can go to the menu and take the ticket"<<endl;
                } 
                else{
                    cout<<"Invald input , shifting to the previous menu"<<endl;
                     flight();
                }     
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;

                if(back==1){
                    mainmenu();
                }  
                else{
                    mainmenu();
                }     
            }

            default :
            {
                cout<<"Invalid input , shifting to the main menu"<<endl;
                mainmenu();
                break;
            }
      }

     

 }
 };

 float Registration::charges;
 int Registration::choice;

 class Ticket : public Registration, Details {

    public:

      void Bill(){

         string destination = "";
         ofstream outf("records.txt");
         {
            outf<<"______________XYZ Airlines______________"<<endl;
            outf<<"_______________Ticket___________________"<<endl;
            outf<<"________________________________________"<<endl;

            outf<<"Customer ID:"<<Details::cId<<endl;
            outf<<"Customer Name:"<<Details::name<<endl;
            outf<<"Customer Gender:"<<Details::gender<<endl;
            outf<<"\tDescription"<<endl<<endl;

            if(Registration::choice==1){
                 
                 destination="Dubai";
            }
            else if(Registration::choice==2){

                destination="Canada";
            }
            else if(Registration::choice==3){

                destination="UK";
            }
            else if(Registration::choice==4){

                destination="USA";
            }
            else if(Registration::choice==5){
                destination="Australia";
            }

            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight cost :\t\t"<<Registration::charges<<endl;
         }
         outf.close();
      }

      void dispbill(){
        
        ifstream ifs("records.txt");
        {
            if(!ifs){
                cout<<"File error!"<<endl;
            }
            while(!ifs.eof()){
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
      }
 };

void mainmenu()
  {
    int lchoice;
    int schoice;
    int back;

    cout<<"\t              XYZ Airlines \n"<<endl;
    cout<<"\t             Main Menu              "<<endl;

    cout<<"\t_____________________________________________________"<<endl;

    cout<<"\t\t\t\t\t\t\t|"<<endl;

    cout<<"\t|\t Press 1 to add the Customer Details      \t"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration          \t"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges           \t"<<endl;
    cout<<"\t|\t Press 4 to Exit                          \t"<<endl;
    cout<<"\t\t\t\t\t\t\t|"<<endl;
    cout<<"\t_____________________________________________________"<<endl;

    cout<<"Enter the choice : ";
    cin>>lchoice;

    Details d;
    Registration r;
    Ticket t;

    switch(lchoice){

        case 1:
         {
            cout<<"____________Customers____________\n"<<endl;
            d.information();
            cout<<"Press any key to go back to Main menu ";
            cin>>back;

            if(back==1){
                mainmenu();
            }
            else{
                mainmenu();
            }
            break;
         }

         case 2:
         {
            cout<<"_________Book a flight using this system___________\n"<<endl;
            r.flight();
            break;
         }

         case 3:
         {
            cout<<"______GET YOUR TICKET_____\n"<<endl;
            t.dispbill();

            cout<<"Your ticket is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket ";

            cin>>back;
            
            if(back==1){
                t.dispbill();
                cout<<"Press any key to go back to main menu";
                cin>>back;
                if(back==1){
                    mainmenu();
                }
                else{
                    mainmenu();
                }
            }
            else{
                mainmenu();
            }
            break;
         }

         case 4:
         {
            cout<<"\n\n\t____________Thank-you___________"<<endl;
            break;
         }

         default :
         {
            cout<<"Invalid input, Please try again!\n"<<endl;
            mainmenu();
            break;
         }
    }
}

int main(){
    Management Mobj;
    
    return 0;
}
