// $Id$

// This example tests the features of the <ACE_MEM_Acceptor>,
// <ACE_MEM_Stream>, and <ACE_Svc_Handler> classes.  If the platform
// supports threads it uses a thread-per-connection concurrency model.
// Otherwise, it uses a single-threaded iterative server model.

#include "ace/MEM_Acceptor.h"
#include "ace/Thread_Manager.h"
#include "ace/Handle_Set.h"
#include "ace/Profile_Timer.h"

ACE_RCSID(SOCK_SAP, CPP_inserver, "$Id$")

static int
run_event_loop (u_short port)
{
  // Create the acceptors.
  ACE_MEM_Acceptor acceptor;

  // Create the  server addresses.
  ACE_INET_Addr server_addr (port, "localhost");

  // Create acceptors, reuse the address.
  if (acceptor.open (server_addr, 1) == -1)
    ACE_ERROR_RETURN ((LM_ERROR,
                       "%p\n",
                       "open"),
                      1);
  else if (acceptor.get_local_addr (server_addr) == -1)
    ACE_ERROR_RETURN ((LM_ERROR,
                       "%p\n",
                       "get_local_addr"),
                      1);

  ACE_DEBUG ((LM_DEBUG,
              "(%P|%t) starting server at port %d\n",
              server_addr.get_port_number ()));

  // Keep these objects out here to prevent excessive constructor
  // calls within the loop.
  ACE_MEM_Stream new_stream;

  // blocking wait on accept.
  if (acceptor.accept (new_stream) == -1)
    ACE_ERROR_RETURN ((LM_ERROR,
                       "%p\n",
                       "accept"),
                      -1);

  char buf[MAXPATHLEN];
  while (new_stream.recv (buf, MAXPATHLEN) != -1)
    ACE_DEBUG ((LM_DEBUG, "%s\n", buf));

  return new_stream.remove ();
}

int
main (int argc, char *argv[])
{
  u_short port = ACE_DEFAULT_SERVER_PORT;

  if (argc > 1)
    port = ACE_OS::atoi (argv[1]);

  return run_event_loop (port);
}
