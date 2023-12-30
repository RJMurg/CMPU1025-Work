/*
    Making Structs for Cards, Stock Record,
    Library books, Customer Records,
    Transaction record, time of day,
    long & Lat, and a league.

    Made by: Ruán Murgatroyd | C22400846
    Created: 21/03/23
    OS: Windows 10 Pro
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#include <string.h>

struct playing_card{
    char value[6];
    char suit[9];
};

struct stock_record{
    int stock_number;
    char stock_description[20];
    int stock_quantity;
};

struct library_book{
    char isbn[13];
    char book_title[30];
    char author[25];
    float price;
};

struct customer_record{
    unsigned int customer_number;
    char name[25];
    char address[45];
    double balance;
};

struct transaction_record{
    char transaction_type;
    int day, month, year;
    float transaction_amount;
};

struct twelve_hr_time{
    int hours, minutes, seconds;
    char ampm[5];
};

struct coordinates{
    int degrees, minutes;
    char direction;
};

struct league_team{
    char name[20];
    int homeWins, homeLosses, awayWins, awayLosses;
};

int main(){

    
    
    return 0;
} // end main