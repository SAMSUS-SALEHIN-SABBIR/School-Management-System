#include <stdio.h>
#include <stdlib.h>

//function prototype

void fees_details(int class_no);
void class_subject(int class_no);
void notice(int nOptn);



int main()
{
    //system("color fffff");
    //printf("\x1b[31mThis is red text\x1b[0m\n");// text colour
    //system("COLOR F2");

    //declaration Part
    int option,class_no,noticeOption;
    //char add[1000];
    //FILE *NoticeBoard;




    printf("                          Welcome To Our School Managment System\n\n\n\n\n\n\n");

    printf("1.  Registation.\n");
    printf("2.  Sarch Information.\n");
    printf("3.  Find Result.\n");
    printf("4.  Notice Board.\n");
    printf("5.  Simple Calculator.\n");
    printf("6.  Calculate G.P.A\n");
    printf("7.  Class Shedule.\n");
    printf("8.  Subject (Class Wise).\n");
    printf("9.  Fees Details.\n");
    printf("10. Exit.\n");
    printf("\n\n");


    while(1){

    printf("\n\nMenu : Choose Any Option : ");
    scanf("%d",&option);



    switch(option)
    {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            printf("\n\n1. Enter Notice.\n");
            printf("2. Show Notice.\n");
            printf("Choose Any option : ");
            scanf("%d",&noticeOption);
            if(noticeOption == 1){
            }
            //notice(noticeOption);
            //else if(noticeOption == 2)

            else
                printf("You Entered Wrong Number.\n");

            break;
        case 5:
            break;

        case 6:
            break;
        case 7:
            break;
        case 8:
            //printf("\033[2J\033[1;H"); // clear screen
            printf("\nPlease Enter a Class No : ");
            scanf("%d",&class_no);
            printf("\n\n");
            class_subject(class_no);
            break;
        case 9:
            //printf("\033[2J\033[1;H"); // clear screen
            printf("\nPlease Enter a Class No : ");
            scanf("%d",&class_no);
            printf("\n\n");
            fees_details(class_no);
            break;
        case 10:
            exit(0);
            break;
        default :
            printf("\n\nYou Entered Wrong Number.\n");
            printf("Please Try Again.\n");
            break;


    }



    }
    return 0;
}


// Fees Details Function


void fees_details(int class_no){
    switch(class_no){

        case 1:
            printf("Per Month 400 Taka.\n");
            break;
        case 2:
            printf("Per Month 450 Taka.\n");
            break;
        case 3:
            printf("Per Month 500 Taka.\n");
            break;
        case 4:
            printf("Per Month 550 Taka.\n");
            break;
        case 5:
            printf("Per Month 600 Taka.\n");
            break;
        case 6:
            printf("Per Month 650 Taka.\n");
            break;
        case 7:
            printf("Per Month 700 Taka.\n");
            break;
        case 8:
            printf("Per Month 750 Taka.\n");
            break;
        default :
            printf("\n\nYou Entered Wrong Number.\n");
            printf("Please Try Again.\n");
            break;


    }

}


// Class subject Funtion


void class_subject(int class_no){
printf("                 We Servies Class 1-8.\n");
    switch(class_no){

        case 1:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n");
            break;
        case 2:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n");
            break;
        case 3:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n4.  Genaral Science.\n");
            printf("5.  Bangladesh And Global Science.\n6.  Islam And Moral Education.\n");
            break;
        case 4:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n4.  Genaral Science.\n");
            printf("5.  Bangladesh And Global Science.\n6.  Islam And Moral Education.\n");
            break;
        case 5:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n4.  Genaral Science.\n");
            printf("5.  Bangladesh And Global Science.\n6.  Islam And Moral Education.\n");
            break;
        case 6:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n4.  Science.\n");
            printf("5.  Bangladesh And Global Science.\n6.  Islam And Moral Education.\n");
            printf("7.  Ananda Path.\n8.  Bangla Grammer.\n9.  Agricultural Stadies.\n");
            printf("10. Physicl Education And Health.\n11. ICT.\n11. Work And Life Oriented Education.\n");
            printf("12. Home Science.\n13. English Grammer And Composition.\n14. Arts And Crafts.\n");
            break;
        case 7:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n4.  Science.\n");
            printf("5.  Bangladesh And Global Science.\n6.  Islam And Moral Education.\n");
            printf("7.  Ananda Path.\n8.  Bangla Grammer.\n9.  Agricultural Stadies.\n");
            printf("10. Physicl Education And Health.\n11. ICT.\n11. Work And Life Oriented Education.\n");
            printf("12. Home Science.\n13. English Grammer And Composition.\n14. Arts And Crafts.\n");
            break;
        case 8:
            printf("1.  Bangla.\n2.  English.\n3.  Genaral Math.\n4.  Science.\n");
            printf("5.  Bangladesh And Global Science.\n6.  Islam And Moral Education.\n");
            printf("7.  Ananda Path.\n8.  Bangla Grammer.\n9.  Agricultural Stadies.\n");
            printf("10. Physicl Education And Health.\n11. ICT.\n11. Work And Life Oriented Education.\n");
            printf("12. Home Science.\n13. English Grammer And Composition.\n14. Arts And Crafts.\n");
            break;
        default :
            printf("\n\nYou Entered Wrong Number.\n");
            printf("Please Try Again.\n");
            break;


    }

}

/*void notice(int nOptn){

    char add[1000];
    FILE *NoticeBoard;

    NoticeBoard = fopen("Notice Option.txt","w");
    printf("Write Notice :\n\n\n");
    scanf("%[^\n]%*c", &add);
    fputs(add,NoticeBoard);

    fclose(NoticeBoard);
}
*/
