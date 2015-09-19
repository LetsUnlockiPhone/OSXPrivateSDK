/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFastEnumeration-Protocol.h"

@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject <NSFastEnumeration>
{
    NSMutableArray *_array;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_index;
    unsigned long long _dequeued;
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dequeue:(unsigned long long)arg1 block:(id)arg2;
- (void)_filterIndex:(id)arg1;
- (void)addDequeueCallback:(id)arg1;
- (void)_processCallBacks;
- (void)addNotification:(id)arg1 asDead:(BOOL)arg2;
- (void)removeAllObjects;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (void)dealloc;
- (id)init;

@end
