#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int lifeline_5050 = 1, lifeline_flip = 1, lifeline_poll = 1;

struct Question
{
    char question[200];
    char optionA[100], optionB[100], optionC[100], optionD[100];
    char answer;
};

void audiencePoll()
{
    printf("\n📊 Audience Poll Results:\n");
    printf("A - 10%%\nB - 20%%\nC - 55%%\nD - 15%%\n");
}

int main()
{
    int i, choice;
    char user_ans;
    int money_won[10] = {1000, 2000, 3000, 5000, 10000,
                         20000, 40000, 80000, 160000, 320000};

    struct Question q[10] = {
        {"Who is the father of C language?", "Dennis Ritchie", "James Gosling", "Bjarne Stroustrup", "Guido van Rossum", 'A'},
        {"Which planet is known as the Red Planet?", "Earth", "Mars", "Venus", "Jupiter", 'B'},
        {"Which gas do plants absorb?", "Oxygen", "Hydrogen", "Carbon Dioxide", "Helium", 'C'},
        {"Which is the national animal of India?", "Tiger", "Lion", "Elephant", "Cow", 'A'},
        {"Fastest land animal?", "Cheetah", "Horse", "Lion", "Deer", 'A'},
        {"Capital of Australia?", "Sydney", "Melbourne", "Canberra", "Perth", 'C'},
        {"Who invented Telephone?", "G. Marconi", "Alexander Graham Bell", "Newton", "Einstein", 'B'},
        {"1 byte = ?", "4 bits", "8 bits", "16 bits", "32 bits", 'B'},
        {"National game of India?", "Cricket", "Football", "Hockey", "Kabaddi", 'C'},
        {"Currency of Japan?", "Yen", "Dollar", "Euro", "Won", 'A'}}; // questions

    printf("\n===============================");
    printf("\n🎯 WELCOME TO KBC QUIZ GAME 🎯");
    printf("\n===============================\n");

    for (i = 0; i < 10; i++)
    {
        printf("\nQ%d: %s\n", i + 1, q[i].question);
        printf("A. %s\nB. %s\nC. %s\nD. %s\n",
               q[i].optionA, q[i].optionB, q[i].optionC, q[i].optionD);

        printf("\nEnter your answer (A/B/C/D) or choose Lifeline:\n");
        printf("5️⃣ 50-50 (%s)  |  6️⃣ Flip (%s)  |  7️⃣ Audience Poll (%s)\n",
               lifeline_5050 ? "Available" : "Used",
               lifeline_flip ? "Available" : "Used",
               lifeline_poll ? "Available" : "Used"); // lifelines

        scanf(" %c", &user_ans); // user input

        if (user_ans == '5' && lifeline_5050)
        {
            lifeline_5050 = 0;
            printf("\nUsing 50-50 Lifeline...\n");
            printf("Correct Answer + one wrong option remain visible!\n");

            printf("%c. %s\n", q[i].answer,
                   q[i].answer == 'A' ? q[i].optionA : q[i].answer == 'B' ? q[i].optionB
                                                   : q[i].answer == 'C'   ? q[i].optionC
                                                                          : q[i].optionD);

            printf("%c. (Wrong option)\n",
                   q[i].answer == 'A' ? 'B' : 'A'); //

            printf("\nEnter your final answer: ");
            scanf(" %c", &user_ans);
        } // 50-50 lifeline

        else if (user_ans == '6' && lifeline_flip)
        {
            lifeline_flip = 0;
            printf("\n🔄 Flip Lifeline Used! New Question is:\n");
            i++;
            continue;
        } // flip lifeline

        else if (user_ans == '7' && lifeline_poll)
        {
            lifeline_poll = 0;
            audiencePoll();
            printf("Enter your final answer: ");
            scanf(" %c", &user_ans);
        } // poll lifeline

        if (toupper(user_ans) == q[i].answer)
        {
            printf("\n✔ Correct! You won ₹%d\n", money_won[i]);
        } // answer check
        else
        {
            printf("\n❌ Wrong Answer! Game Over!\n");
            printf("Total Amount Won: ₹%d\n", i == 0 ? 0 : money_won[i - 1]);
            return 0;
        } // wrong answer , game over
    }

    printf("\n🎉 Congratulations! You completed KBC!\n");
    printf("🏆 Total Prize Money: ₹%d\n", money_won[9]);

    return 0;
}