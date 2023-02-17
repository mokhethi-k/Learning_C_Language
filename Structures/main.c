#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Hotel {
    char name[20];
    int numRoom,numEmp;
    int rent;


};
void printHotel(struct Hotel hotel);//Function to print Hotels information
int main()
{


    struct Hotel hotel1;
    struct Hotel hotel2;
    struct Hotel hotel3;
    struct Hotel hotel4;
    struct Hotel hotel5;
    //hotel 1 specifications
    strcpy(hotel1.name,"Mountain High Hotel");
    hotel1.numRoom=45;
    hotel1.numEmp=15;
    hotel1.rent=1500,
    //hotel 2 specifications
    strcpy(hotel2.name,"Riverside Hotel");
    hotel2.numRoom=25;
    hotel2.numEmp=6;
    hotel2.rent=2000;
    //hotel 3 specifications
    strcpy(hotel3.name,"LeftSide Hotel");
     hotel3.numRoom=50;
    hotel3.numEmp=9;
    hotel3.rent=2500;
    //hotel 4 specifications
    strcpy(hotel4.name,"Town Brothers Hotel");
     hotel4.numRoom=35;
    hotel4.numEmp=6;
    hotel4.rent=1800;
    //hotel 5 specifications
    strcpy(hotel5.name,"Holy-Family Hotel");
     hotel5.numRoom=65;
    hotel5.numEmp=10;
    hotel5.rent=5000;
    //printing hotels information
    printHotel( hotel1 );
       printHotel( hotel2 );
          printHotel( hotel3 );
             printHotel(hotel4 );
                printHotel( hotel5 );
                //checking the hotel with lowest rent payable




    return 0;
}
void printHotel(struct Hotel hotel){
    printf("Hotel name:%s\n",hotel.name);
    printf("Number of rooms:%d\n",hotel.numRoom);
    printf("Number of employees:%d\n",hotel.numEmp);
    printf("Rent payable:R%d\n\n\n",hotel.rent);


}
