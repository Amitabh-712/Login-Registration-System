#include <iostream>
#include <fstream>
#include <cstring>


using namespace std;

bool isLoggedIn()
{
    string username,password,un="",pw="";

    cout<<"Enter username";
    cin>>username;

    cout<<"Enter password";
    cin>>password;

     ofstream fout;

    string name="data" + username +".txt";
   
     ifstream fin;

     fin.open(name);

    getline(fin,un);
    getline(fin,pw);
     fin.close();

   

    if(un==username && pw==password)
    {
        return true;
    }

    return false;

}

int main()
{
    //system("colour 3f");
    int choice;

    cout<<"1:Register\n 2:Login\n Your choice:";
    cin>>choice;

    if(choice==1)
    {
        string username, password;

        cout<<"Enter username";
        cin>>username;

        cout<<"Enter password";
        cin>>password;

        ofstream fout;

         string filename="data"+username+".txt";
        fout.open(filename);

       fout<<username<<endl;
       fout<<password<<endl;

        fout.close();

        main();

    }
    else
    {
       bool status= isLoggedIn();

       if(status)
       {
        cout<<"Successfully logged in"<<endl;
        system("pause");
        return 0;
       }
       else{
        cout<<"Invalid username and password"<<endl;
        system("pause");

        return 1;
       }
    }

    
}