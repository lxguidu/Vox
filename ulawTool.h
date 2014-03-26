#ifndef __ULAWTOOL_H__
#define __ULAWTOOL_H__

void ulaw2pcm2(unsigned char *ulaw_data, short *pcm_data, int samples);
void alaw2pcm2(unsigned char *alaw_data, short *pcm_data, int samples);

#endif //__ULAWTOOL_H__