//! \file ICQPacket_define.h ICQ definitions
#pragma once

#define ICQPACKET_MAXPACKETSIZE		8192

struct FLAP
{
	//! always 0x2A
	unsigned char id; 
	unsigned char channel;
	unsigned short sequence; 
	unsigned short DataSize;
};

struct TLV
{
	unsigned short Type;
	unsigned short Length;
};

#pragma pack(push, 1)

struct SNAC
{
	unsigned short family;
	unsigned short subtype;
	unsigned short flags;
	unsigned int requestid;
};

#pragma pack (pop)

#define ICQ_FLAPSIGNATURE			0x2a

#define ICQ_CHANNEL_SIGNON			1
#define ICQ_CHANNEL_SNACDATA		2
#define ICQ_CHANNEL_ERROR			3
#define ICQ_CHANNEL_SIGNOFF			4
#define ICQ_CHANNEL_KEEPALIVE		5

#define ICQ_TLV_UIN					0x0001
#define ICQ_TLV_PASSWORD			0x0002
#define ICQ_TLV_CLIENT_ID_STRING	0x0003
//#define ICQ_TLV_				0x0004
#define ICQ_TLV_BOS_SERVER			0x0005
#define ICQ_TLV_AUTH_COOKIE			0x0006
//#define ICQ_TLV_				0x0007
#define ICQ_TLV_AUTH_ERROR_CODE		0x0008
//#define ICQ_TLV_				0x0009
//#define ICQ_TLV_				0x000A
//#define ICQ_TLV_				0x000B
//#define ICQ_TLV_				0x000C
//#define ICQ_TLV_				0x000D
#define ICQ_TLV_CLIENT_COUNTRY		0x000E
#define ICQ_TLV_CLIENT_LANG			0x000F
//#define ICQ_TLV_				0x0010
//#define ICQ_TLV_				0x0011
//#define ICQ_TLV_				0x0012
//#define ICQ_TLV_				0x0013
#define ICQ_TLV_DISTRIB_NUMBER		0x0014
//#define ICQ_TLV_				0x0015
#define ICQ_TLV_CLIENT_ID			0x0016
#define ICQ_TLV_CLIENT_MAJOR_VER	0x0017
#define ICQ_TLV_CLIENT_MINOR_VER	0x0018
#define ICQ_TLV_CLIENT_LESSER_VER	0x0019
#define ICQ_TLV_CLIENT_BUILD_NUM	0x001A
//#define ICQ_TLV_				0x001B
//#define ICQ_TLV_				0x001C
//#define ICQ_TLV_				0x001D
//#define ICQ_TLV_				0x001E
//#define ICQ_TLV_				0x001F
