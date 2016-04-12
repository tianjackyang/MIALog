//
//  FILogDef.h
//  e-friends
//
//  Created by janven on 16/2/19.
//

#ifndef MIALogDef_h
#define MIALogDef_h

/**
 *  初始化DDLog日志输出，在这里，我们仅仅希望在xCode控制台输出
 *  DDLog：基础类，必须引入的。
 *  DDASLLogger：支持将调试语句写入到苹果的日志中。一般正对Mac开发，可选。
 *  DDTTYLogger：支持将调试语句写入xCode控制台。我们即使要用它，可选。
 *  DDFileLogger：支持将调试语句写入到文件系统。可选。
 */

#ifdef DEBUG
static const int ddLogLevel = DDLogLevelVerbose;
#else
static const int ddLogLevel = DDLogLevelOff;
#endif

#endif /* FILogDef_h */
