#ifndef _EXPORTS_H_
#define _EXPORTS_H_ 1

#include <rtl-sdr.h>

extern const rtlsdr_read_async_cb_t *cbAsyncPtr;

extern void cbAsyncGo(unsigned char *buf, uint32_t len, void *ctx);
void cbAsync(unsigned char *buf, uint32_t len, void *ctx);
int read_async(rtlsdr_dev_t *dev, rtlsdr_read_async_cb_t cb, intptr_t ctx, uint32_t buf_num, uint32_t buf_len);

#endif
