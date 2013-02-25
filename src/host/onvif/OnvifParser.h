#ifndef __ONVIFPARSER_H_
#define __ONVIFPARSER_H_
#include "j_includes.h"
#include "x_time.h"

#define DATA_BUFFER_SIZE (1024 * 1024)
	
class COnvifParser : public J_MediaParser
{
public:
	COnvifParser();
	~COnvifParser();

public:
	///J_VideoParser
	virtual int Init(int nDataType = J_VideoNormal);
	virtual int Deinit();
	virtual int InputData(const char *pData, int nLen);
	virtual int GetOnePacket(char *pData, J_StreamHeader &streamHeader);

private:
	//J_OS::RWLocker_t m_rwLocker;
	char *m_pDataBuff;
	char *m_pOutBuff;
	int m_nDataSize;
	int m_nOffset;
	bool m_bIsComplate;
	bool m_bStartSlice;
};
#endif //~__ONVIFPARSER_H_