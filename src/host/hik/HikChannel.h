#ifndef __HIKCHANNEL_H_
#define __HIKCHANNEL_H_
#include "x_socket.h"
#include "x_timer.h"
#include "HikType.h"
#include "HikAdapter.h"

class CHikChannelBase : public J_ChannelStream
                      , public J_PtzControl
                      , public J_RemoteVod
                      , public J_StreamParser
{};

class CHikChannel : public J_ResidTmpl<J_BaseAdapter, CHikChannelBase>
{
public:
	CHikChannel(const char *pResid, J_Obj *pOwner, int nChannel, int nStream, int nMode);
	~CHikChannel();

	J_OS::TLocker_t  m_sockLocker;
public:
	///J_StreamChannel
	virtual int OpenStream(J_Obj *&pObj, CRingBuffer *pRingBuffer);
	virtual int CloseStream(J_Obj *pObj, CRingBuffer *pRingBuffer);
	virtual bool HasMultiStream() { return true; }
	///J_PtzControl
	virtual int PtzControl(int nCmd, int nParam);
	///J_StreamParser
	virtual int OpenParser(J_Obj *&pObj);
	virtual int CloseParser(J_Obj *pObj);
	///J_RemoteVod
	virtual int EmunFileByTime(time_t beginTime, time_t endTime, j_vec_file_info_t &vecFileInfo);
	virtual int OpenVodStream(J_Obj *&pObj);
	virtual int CloseVodStream(J_Obj *pObj);

private:
	int StartView();
	int StopView();

	static void OnTimer(void *pUser)
	{
		(static_cast<CHikChannel *>(pUser))->ExchangeData();
	}
	void ExchangeData();
	int MakeIFrame(int nChannel);
	void Convert2HikTime(time_t utcTime, HikTime &hikTime);
	int SendCommand(int nCmd, const char *pSendData, int nDataLen);

private:
	CHikAdapter *m_pAdapter;
	int m_nChannel;
	int m_nStreamType;
	int m_nProtocol;

	J_OS::CTCPSocket *m_recvSocket;
	char *m_pDataBuff;
	bool m_bOpened;
	J_OS::CTimer m_timer;
};
#endif //~__HIKCHANNEL_H_
