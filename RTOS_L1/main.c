/* ==== Program test pointers ====

float a;
float *b;
float c;

int main(void)
{
  a = 1.0;
  b = &a;
  c = *b;
  while(1);
  return 0;
}
*/





/* ==== Program pulapki pointers ====

void fill_buffer(char *buff, int size, char value)
{
  do
  {
    buff[size--] = value;
  }while(size!=-1);
}

void fill_buffer2(char *tab, int size, char val){
    int i  = 0;
    for(i=0; i<size;i++){
        tab[i] = val;
    }
}

int main(){
    char buff1[5] = {0};
    char buff2[5] = {0};
    fill_buffer2(buff1, 5, 5);
    fill_buffer2(buff2, 5, 4);
    while(1);
    return 0;
}*/





/*==== Przyklad kopiowanie stringow ====*/

void copy_string(char *destination_string, char *source_string)
{
  int i = 0;
  while(source_string[i])
  {
      destination_string[i] = source_string[i];
      i++;
  }
}


char str1[] = "tekst";  // rozmiar 6, bo +'\0'
char str2[10] = {0};


void main(void)
{
   if(sizeof(str2) > sizeof(str1))
       copy_string(str2, str1);
    while(1);
}


