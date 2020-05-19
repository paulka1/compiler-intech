#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "lexer.h"
#include "buffer.h"

bool isalphanum (char chr)
{
  if(chr == '_' && chr >= 0 && chr <= 9
  && chr >= 'a' && chr <= 'z'&& chr >= 'A' && chr <= 'Z'){
    return true;
  }
  return false;
}

char *lexer_getalphanum_rollback (buffer_t *buffer)
{
  long a = sizeof(buffer);
  
  //printf("%s",buffer->content);
  for(size_t i = 0; i < a;i++){
    printf("%c",buf_getchar(buffer));
  }


}
