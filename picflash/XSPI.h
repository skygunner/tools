
extern void XSPIInit(void);

extern void XSPIEnterFlashMode(void);
extern void XSPILeaveFlashMode(void);
extern void XSPIPowerUp();
extern void XSPIShutdown();

extern BYTE XSPI(BYTE o);
extern void XSPIRead(BYTE reg, BYTE *data);
extern void XSPIWrite(BYTE reg, BYTE *data);

//This are optimized special cases for the functions above
extern void XSPIW(BYTE o);
extern void XSPIW0(void);
extern BYTE XSPIR(void);
extern WORD XSPIReadWord(BYTE reg);
extern BYTE XSPIReadByte(BYTE reg);
extern void XSPIWrite0(BYTE reg);
extern void XSPIWriteByte(BYTE reg, BYTE d);
extern void XSPIWriteDWORD(BYTE reg, DWORD data);



