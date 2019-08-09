//
// Created by Lumin Shi on 2019-08-06.
//

#ifndef OPENBMP_CONSTANT_H
#define OPENBMP_CONSTANT_H

#define WORKER_STATUS_WAITING 1
#define WORKER_STATUS_RUNNING 2
#define WORKER_STATUS_STOPPED 3

#define BMP_MSG_BUF_SIZE 68000

#define ENCAPSULATOR_BUF_SIZE 10000

#define TOPIC_TYPE_COLLECTOR 1
#define TOPIC_TYPE_ROUTER 2
#define TOPIC_TYPE_BMP_RAW 2


#define MAX_BGP_MSG_SIZE 4096;
// BINARY HEADER VERSION 2
#define BINARY_HDR_MAGIC_NUMBER 0x4F424D50
#define BINARY_HDR_MAJOR_VERSION 2
#define BINARY_HDR_MINOR_VERSION 0

#define BINARY_HDR_MSG_TYPE_COLLECTOR 0
#define BINARY_HDR_MSG_TYPE_BMP_RAW 12

#define BINARY_HDR_MAGIC_NUMBER_SIZE 4
#define BINARY_HDR_MAJOR_VERSION_SIZE 1
#define BINARY_HDR_MINOR_VERSION_SIZE 1
#define BINARY_HDR_HDR_LEN_SIZE 2
#define BINARY_HDR_BMP_MSG_LEN_SIZE 4
#define BINARY_HDR_FLAG_SIZE 1
#define BINARY_HDR_TYPE_SIZE 1
#define BINARY_HDR_TIMESTAMP_SEC_SIZE 4
#define BINARY_HDR_TIMESTAMP_USEC_SIZE 4
#define BINARY_HDR_COLLECTOR_HASH_SIZE 16
#define BINARY_HDR_COLLECTOR_NAME_LEN_SIZE 2
#define BINARY_HDR_ROUTER_HASH_SIZE 16
#define BINARY_HDR_ROUTER_IP_SIZE 16
#define BINARY_HDR_ROUTER_GROUP_LEN_SIZE 16
#define BINARY_HDR_ROW_COUNT_SIZE 4


#define ROUTER_GROUP_UNDEFINED_STRING "[UNDEFINED_ROUTER_GROUP]"
#define PEER_GROUP_UNDEFINED_STRING "[UNDEFINED_PEER_GROUP]"

#endif //OPENBMP_CONSTANT_H
