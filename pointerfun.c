/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 06
 * Title:			pointer fun again
 * Author:		Rieser Felix
 * ----------------------------------------------------------
 * Description:
 * Like the other pointerfun-program, just a bit more complex
 * ----------------------------------------------------------
 */
#include <stdio.h>

struct PlayStruct
{
  int int_value;
  double double_value;
  char a_string[64];
};

void print_struct(struct PlayStruct ps, struct PlayStruct *pps);
void change_struct(struct PlayStruct ps, struct PlayStruct *pps);
void print_string(char string_to_print[]);
void change_string(char string1[],char* p_string);

int main(int argc, char const *argv[]) {

  struct PlayStruct play_struct={5,4.8,"Felix"};
  struct PlayStruct *play_struct_pointer=&play_struct;

  print_struct(play_struct,play_struct_pointer);
  change_struct(play_struct, play_struct_pointer);
  printf("\n");
  print_struct(play_struct,play_struct_pointer);


  char another_string[16]="rieserfelix";
  char *p_another_string = another_string;
  print_string(play_struct.a_string);
  printf("\n");
  change_string(play_struct.a_string,p_another_string);
  print_string(play_struct.a_string);
  print_string(another_string);

  return 0;
}

void print_struct(struct PlayStruct ps, struct PlayStruct* pps)
{
  printf("values of struct ps: <%d> <%lf> <%s> \n",ps.int_value, ps.double_value, ps.a_string);
  printf("values of struct pps: <%d> <%lf> <%s> \n",pps->int_value, pps->double_value, pps->a_string);
}
void change_struct(struct PlayStruct ps, struct PlayStruct *pps)
{
  ps.int_value=2;
  ps.double_value=3.6;
  ps.a_string[0]='f';
  ps.a_string[1]='e';
  ps.a_string[2]='l';
  ps.a_string[3]='i';
  ps.a_string[4]='x';

  pps -> int_value=8;
  pps -> double_value=1.9;
  pps -> a_string[0]='h';
  pps -> a_string[1]='e';
  pps -> a_string[2]='l';
  pps -> a_string[3]='l';
  pps -> a_string[4]='o';
}
void print_string(char string_to_print[])
{
  printf("%s\n",string_to_print);
}

void change_string(char string1[],char* p_string)
{
  string1[2]='\0';
  p_string[1]='\0';
}
