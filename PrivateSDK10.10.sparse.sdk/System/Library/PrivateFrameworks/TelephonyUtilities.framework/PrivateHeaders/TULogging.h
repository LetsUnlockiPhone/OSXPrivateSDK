/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface TULogging : NSObject
{
}

+ (void)endLoggingSession;
+ (void)checkpointLoggingSession:(id)arg1;
+ (void)pulseLoggingSession;
+ (void)beginLoggingSessionAsInitiator:(BOOL)arg1;
+ (BOOL)sendDirectoryToCrashReporter:(id)arg1 error:(id *)arg2;
+ (void)unregisterForShouldLogChangedNotification;
+ (void)registerForShouldLogChangedNotification;
+ (void)logType:(id)arg1 topic:(id)arg2 category:(id)arg3 backtrace:(BOOL)arg4 format:(id)arg5;
+ (BOOL)shouldLogType:(id)arg1;

@end
