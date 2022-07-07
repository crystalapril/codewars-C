/*
tag:
bool, &&, !
*/

#answer1.0 by april
#include <stdbool.h>
#include <stdlib.h>

bool set_alarm(bool employed, bool vacation) {
  if (employed && (!vacation))
    return 1;
  else
    return 0;
}


#answer2.0
bool set_alarm(bool employed, bool vacation) {
  return employed && !vacation;
}

#answer3.0
bool set_alarm(bool employed, bool vacation) {
    return employed > vacation;
}

#answer4.0
bool set_alarm(bool employed, bool vacation) {
  return (!employed || vacation)?0:1;
}
