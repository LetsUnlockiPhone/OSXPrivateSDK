/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSXPCConnection;

@interface CKRootHelper : NSObject
{
    NSXPCConnection *_connection;
    NSLock *_connectionLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)proxy;
- (id)init;
- (id)_connection;

@end
