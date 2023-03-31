// This program calculates and analyzes a budget based on user input
#include<stdio.h>
int main()
{

// Declare variables
// Prompt user to enter current MPESA balance
    int MPESA_balance;
    printf("Enter your current M-PESA balance: ");
    scanf("%d",&MPESA_balance);
    // Display user's current MPESA balance
    printf("Your current M-PESA balance is %d shilings\n\n",MPESA_balance);

    // Prompt user to enter food expense per day and calculate weekly food expense
    int Food_expense;
    printf("Enter your food expense per day: ");
    scanf("%d",&Food_expense);
    printf("Your food expense on weekly basis is %d shillings\n\n",Food_expense*7);

    // Prompt user to enter travel expenses for midweek and weekend and calculate total travel expense for the week
    int Travel_expense_a, Travel_expense_b;
    printf("Enter your travel expense for one day during the midweek: ");
     scanf("%d",&Travel_expense_a);
    printf("Enter your travel expense for one day of the weekend: ");
    scanf("%d",&Travel_expense_b);
     int x,y; // number of days user travels during the week and weekend
    printf("Enter the number of days you travel on a weekday: ");
    scanf("%d",&x);
     printf("Enter the number of days you travel on a weekend: ");
    scanf("%d",&y);
    int Total_travel_expense=(Travel_expense_a*x)+(Travel_expense_b*y);
    printf("Your total travel expense in one week is %d shillings\n\n",Total_travel_expense);

    // Prompt user to enter whether they have other expenses to add
    int Other_expenses;
    printf("Are there any other expenses that need to be covered on your budget?(If answer is 'yes' press '1' and if answer is 'no' press '2')");
    scanf("%d",&Other_expenses);


     // If user has other expenses
     if(Other_expenses==1)
    {
    int num_of_other_expenses; // number of other expenses user has
    printf("Enter the number of other expenses: ");
    scanf("%d",&num_of_other_expenses);
    int i;
    char datal[20];

    // Prompt user to enter number of other expenses and the expenses themselves
    printf("Please enter these other expenses that you have:\n");
    for (i = 0; i <num_of_other_expenses ; i++) {
        scanf("%s", &datal);

    }

    // Prompt user to enter total price of other expenses and calculate total expenses
     int Total_expense_others;
    printf("Enter the total price of these other expenses that you mentioned: ");
    scanf("%d",&Total_expense_others);


     int Total_expenses_1=Food_expense+Total_travel_expense+Total_expense_others;
    int savings_1=MPESA_balance-Total_expenses_1;
    int deficit_1=Total_expenses_1-MPESA_balance;

     printf("All your total expenses add up to %d shillings.\n\n",Total_expenses_1);

        if(MPESA_balance>Total_expenses_1)
            {
                printf("Hurray! You have a budget surplus of %d shillings. Either you can decide to save it in your MSHWARI or to do anything you desire",savings_1);
            }
        if(MPESA_balance<Total_expenses_1)
             {
                 printf("Ooops! It seems like you have a budget deficit of %d shillings. We may have to remove a few expenses from your budget.",deficit_1);
                 printf("Maybe you could reduce your food expenses or your travel expenses and try again to see if our budget is in line with your expenses.");
             }
        if(MPESA_balance==Total_expenses_1)
             {
               printf("Perfect! Your budget fits exactly into your MPESA balance. To avoid any inconveniences do not spend than you had mentioned.");
             }
    }

    if(Other_expenses==2)
    {
        int Total_expenses_2=Food_expense+Total_travel_expense;
        int savings_2=MPESA_balance-Total_expenses_2;
        int deficit_2=Total_expenses_2-MPESA_balance;

         printf("All your total expenses add up to %d shillings.\n\n",Total_expenses_2);

            if(MPESA_balance>Total_expenses_2)
            {
                printf("Hurray! You have a budget surplus of %d shillings. Either you can decide to save it in your MSHWARI or to do anything you desire",savings_2);
            }
             if(MPESA_balance<Total_expenses_2)
             {
                 printf("Ooops! It seems like you have a budget deficit of %d shillings. We may have to remove a few expenses from your budget.",deficit_2);
                 printf("Maybe you could reduce your food expenses or your travel expenses and try again to see if our budget is in line with your expenses.");
             }
             if(MPESA_balance==Total_expenses_2)
             {
               printf("Perfect! Your budget fits exactly into your MPESA balance. To avoid any inconveniences do not spend than you had mentioned.");
             }
    }

     if(Other_expenses!=1&&Other_expenses!=2)
    {
        printf("Sorry you have entered the wrong input. Input can only be either '1' if your answer is 'yes' or '2' if your answer is 'no'\n");
        printf("Please try again by entering the correct input");
    }


    return 0;
}
