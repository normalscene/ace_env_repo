#if defined (ACE_NTRACE)
#undef ACE_NTRACE
#endif
#define ACE_NTRACE 0

#include "ace/Log_Msg.h"

int ACE_TMAIN (int , ACE_TCHAR *argv[])
{
  ACE_DEBUG ((LM_INFO, "[%D] Hello!\n")) ;
  ACE_RETURN(0) ; 
}
