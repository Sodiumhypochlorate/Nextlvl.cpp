#include <iostream>
#include <string>

// My classes go here... //

class Menu{
    private:

    public:
        // constructor //
        Menu(){
            std::cout<< "Welcome to NextLVL a Text-Based rpg...\nEnjoy!\n"<< "To use this menu either type in the option number or the first letter..."<<std::endl;
            std::cout<<"1.(s)tart   2.(c)ontinue   3.(o)ptions   4.(g)ame info    5.(e)xit"<<std::endl;
        }
        // ends program prematurely //
        void gamebreak(){
            std::exit(0);
        }
        // this part is just a temporary solution candy //


};

class Enemy{
    private:
    public:

};


class NPC{
    private:
    public:
};

class Soldier{
    private:
        std::string Sname;
        int hp;
        int lvl;
        int str;
        int exp;
    public:
        // constructor //
        Soldier(std::string x){
            setSname(x);
            std::cout <<"A hero is being created!"<<std::endl;
            hp = 100;
            lvl = 0;
            exp = 0;
            str = 10;
        }
        
        // give soldier a name //
        void setSname(std::string x){
            Sname = x;
        }
        // check soldier name //
        std::string getSname(){
            return Sname;
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
    // Menu //
    Menu main;
    std::string x;
    std::getline(std::cin,x);
    if (x == "e"|| x == "5" ){
        main.gamebreak();
    }
    else if (x =="1"|| x=="s"){
    // End of Menu //
    int rand = 0;
    Soldier hero("Name");
    // The name selection //
    while (rand == 0){
       std::cout << "What be your name hero?"<< std::endl;
       std::string Hero_Name;
       std::getline(std::cin, Hero_Name);
       hero.setSname(Hero_Name);
       std::cout << "Okay, "<< Hero_Name<< "..."<<std::endl<< "Are you sure?\ny or n?\n";
       std::string Answer;
       std::getline(std::cin,Answer);
       if (Answer == "y"){
          rand = 1;  
    }} 
    // end of name selection //
    std::cout << "Okay, "<< hero.getSname()<< "...\nYou are currently at:\n"<< hero.gethealth()<<"hp!\n"<< hero.getexp()<<"Experience points!\nOn level "<<hero.getlvl()<<"..."<<std::endl;
    }
    return 0;
}
