/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CalPreferences, NSArray, NSString;

@interface CalFoundationPreferences : NSObject
{
    CalPreferences *_preferences;
}

+ (id)shared;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *logSimpleConfiguration;
@property(readonly, nonatomic) NSString *logFilePath;
@property(readonly, nonatomic) BOOL logEmitUserNotifications;
@property(readonly, nonatomic) BOOL logAutoFlush;
- (id)init;

@end

