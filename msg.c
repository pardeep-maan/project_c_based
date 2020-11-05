#include "msg.h"
const char *msg = "this mesaage is the default message for the fist appliation written using c";
void set_message(const char *m)
{
    msg = m;
}
const char * get_message(void)
{
    return msg;
}
