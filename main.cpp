#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;


class Casino_Game{
private:
int user_money;
int random_num;
int user_choice;
 

public :
void Game(){
casino_Menu();

}

void casino_Menu(){

cout << "Deposit amount for price pool: ";
cin >> user_money;

srand(std::time(0)); 
random_num = std::rand() % 10 + 1; 

casino_Draw();
}


void casino_Draw(){
cout << "Enter a number 1 - 10: ";
cin >> user_choice;

if (user_choice == random_num){
    winner_pool();
}
else if (user_choice != random_num){
    loser_pool();
}
else{
    cout<< "error";
}

}

void winner_pool(){
cout << "Winner! "<<endl;
cout << "Price out x10!"<<endl; 

user_money =  user_money * 10; 

cout << "Total = " << user_money<<endl;

}


void loser_pool(){

cout << "The # was: " << random_num<<endl;

cout << "LOSER!" <<endl;
cout <<"Casino Wins...."<<endl;

user_money=0;

cout << "Total = "<<user_money<<endl;


}



};


int main(){

Casino_Game start;

start.Game();



}

/*

deposit money 
guess number between 1 to 10 
win = 10x price pool
lose = loses everything 

*/
