#include <stdio.h>



int main() {


char isim[] = "mert";
char soyad[] = "INSEL";
int ID = 123456789;
printf("\nWorkshop 1 Part-1");
printf("\n=================\n\n");
printf("I'm displaying this using the 'printf' stdio (standard input output) library function!\n\n");
printf("Dear teacher,\n\n");
printf("\tI promise I will work hard from this day onward.\n");
printf("\tI acknowledge that practice is extremely important,\n");
printf("\tso I will do all workshops, quizzes, and assignments.\n\n");
printf("Sincerely,\n\n%s %s\nStudent ID# %d\n",isim,soyad,ID);

return 0;
}

