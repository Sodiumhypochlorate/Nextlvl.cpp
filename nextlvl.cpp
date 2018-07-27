#include <iostream>
#include <string>
using namespace std ;

// My classes go here... //

class Soldier{
    private:
        string sname;
        int hp;
        int lvl;
        int str;
        int exp;
    public:
        // constructor //
        Soldier(string x){
            setsname(x);
            cout <<"Hero Created!"<< endl;
            hp = 100;
            lvl = 0;
            exp = 0;
            str = 10;
        }
        
        // give soldier a name //
        void setsname(string x){
            x = sname;
        }
        // check soldier name //
        string getsname(){
            return sname;
        }
        // check health points //
        int gethealth(){
            return hp;
        }
        // Check level //
        int getlvl(){
            return lvl;
        }
        // Check Exp //
        int getexp(){
            return exp;
        }
        int getstr(){
            return str;
        }

};

int main(){
    int rand = 0;
    Soldier hero;
    // The name selection //
    while (rand == 0){
    cout << "What be your name hero?"<< endl;
    string Hero_Name;
    getline(cin, Hero_Name);
    hero.setsname(Hero_Name);
    cout << "Okay, "<< Hero_Name<< "..."<< endl<< "Are you sure?\ny or n?\n";
    string Answer;
    getline(cin,Answer);
    if (Answer == "y"){
        rand = 1;  
    }} 
    // end of name selection //
    cout << "Okay, "<< hero.getsname()<< "...\nYou are currently at:\n"<< hero.gethealth()<<"hp!\n"<< hero.getexp()<<"Experience points!\nOn level "<<hero.getlvl()<<"..."<<endl;
    return 0;
}
