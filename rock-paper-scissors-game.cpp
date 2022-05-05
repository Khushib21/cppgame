
#include <iostream>
#include<string.h>
#include <stdlib.h>

using namespace std;
void play()
{
    
    int var; char x; char choice;
    char compchoice[10];
    cout<<"\nEnter Your Choice : ";
    cin>>choice;
    var=rand()%2;
    switch(var)
    {
        case 0: strcpy(compchoice,"Rock");
        break;
        case 1: strcpy(compchoice,"Paper");
        break;
        case 2: strcpy(compchoice,"Scissors");
        break;
        default : cout<<"Error";
    }
    if(choice=='s')
    {
        if(strcmp(compchoice,"Rock"))
        cout<<"Opponent chooses Rock\nYou lose! Better luck next time!\nPress 'y' to play again.\nPress any other key to exit.";
        else if(strcmp(compchoice,"Paper"))
        cout<<"Opponent chooses Paper\nYou win!\nPress 'y' to play again.\nPress any other key to exit.";
        else
        cout<<"There's a tie!\nPress 'y' to play again.\nPress any other key to exit.";
    }
    if(choice=='r')
    {
        if(strcmp(compchoice,"Paper"))
        cout<<"Opponent chooses Paper\nYou lose! Better luck next time!\nPress 'y' to play again.\nPress any other key to exit.";
        else if(strcmp(compchoice,"Scissors"))
        cout<<"Opponent chooses Scissors\nYou win!\nPress 'y' to play again.\nPress any other key to exit.";
        else
        cout<<"There's a tie!\nPress 'y' to play again.\nPress any other key to exit.";
    }
    if(choice=='p')
    {
        
        if(strcmp(compchoice,"Scissors"))
        cout<<"Opponent chooses Scissors\nYou lose! Better luck next time!\nPress 'y' to play again.\nPress any other key to exit.";
        else if(strcmp(compchoice,"Rock"))
        cout<<"Opponent chooses Rock\nYou win!\nPress 'y' to play again.\nPress any other key to exit.";
        else
        cout<<"There's a tie!\nPress 'y' to play again.\nPress any other key to exit.";
    }
    cin>>x;
    if(x=='y')
    play();
    else
    return;
    
}

int main()
{
   cout<<"********************************************************************";
   cout<<"\n\t\t\tWELCOME TO ROCK, PAPER, SCISSORS!                ";
   cout<<"\n\t\t\tRock     : r                                 ";
   cout<<"\n\t\t\tPaper    : p                                 ";
   cout<<"\n\t\t\tScissors : s                                 ";
  cout<<"\n********************************************************************";
   
    play();
    return 0;
}
