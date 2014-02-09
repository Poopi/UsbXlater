#ifndef BTSTACK_CONFIG_H_
#define BTSTACK_CONFIG_H_

#define EMBEDDED
#define HAVE_TICK
#define HAVE_MALLOC

// #define ENABLE_LOG_INFO 
#define ENABLE_LOG_ERROR

#define HCI_ACL_PAYLOAD_SIZE 1024

#define MAX_SPP_CONNECTIONS 0

#define MAX_NO_HCI_CONNECTIONS 4
#define MAX_NO_L2CAP_SERVICES  6
#define MAX_NO_L2CAP_CHANNELS  6
#define MAX_NO_RFCOMM_MULTIPLEXERS 0
#define MAX_NO_RFCOMM_SERVICES 0
#define MAX_NO_RFCOMM_CHANNELS 0
#define MAX_NO_DB_MEM_DEVICE_LINK_KEYS  2
#define MAX_NO_DB_MEM_DEVICE_NAMES 2
#define MAX_NO_DB_MEM_SERVICES 2

//#define FORCE_SSP

//#define HAVE_SDP_EXTRA_QUERIES

#endif
