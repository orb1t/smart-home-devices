/**
 *
 * DZ-MMNET-WALL: Wall control panel based on MMNet01.
 *
 * MQTT glue header.
 *
**/

#include "defs.h"
#include "runtime_cfg.h"

#include "map.h"

#include <inttypes.h>

#include "libemqtt.h"

void mqtt_start( void );


// Send channel status upstream
void mqtt_send_channel( uint8_t state, uint8_t ch );


// Called from MQTT receiver
void mqtt_recv_item( const char *mqtt_name, const char *data );

// Called by dio logic
void mqtt_send_item( const char *mqtt_name, const char *data );


uint8_t expect_packet( uint8_t type );

uint8_t subscribe_all( void );
uint8_t subscribe( const char *topic );



extern uint8_t  mqtt_keepalive_timer; // updated from each_second()
extern uint32_t  mqtt_io_count;




