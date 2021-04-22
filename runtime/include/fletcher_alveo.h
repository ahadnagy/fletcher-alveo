#ifndef FLETCHER_ALVEO_H
#define FLETCHER_ALVEO_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {FL_TR_DEVICE_DMA, FL_TR_HOST_SHADOW_BUFF, FL_TR_HOST_ONLY_BUFF, FL_TR_NONE} data_trans_mech;

typedef struct {
    uint8_t device_id;
    data_trans_mech transfer_mech;
    const char* xclbin;
} platform_init; 


fstatus_t platformHostMalloc(uint8_t *device_address, int64_t size);

#ifdef __cplusplus
}
#endif
#endif
