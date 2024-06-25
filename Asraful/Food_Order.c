#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<string.h>
#include<math.h>



void contacts_information();     //for Contact information
void messeges();                //for messege function
void exit1();                  //for exit function in case 4;


//Food Order function
struct order{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
            }
 p[1502424509];
int order_count = 0, served_count = 0, waiting_now = 0;

int order ()
{
    int n, in, qu;
    //printf ("please enter your name: ");
    //gets (p[order_count].name);
    p[order_count].order_number = 1502424509+order_count;
    items();
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;

    level:
    printf ("How many items you want to order? ");
    scanf ("%d", &n);

    getchar ();
    while (n--){
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &in);
        getchar();
        switch(in){
    case 1 :
    {
        printf ("Enter the size of burger: 1. 200gm  2. 300gm\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (180*qu);
        break;
    }
    case 2 :
    {
        printf ("Enter the size of Chicken Pizza: 1. 12inch  2. 14inch  3. 16inch\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (750*qu);

        else if (i==2) p[order_count].cost += (975*qu);

        else  p[order_count].cost += (1250*qu);

        break;
    }
    case 3 :
    {
        printf ("Enter the amount of chicken: 1. 1 pcs  2. 4 pcs  3. 10 pcs\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (85*qu);

        else if (i==2) p[order_count].cost += (320*qu);

        else  p[order_count].cost += (790*qu);

        break;
    }
    case 4 :
    {
        printf ("Enter the size of grilled chicken: 1. quarter  2. half  3. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (70*qu);

        else if (i==2) p[order_count].cost += (140*qu);

        else  p[order_count].cost += (250*qu);

        break;
    }
    case 5 :
    {
        printf ("Enter the size of Noodles: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (250*qu);

        break;
    }
    case 6 :
    {
        printf ("Enter the size of pasta: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (120*qu);

        else p[order_count].cost += (240*qu);

        break;
    }
    case 7 :
    {
        printf ("250 mg of OREO SHAKE\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (180*qu);
        break;
    }
    case 8 :
    {
        printf ("250 mg of Cold Coffee\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (65*qu);
        break;
    }
    case 9 :
    {
        printf ("250 mg of Cappuccino\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (70*qu);
        break;
    }
    case 10 :
    {
        printf ("Enter the size of Coke: 1. 250mg  2. 500mg\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (20*qu);

        else p[order_count].cost += (30*qu);
        break;
    }
    default :
    {
        printf ("Invalid selection try again\n");
        n++;
    }
        } //Swtch
    }//While
    char temp;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level;
    printf ("\nNumber of food ordered %d\n", p[order_count].number_of_food);
    printf ("\nThank you %s for your order. Your bill is %dtk.\nPlease wait while we prepare the food.\n\n", p[order_count].name, p[order_count].cost);
    order_count ++;
};
int receive ()
{
    if (order_count==0){
        printf ("Please order first\n");
        return;
    }

    else if (served_count == order_count) {
        printf ("All order served\n");
        return;
    }

    printf ("Order no. %d by %s is ready\n", p[served_count].order_number, p[served_count].name);
    printf ("Enjoy your meal\n\n");
    served_count++;
}
int display ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].order_number);
}
void items ()
{

printf("\n");
printf("..................................MENU....................................\n");

FILE *file;
    file = fopen("Food_items.txt", "r");
    if (file != NULL)
    {
        char c;
        while( (c=fgetc(file))!=EOF)
            putchar(c);
        fclose(file);
    }

}











//---------------------------------------------------------------------------------------------------------------------------------------

//main function;

int main(void)
{

   printf("\a");


    printf("#####   #####  ####### \n");
    printf("#     # #     # #      \n");
    printf("#       #       #      \n");
    printf("#        #####  #####  \n");
    printf("#             # #      \n");
    printf("#     # #     # #      \n");
    printf(" #####   #####  #######\n");

    printf("wait 5 sec to vanish the above text \n");
    sleep(5);
    system("cls");

   int i,choice,menu;

   int number;
   int DD;
   int MM;
   int YYYY;
   int nid;

   char name[20];
   char email[25];
   char address[200];
   char password[32];
   char cpassword[32];
   int messege;

   char email2[20];
   char password2[32];
   int cp,im;
   char cpp[32];

    do
    {
        printf("\n\n\tWelcome to The Cherry Blossom!\n");
        printf("\n");
        printf("Select an option from the main menu:\n");
        printf("1. Create a new account\n2. Log in to my account\n3. Exit\n\n");
        printf("Answer: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("*****************************************************************************************************\n");
            printf("Enter your full name: ");
            scanf("%s", name);
            fflush(stdin);

            printf("Enter your valid phone number: ");
            scanf("%d", &number);
            fflush(stdin);

            printf("Date of birth (DD): ");
            scanf("%d", &DD);
            fflush(stdin);
            printf("Month of birth (MM): ");
            scanf("%d", &MM);
            fflush(stdin);
            printf("Year of birth (YYYY): ");
            scanf("%d", &YYYY);
            fflush(stdin);

            printf("Enter a valid email address: ");
            scanf("%s", email);
            fflush(stdin);

            printf("Enter your home address (must include road no, house no): ");
            scanf("%s", address);
            fflush(stdin);

            printf("Your NID number: ");
            scanf("%d", &nid);
            fflush(stdin);

            int payment;
            int account;
            printf("Payment deal on: \n1.Bkash \n2.Nagad \n3.Upay \n4.Rocket \n5.Debit/Credit card \n");
            printf("=");
            scanf("%d",&payment);
            fflush(stdin);
            switch(payment)
            {
            case 1:
                printf("Enter Your Bkash account: ");
                scanf("%d",&account);
            break;
            case 2:
                printf("Enter Your nagad account: ");
                scanf("%d",&account);
            break;
            case 3:
                printf("Enter Your upay account: ");
                scanf("%d",&account);
            break;
            case 4:
                printf("Enter Your rocket account: ");
                scanf("%d",&account);
            break;
            case 5:
                printf("Enter Your Debit/credit account: ");
                scanf("%d",&account);
            break;

            default:
                printf("You dialed wrong");
            }


            printf("Set password (minimum 8 characters): ");
            scanf("%s", password);
            fflush(stdin);

            printf("Confirm password: ");
            scanf("%s", cpassword);
            fflush(stdin);

            if(strcmp(password, cpassword) == 0)
            {
                printf("\nYour account has been created successfully!\n\t Thank you. \n \n \n");
            }

           else
          {
                printf("Password does not match! \n \n");
          }

           break;


        case 2:
        printf("Enter your email address: ");
        scanf("%s",&email2);
        fflush(stdin);
        printf("Enter your Password: ");
        scanf("%s",&password2);
        fflush(stdin);

        if(strcmp(email,email2)==0 && strcmp(cpassword,password2)==0 )   //strcmp= compair with 2 types password
        {
            printf("\n\n*****************************************************************************************************\n");
            printf("\n\n Welcome %s.\n\n",name);
            printf("Select Your menu: \n");
            printf("1.Order Food \n2.Messeges \n3.Contacts & Information \n4.EXIT\n");
            printf("Answer: ");
            scanf("%d",&menu);

            switch(menu)
            {

            case 1:
                    printf ("\t\t     Welcome To Our Restaurant   \n");
        while (1){
        printf ("1. Order\n2. Serve\n3. Display \n4. Exit the program\n");

        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                receive();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                break;
               exit(0);
            }

        }
    }
              break;


            case 2:
                messeges();

             break;


            case 3:
                contacts_information();

                break;


            case 4:
                    exit1();

                break;

            default:
                printf("You dialed wrong");
            }

        }
        else{
            printf("\nYour email address or password is wrong!Please try again. ");
        }
     break;

    case 3:
                printf("Exiting program...\n");
                 printf("****\n");
                printf("***\n");
                printf("**\n");
                printf("*\n\n");
                printf("Press any key to continue.");
                exit(0);

   }

  }
  while (choice != 3);



    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------------------










//under the function;

void contacts_information()
{

    FILE *file3;
    file3 = fopen("contracts.txt", "r");
    if (file3 != NULL)
    {
        char c1;
        while( (c1=fgetc(file3))!=EOF)
            putchar(c1);
        fclose(file3);
    }

}


// messege function;
void messeges()
{
    int mc,cm;
    char subj,boxs;
    for(int s=1;s;s++)
                {
                printf("********************************");
                printf("1.New Messege\n2.Inbox\n3.Drafts\n4.EXIT\n=>");
                scanf("%d",&mc);
               if(mc==1)
               {
                 printf("Subject:");
                 scanf("%s",&subj);
                 fflush(stdin);
                 printf("=>");
                 scanf("%s",&boxs);
                 fflush(stdin);
                 printf("Send to:\n");
                 printf("1.Authority\n2.Delivary Man\n3.Kitchen\n=>");
                 scanf("%d",&cm);
                 fflush(stdin);
                 if(cm==1 || cm==2 || cm==3)
               {
                  printf("Send Succesfully");
               }

             }
               else if(mc==2)
             {
                printf("1.Welcome from Hasna Food\n");
                printf("2.Token No:2158963...\n");
                printf("3.Ajker offer...\n");
                printf("4.10%Discount for Barger with Hot chillies...\n");
                printf("5.25%discount for today..\n");
                 printf("6.Your Account is activated...\n");
             }
           else if(mc==3)
          {
            printf("No drufts\n");
          }

           else if(mc==4)
          {
            //break;
            exit(0);
          }

          else{
            printf("Invalid Code");
            }

        }



};

void exit1()     //exit function for case 4;
{
printf("Exiting program...\n");
                printf("****\n");
                printf("***\n");
                printf("**\n");
                printf("*\n\n");
                printf("Press any key to continue.");
                exit(0);
};


                //The End...


