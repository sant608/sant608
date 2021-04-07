#include <stdio.h>
#include <string.h>
#include <time.h>
int main()
{
  char username[20];
  char match[20]; 
  char password[20];
  char pass[20]; 
  int d,e,l,m,i;
  printf("Note:-if you entered username or password wrong 3 time then the program will quit\n");
  printf("Create your userame\nhint:-you can only use string (@),(_),and number for username\n");
  printf("|-------------------|\n");
  gets(& username);
  printf("|-------------------|\n");
  printf("Create your password hint:-you can only use string (@),(_),and number for password\n");
  gets(& password);
  printf("\nNow login to open the main programm\n\n\n");
  printf("\nenter the username again\n");
  gets(& match);
  printf("enter the password\n");
  gets(& pass);
  
 
  d=strcmp(username,match);
  if (d!=0)
  {
      
     for(i=0;i<=2;i++)
  {
      printf("username not matched please reneter it\n");
      scanf("%s",match);
      d=strcasecmp(username,match);
      if(d==0)
      {
        l=5;
          printf("username matched succesfull\n");
          break;
      }
      else
      continue;
      
  } 
  }
  else
  {
    l=5;
      printf("username matched \n");
  }
  e=strcmp(password,pass);
  if (e!=0)
  {
      for(i=0;i<=2;i++)
      {
          printf("pasword not matched please reenter it\n");
          scanf("%s",pass);
          e=strcmp(password,pass);
          if (e==0)
          {
            m=5;
              printf("password matched\n");
              break;
          }
        else
        {
            continue;
        }          
      }
  }
  else
  {
    m=5;
      printf("password matched\n");
  }
  
  

e=l&m;
// printf(e);
if(e==5)
{
  printf("starting programm....\n \n"); //sleep(0.3);
  printf("now your are entering in main program\n"); sleep(2);
printf("creating safe workplace\n"); sleep(1);
printf("welcome to the test taker application!!!!\n");
printf("________________🙏🙏🙏🙏🙏🙏🙏🙏____________ \n\n");

int score=0,total,answer,s;
  char a[20];
  // intro
 printf("what's you name dear\n");
    printf("TIP:-you can  use space while writing your name\n");
 scanf("%s",a);
 printf("you have seen many quiz taker website with graphics or(g.u.i)\nbut i made tesxt based test taker\nit is only sample i thaought if i geave many questions you will bored so let's enjoy\n\n"); sleep(5);
 printf("disclaimer::--this is a quiz game\n\n");
 printf("every timw you will geaven 4 option \nmaybe sometime 2 but you have to give input only numbers ok!!\n\n");
 printf("rule:- don't geave input anything think and then write\n\n");
 printf("the will take your little time but this program is interesting 😉😉\n\n\n");
 printf("________________________________________________________________________👍👍👍👍👍👍👍👍\n\n");
 printf("let's play a gameof quiz  %s\n",a);
 printf("question=1:-\n");
 printf("1.Who invented C Language.?\n");
 printf("options:-\n");
 printf("1.denis ritchie\n");
 printf("2.elon musk\n");
 printf("3.mukesh ambani\n");
 printf("4.charles babbage\n"); 
 scanf("%d",& answer);
 // processing that the given answer is correct or not or not in range and then it displays
 if(answer==1)
 {
   score=score+1;
   printf("correct answer\n\n");
 } 
else if(answer==2)
{
  printf("incorrect\n\n");
} 
else if(answer==4)
{
  printf("incorrect\n\n");
} 
else if(answer==3)
{
  printf("incorrect\n");
} 
else
{
  printf("invalid choice\n\n");
}
 
  printf("question 2:-\n");
 printf("2.in c language  int is not a data type\n");
 printf("options:-\n");
 printf("1.true\n");
 printf("2.false\n"); 
 scanf("%d",& answer);
 if(answer==2)
 {
   score=score+1;
   printf("correct answer\n\n");
 } 
 else if(answer==1)
{
  printf("incorrect\n\n");
} 

else 
{
  printf("invalid choice\n\n");
} 

printf("question 3:-\n");
 printf("3.#include <stdio.h>\n");
  printf("void main()\n");
    printf("{\n");
        printf("int x = 5;\n");
        printf("if (true);\n");
            printf("hello\n");
   printf(" }\n");
 printf("options:-\n");
 printf("1.30\n");
 printf("2.20\n");
 printf("3.runtime error\n");
 printf("4.compile time error\n"); 
 scanf("%d",& answer);
 if(answer==2)
 {
   score=score+1;
   printf("correct answer\n\n");
 } 
 else if(answer==1)
{
  printf("incorrect\n\n");
} 
else if(answer==3)
{
  printf("incorrect\n\n");
} 
else if(answer==4)
{
  printf("incorrect\n\n");
} 
else
{
  printf("invalid choice\n");
}
printf("question 4:-\n");
 printf("4.i) int var_9 = 1;");
printf("ii) int 9_var = 2;\n");
printf("iii) int _ = 3;\n");
 printf("options:-\n");
 printf("1.Both i) and iii) are valid.\n");
 printf("2.BOnly i) is valid.\n");
 printf("3.Both i) and ii) are valid.\n");
 printf("4.all are valid\n"); 
 scanf("%d",& answer);
 if(answer==1)
 {
   score=score+1;
   printf("correct answer\n\n");
 } 
 else if(answer==2)
{
  printf("incorrect\n\n");
} 
else if(answer==3)
{
  printf("incorrect\n\n");
} 
else if(answer==4)
{
  printf("incorrect\n\n");
} 
else 
{
  printf("invalid choice\n\n");
} 
printf("question 5:-\n");
 printf("5.can we made main in c multiple times in a program\n");
 printf("options:-\n");
 printf("1.yes\n");
 printf("2.no\n");
 scanf("%d",& answer);
 if(answer==2)
 {
   score=score+1;
   printf("correct answer\n\n");
 } 
 else if(answer==1)
{
  printf("incorrect\n\n");
} 
else 
{
  printf("invalid choice\n\n");
}  
 
// printing total marks
total=score;
  printf("%s your total score is %d out of %d\n",a,total,5);

printf("do you want to see answers then press 1 \n");
scanf("%d",&s);
if(s==1)
{
  // displaying answer of question
printf("question |answer\n");
printf("|1.    |       1|\n");
printf("|2.    |       2|\n");
printf("|3.    |       2|\n");
printf("|4.    |       1|\n");
printf("|5     |       2|\n");


  
}
else
{
  printf("invalid choice terminateing program \n\n\n");
  printf("did you liked the program??\nsee you next time!!");
}


}
else
{
  printf("quitting from program!!!!\n");
    printf("if you want to see the main program then run again\n");
}
  } 