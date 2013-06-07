#ifndef __X_LOG_H_
#define __X_LOG_H_

#include "x_errtype.h"
#include "x_lock.h"

#include <errno.h>

namespace J_OS
{
#define LOGINFO(...) CLog::Instance()->WriteLogInfo(__VA_ARGS__)
#define LOGERROR(...) CLog::Instance()->WriteLogError(__VA_ARGS__)

class JO_API CLog
{
public:
	~CLog();

public:
	static CLog* Instance();
	int WriteLogInfo(const char *format, ...);
	int WriteLogError(const char *format, ...);

protected:
	CLog();

private:
	int CreateFile();

private:
	static CLog* m_pInstance;
	void *m_pFile;
	char *m_dataBuff;
	CTLock m_locker;
};

}

#endif //~__X_LOG_H_
