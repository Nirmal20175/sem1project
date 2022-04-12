#include <stdio.h>
#include <conio.h>
int main()
{
   char name[30], medical_history[30], contact[30], address[100], date[30], flight_type[10], boarding_from[30], boarding_to[30], pass_status[30];
   int age, type, ticket_class, distance, discount, discount1, discount2, discount3, discount4, charge, total_discount, amount = 40000, billing_amount, annual_pass;
   printf("\n\n\n\n\n");
   printf("\n\t\t\t *------------------*\n");
   printf("\n\t\t\t =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
   printf("\n\t\t\t = WELCOME =");
   printf("\n\t\t\t = TO =");
   printf("\n\t\t\t = e-Ticketing =");
   printf("\n\t\t\t = MANAGEMENT =");
   printf("\n\t\t\t = SYSTEM =");
   printf("\n\t\t\t =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
   printf("\n\t\t\t *------------------*\n");
   printf("\n\n\n\t\t\t Enter any key to continue.....\n\n\n");
   getch();
   printf("1.) Passenger's Name: ");
   gets(name);
   printf("2.) Enter Your Age: ");
   scanf("%d", &age);
   printf("3.) Select the Ticket Type: \n 1.Flight \n 2.Railway \n 3.Bus\n");
   scanf("%d", &type);
   switch (type)
   {
   case 1:
      printf("Flight\n");
      break;
   case 2:
      printf("Railway\n");
      break;
   case 3:
      printf("bus\n");
   default:
      printf("Invalid Input\n");
      break;
   }
   printf("4.) Booking Type:\n 1.General \n 2.Tatkal\n");
   scanf("%d", &ticket_class);
   switch (ticket_class)
   {
   case 1:
      printf("General\n");
      break;
   case 2:
      printf("Tatkal\n");
      break;
   default:
      printf("Invalid Input\n");
      break;
   }
   printf("5.) Enter Your Contact No: ");
   scanf("%s", &contact);
   printf("6.) Enter Your Address: ");
   scanf("%s", &address);
   printf("7.) Enter Date (In DD-MM-YYYY Format): ");
   scanf("%s", &date);
   printf("8.) Form Where You Boarding: ");
   scanf("%s", &boarding_from);
   printf("9.) Boarding to: ");
   scanf("%s", &boarding_to);
   printf("10.) Your Medical History: ");
   scanf("%s", &medical_history);
   printf("11.) Enter Your Pass Status: ");
   scanf("%s", &pass_status);
   printf("12.) Your distance: ");
   scanf("%d", &distance);
   printf("13.) you have any Annual Pass:\n 1.Yes \n 2.No\n");
   scanf("%d", &annual_pass);
   switch (annual_pass)
   {
   case 1:
      discount4 = amount * 0.05;
      break;
   case 2:
      discount4 = 0;
      break;

   default:
      printf("Invalid Input");
   }
   /* Discount1 (for age above 60)*/
   if (age > 60)
   {
      discount1 = amount * 0.20;
   }
   else
   {
      discount1 = 0;
   }
   /*For Flight discount (for distance above 1000) */
   if (distance > 1000)
   {
      discount2 = amount * 0.1;
   }
   else
   {
      discount2 = 0;
   }
   /*For Train discount (for distance above 700) */
   if (distance > 700)
   {
      discount3 = amount * 0.15;
   }
   else
   {
      discount3 = 0;
   }
   /*For booking type(For tatkal type) */
   if (ticket_class == "tatkal")
   {
      charge = amount * 0.07;
   }
   else
   {
      charge = 0;
   }
   discount = discount1 + discount2 + discount3 + discount4;
   billing_amount = amount - discount + charge;
   printf("\n|---------------------------------------------Your Ticketing Details---------------------------------------------|");
   printf("\n|----------------------------------------------------------------------------------------------------------------|");
   printf("\n|Passenger's");
   printf("\t Contact");
   printf("\t\tMedical");
   printf("\t\tAddress");
   printf("\t\t\t\tAge");
   printf("\t\t Pass |");
   printf("\n| Name");
   printf("\t\t Number");
   printf("\t\tHistory");
   printf("\t\t\t\t\t\t\t\tStatus |");
   printf("\n|----------------------------------------------------------------------------------------------------------------|");
   printf("\n%s", name);
   printf("\t%s", contact);
   printf("\t\t%s", medical_history);
   printf("\t %s", address);
   printf("\t%d", age);
   printf("\t\t%s", pass_status);
   printf("\n----------------------------------------------------------------------------------------------------------------\n");
   printf("\n|----------------------------------------------------------------------------------------------------------------|");
   printf("\n|Boarding From");
   printf("\t Boarding To");
   printf("\t\tDate");
   printf("\t\tType of");
   printf("\t\tDiscount");
   printf("\tTotal Bill To |");
   printf("\n|\t\t\t\t\t\t\te-ticket");
   printf("\tOffered");
   printf("\t\tBe Payed |");
   printf("\n|----------------------------------------------------------------------------------------------------------------|");
   printf("\n\t%d", boarding_from);
   printf("\t\t%d", boarding_to);
   printf("\t\t%s", date);
   printf("\t%d", type);
   printf("\t\t%d", discount);
   printf("\t\t\t%d", billing_amount);
   printf("\n----------------------------------------------------------------------------------------------------------------");
   getch();
   return 0;
}