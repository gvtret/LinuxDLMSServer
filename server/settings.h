//
// Created by trgv on 11.10.2021.
//

#ifndef DLMS_EMBEDDED_SETTINGS_H
#define DLMS_EMBEDDED_SETTINGS_H
#define HDLC_HEADER_SIZE 17
#define HDLC_BUFFER_SIZE 128
#define PDU_BUFFER_SIZE 1024
#define WRAPPER_BUFFER_SIZE 8 + PDU_BUFFER_SIZE

unsigned char lnframeBuff[HDLC_BUFFER_SIZE + HDLC_HEADER_SIZE];
unsigned char lnpduBuff[PDU_BUFFER_SIZE];
unsigned char sn47frameBuff[WRAPPER_BUFFER_SIZE];
unsigned char sn47pduBuff[PDU_BUFFER_SIZE];
unsigned char ln47frameBuff[WRAPPER_BUFFER_SIZE];
unsigned char ln47pduBuff[PDU_BUFFER_SIZE];

#endif //DLMS_EMBEDDED_SETTINGS_H
