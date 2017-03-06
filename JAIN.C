#include<stdio.h>
#include<conio.h>
int c=0,h=0,d=0;
long int am;
char a[100];
void rules();
int q16();
void check();
void main()
{
int z,j,q=0,f=0,l;
char i;
clrscr();
printf("\n\t\t\tCHANDIGARH UNIVERSITY\n\n\n\n\n\t\t\tWelcome to 'MILLIONAIRES QUIZ'\n\nPRESENTED BY:\n\nPuneet Goyal\nMohit Jain\nJasbir Singh\n\n\n\t\t\tEnter your name=");
gets(a);
clrscr();
rules();
start1:
clrscr();
start01:
if(q==1)
{
printf("You got Rs.0");
goto end11;
}
if(d!=3)
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ1. How many keywords are there in C language?\n1. 32\t2. 28\n3. 30\t4. 33\n");
else
{
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ1. How many keywords are there in C language?\n1. 32\n\t4. 33");
}
scanf("%c",&i);
switch(i)
{
case '1':printf("\nCorrect answer\n");
c++;
break;
case '2':printf("\nWrong answer\nCorrect answer is 1\n");
goto end;
case '3':printf("\nWrong answer\n");
goto end;
case '4':printf("\nWrong answer\n");
goto end;
case 'I': clrscr();
rules();
goto start1;
case 'F':
if(f==0)
{
f++;
clrscr();
z=q16();

if(z==3)
{
c++;
goto end1;
}
else
goto end;
}
else
{
f=2;
goto start01;
}
case 'Q': q++;
goto start01;
case 'H':
if(h==0)
{
h++;
d=3;
goto start1;
}
else
{
d=1;
goto start01;
}
default:
printf("\n\nWrong input\nMake sure capslock is ON");
clrscr();
goto start1;
}
end1:
d=0;
printf("\n\n\t\t\t\tWell Done\n\t\t\t\tYou got Rs.1000\n\n\nPress any key\n\n");
scanf("%d",&l);
if(q==1)
goto end11;
start2:
clrscr();
if(d==1||f==2)
{
f=4;
printf("Already used\n\n\n\n");
}
start02:
if(d!=3)
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ2. An array of pointers is same as\n1.pointer to array\t2. pointers to pointers\n3. pointer to function\t4. pointer to structure\n");
else
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ2. An array of pointers is same as\n1.pointer to array\t2. pointers to pointers\n");
scanf("%c",&i);
switch(i)
{
case '1':printf("\nWrong answer\nCorrect answer is 2\n");
goto end;
case '2':printf("\nCorrect answer\n");
c++;
break;
case '3':printf("\nWrong answer\nCorrect answer is 2\n");
goto end;
case '4':printf("\nWrong answer\nCorrect answer is 2\n");
goto end;
case 'I': clrscr();
rules();
goto start2;
case 'F':
if(f==0)
{
f++;
clrscr();
z=q16();
if(z==3)
{
c++;
goto end2;
}
else
goto end;
}
else
{
clrscr();
f=2;
printf("Already used");
goto start2;
}
case 'Q': q++;
goto end1;
case 'H':
if(h==0)
{
h++;
d=3;
goto start2;
}
else
{
d=1;
goto start2;
}
default:
printf("\n\nWrong input\nMake sure capslock is ON");
goto start2;
}
end2:
d=0;
printf("\n\n\t\t\t\tWell Done\n\t\t\t\tYou got Rs.5000\nYou are now safe upto this level\n\n\nPress any key\n\n");
scanf("%d",&l);
if(q==1)
goto end11;
start3:
clrscr();
if(d==1||f==2)
{
f=4;
printf("Already used\n\n\n\n");
}
if(d!=3)
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ3. A variable which is visible only in the function is called?\n1. static variable\t2. auto variable\n3. external variable\t4. local variable\n");
else
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ3. A variable which is visible only in the function is called?\n\n3. external variable\t4. local variable\n");
scanf("%c",&i);
switch(i)
{
case '1':printf("\nWrong answer\nCorrect answer is 4\n");
goto end;
case '2':printf("\nWrong answer\nCorrect answer is 4\n");
goto end;
case '3':printf("\nWrong answer\nCorrect answer is 4\n");
goto end;
case '4':printf("\nCorrect answer\n");
c++;
break;
case 'I': clrscr();
rules();
goto start2;
case 'F':
if(f==0)
{
f++;
clrscr();
z=q16();
if(z==3)
{
c++;
goto end3;
}
else
goto end;
}
else
{
clrscr();
f=2;
goto start3;
}
case 'Q': q++;
goto end2;
case 'H':
if(h==0)
{
h++;
d=3;
goto start3;
}
else
{
d=1;
goto start3;
}
default:
printf("\n\nWrong input\nMake sure capslock is ON");
goto start3;
}
end3:
d=0;
printf("\n\n\t\t\t\tWell Played\n\t\t\t\tYou got Rs.10000\n\n\nPress any key\n\n");
scanf("%d",&l);
if(q==1)
goto end11;
start4:
clrscr();
if(d==1||f==2)
{
f=4;
printf("Already used\n\n\n\n");
}
if(d!=3)
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ4. Which of following is false statement in C?\n1. keyword can be used as a variable name\n2. variable name can contain a digit\n3.variable name donot contain blank space\n4. capital letters can be used in a variable name\n");
else
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ4. Which of following is false statement in C?\n1. keyword can be used as a variable name\n\n3.variable name donot contain blank space\n");
scanf("%c",&i);
switch(i)
{
case '1':printf("\nCorrect answer\n");
c++;
break;
case '2':printf("\nWrong answer\nCorrect answer is 1\n");
goto end;
case '3':printf("\nWrong answer\nCorrect answer is 1\n");
goto end;
case '4':printf("\nWrong answer\nCorrect answer is 1\n");
goto end;
case 'I': clrscr();
rules();
goto start4;
case 'F':
if(f==0)
{
f++;
clrscr();
z=q16();
if(z==3)
{
c++;
goto end4;
}
else
goto end;
}
else
{
clrscr();
f=2;
goto start4;
}
case 'Q': q++;
goto end3;
case 'H':
if(h==0)
{
h++;
d=3;
goto start4;
}
else
{
d=1;
goto start4;
}
default:
printf("\n\nWrong input\nMake sure capslock is ON");
goto start4;
}
end4:
d=0;
printf("\n\n\t\t\t\tWell Played\n\t\t\t\tYou got Rs.20000\n\n\nPress any key\n\n");
scanf("%d",&l);
if(q==1)
goto end11;
start5:
clrscr();
if(d==1||f==2)
{
f=4;
printf("Already used\n\n\n\n");
}
if(d!=3)
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ5. The perfomance of cache memory is frequently measured in terms of quality called\n1. bit ratio\t2. nor ratio\n3.no ratio\t4. hit ratio\n");
else
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ5. The perfomance of cache memory is frequently measured in terms of quality called\n1. bit ratio\n\t4. hit ratio\n");
scanf("%c",&i);
switch(i)
{
case '1':printf("\nWrong answer\nCorrect answer is 4\n");
goto end;
case '2':printf("\nWrong answer\nCorrect answer is 4\n");
goto end;
case '3':printf("\nWrong answer\nCorrect answer is 4\n");
goto end;
case '4':printf("\nCorrect answer\n");
c++;
break;
case 'I': clrscr();
rules();
goto start5;
case 'F':
if(f==0)
{
f++;
clrscr();
z=q16();
if(z==3)
{
c++;
goto end5;
}
else
goto end;
}
else
{
clrscr();
f=2;
goto start5;
}
case 'Q': q++;
goto end4;
case 'H':
if(h==0)
{
h++;
d=3;
goto start5;
}
else
{
d=1;
goto start5;
}
default:
printf("\n\nWrong input\nMake sure capslock is ON");
goto start5;
}
end5:
d=0;
printf("\n\n\t\t\t\tWell Done\n\t\t\t\tYou got Rs.50000\nYou are now safe upto this level\n\n\nPress any key\n\n");
scanf("%d",&l);
if(q==1)
goto end11;
start6:
clrscr();
if(d==1||f==2)
{
f=4;
printf("Already used\n\n\n\n");
}
if(d!=3)
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ6. Group of characters that has same meaning as a unit is known as\n1. file \t2. field\n3. record\t4. word\n");
else
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ6. Group of characters that has same meaning as a unit is known as\n\t2. field\n3. record\n");
scanf("%c",&i);
switch(i)
{
case '1':printf("\nWrong answer\nCorrect answer is 2\n");
goto end;
case '2':printf("\nCorrect answer\n");
c++;
break;
case '3':printf("\nWrong answer\nCorrect answer is 2\n");
goto end;
case '4':printf("\nWrong answer\nCorrect answer is 2\n");
goto end;
case 'I': clrscr();
rules();
goto start6;
case 'F':
if(f==0)
{
f++;
clrscr();
z=q16();
if(z==3)
{
c++;
goto end6;
}
else
goto end;
}
else
{
clrscr();
f=2;
goto start6;
}
case 'Q': q++;
goto end5;
case 'H':
if(h==0)
{
h++;
d=3;
goto start6;
}
else
{
d=1;
goto start6;
}
default:
printf("\n\nWrong input\nMake sure capslock is ON");
goto start6;
}
end6:
d=0;
printf("\n\n\t\t\t\tWell Done\n\t\t\t\tYou got Rs.100000\n\n\nPress any key\n\n");
scanf("%d",&l);
if(q==1)
goto end11;
start7:
clrscr();
if(d==1||f==2)
{
f=4;
printf("Already used\n\n\n\n");
}
if(d!=3)
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ7. The program which are as permanent as hardware and stored in ROM is known as\n1. hardware\t2. software\n3. firmware\t4. ROMware\n");
else
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ7. The program which are as permanent as hardware and stored in ROM is known as\n1. hardware\n3. firmware\n");
scanf("%c",&i);
switch(i)
{
case '1':printf("\nWrong answer\nCorrect answer is 3\n");
goto end;
case '2':printf("\nWrong answer\nCorrect answer is 3\n");
goto end;
case '3':printf("\nCorrect answer\n");
c++;
break;
case '4':printf("\nWrong answer\nCorrect answer is 3\n");
goto end;
case 'I': clrscr();
rules();
goto start7;
case 'F':
if(f==0)
{
f++;
clrscr();
z=q16();
if(z==3)
{
c++;
goto end7;
}
else
goto end;
}
else
{
clrscr();
f=2;
goto start7;
}
case 'Q': q++;
goto end6;
case 'H':
if(h==0)
{
h++;
d=3;
goto start7;
}
else
{
d=1;
goto start7;
}
default:
printf("\n\nWrong input\nMake sure capslock is ON");
goto start7;
}
end7:
d=0;
printf("\n\n\t\t\t\tVery well Playing\n\t\t\t\tYou got Rs.500000\n\n\nPress any key\n\n");
scanf("%d",&l);
if(q==1)
goto end11;
start8:
clrscr();
if(d==1||f==2)
{
f=4;
printf("Already used\n\n\n\n");
}
if(d!=3)
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ8. What is output of following code:\nvoid main()\n{\nint z;\nchar a[]='alien';\nchar b[]='zombie';\nz=strcmp(b,a);\ncout<<z;\ngetch();\n}\n1. 5\t2. 11\n3. 25\t4. 18\n");
else
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress F to Flip the question\nPress H to use 50-50\n\nQ8. What is output of following code:\nvoid main()\n{\nint z;\nchar a[]='alien';\nchar b[]='zombie';\nz=strcmp(b,a);\ncout<<z;\ngetch();\n}\n1. 5\n3. 25\n");
scanf("%c",&i);
switch(i)
{
case '1':printf("\nWrong answer\nCorrect answer is 3\n");
goto end;
case '2':printf("\nWrong answer\nCorrect answer is 3\n");
goto end;
case '3':printf("\nCorrect answer\n");
c++;
break;
case '4':printf("\nWrong answer\nCorrect answer is 3\n");
goto end;
case 'I': clrscr();
rules();
goto start8;
case 'F':
if(f==0)
{
f++;
clrscr();
z=q16();
if(z==3)
{
c++;
goto end8;
}
else
goto end;
}
else
{
clrscr();
f=2;
goto start8;
}
case 'Q': q++;
goto end7;
case 'H':
if(h==0)
{
h++;
d=3;
goto start8;
}
else
{
d=1;
goto start8;
}
default:
printf("\n\nWrong input\nMake sure capslock is ON");
goto start8;
}
d=0;
end8:
end:
if(c==1||c==0)
printf("\nYou got Rs.0");
else if(c==2||c==3||c==4)
printf("\nYou got Rs.5000");
else if(c==5||c==6||c==7)
printf("\nYou got Rs.50000");
else
printf("\n\n\t\t\t\tCongratulations\n\t\t\t\tYou won Rs.1000000\n\t\t\t\tYou are millionaire now\n");
end11:
if(c==0)
am=0;
else if(c==1)
am=1000;
else if(c==2)
am=5000;
else if(c==3)
am=10000;
else if(c==4)
am=20000;
else if(c==5)
am=50000;
else if(c==6)
am=100000;
else if(c==7)
am=500000;
else
am=1000000;
printf("\n\nPress any key\n");
scanf("%d",&l);
check();
getch();
}
void check()
{
clrscr();
printf("\n\n\n\n**********************************************************\n*  Pay %s_________________________________\t\t *\n*  ________________________________ Or Bearer \t\t *\n*  Rupees________________________________\t\t *\n*  _________________________________     Rs. %ld \t *\n*  A/c no. 0455015999012137\t\t\t\t *\n*\t\t\t\t\t\t\t *\n*  ABC Bank\t\t\t\t\t\t *\n*  bank limited\t\t\t\tMohit Jain \t *\n*\t\t\t\t\t\t\t *\n*  \t\t||00000000 |000 0000||\t\t\t *\n********************************************************** ",a,am);
}
int q16()
{
int j=0;
char i;
clrscr();
start1:
if(d==1)
printf("Already used");
if(d!=3)
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress H to use 50-50\n\nQ-Which of the following is more appropriate for reading in a multi word string?\n1. printf();\t2. scanf();\n3. gets();\t4. puts();\n");
else
printf("\nPress 1,2,3,4 to choose correct answer\nPress I to view rules\nPress Q to quit anytime\nPress H to use 50-50\n\nQ-Which of the following is more appropriate for reading in a multi word string?\n\n3. gets();\t4. puts();\n");
scanf("%c",&i);
switch(i)
{
case '1':printf("\nWrong answer\nCorrect answer is 3\n");
break;
case '2':printf("\nWrong answer\nCorrect answer is 3\n");
break;
case '3':printf("\nCorrect answer\n");
c++;
j=3;
break;
case '4':printf("\nWrong answer\nCorrect answer is 3\n");
break;
case 'I': clrscr();
rules();
printf("\n\n\nPress 1 to go back");
goto start1;
case 'H':
if(h==0)
{
h++;
d=3;
goto start1;
}
else
{
d=1;
goto start1;
}
default:printf("\n\nWrong input\nMake sure capslock is ON");
clrscr();
goto start1;
}
return j;
}
void rules()
{
int i;
printf("\t\t\tHere are the rules of game\n\n1. You will have to answer till you give the wrong answer\n2. You can quit the game anytime.\n3. You can use a lifeline once in a whole game\n4. Question 2 & Question 5 are the safe levels, you will definately get the        money if you cross these levels.\n5. You cannot quit if you choose to flip a question.\n6. The money distribution is as follows:\n\nQ1\tRs.1000\nQ2\tRs.5000(Safe level)\nQ3\tRs.10000\nQ4\tRs.20000\nQ5\tRs.50000(Safe level)\nQ6\tRs.100000\nQ7\tRs.500000\nQ8\tRs.1000000(Millionaire)");
printf("\n\n\n\nPress any key to proceed\n");
scanf("%d",&i);
clrscr();
}
