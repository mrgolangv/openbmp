#ifndef OPENBMP_OPENBMP_H
#define OPENBMP_OPENBMP_H

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "Config.h"
#include "Worker.h"
#include "Logger.h"
#include "MessageBus.h"

#include <list>

class Worker; // forward declaration to void the cross referencing issue between OpenBMP.h and Worker.h

class OpenBMP {
public:
    OpenBMP(Config *);

    Config *config;
    Logger *logger;
    MessageBus *message_bus;
    std::list<Worker> workers;

    int          sock;                           ///< Listening socket (ipv4)
    int          sockv6;                         ///< IPv6 listening socket
    sockaddr_in  svr_addr;                       ///< Server v4 address
    sockaddr_in6 svr_addrv6;                     ///< Server v6 address

    void start();

    void stop();

    int get_num_of_active_connections();

    void test();

private:
    bool debug; ///< debug flag to indicate debugging
    /****************************************************/
    /* Functions to accept new bmp connection() */
    /****************************************************/
    void open_socket(bool ipv4, bool ipv6);

    void accept_bmp_connection();

    bool can_accept_bmp_connection();

    bool below_max_cpu_utilization_threshold();

    bool did_not_affect_rib_dump_rate();

    void create_worker(OpenBMP *obmp);

    void remove_dead_workers();

};


#endif //OPENBMP_OPENBMP_H
