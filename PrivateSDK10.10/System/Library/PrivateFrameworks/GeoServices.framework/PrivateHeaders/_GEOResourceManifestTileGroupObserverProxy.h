/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSHashTable, NSLock;

// Not exported
@interface _GEOResourceManifestTileGroupObserverProxy : NSObject
{
    NSHashTable *_observers;
    NSLock *_observersLock;
    struct dispatch_queue_s *_queue;
}

@property(nonatomic) struct dispatch_queue_s *queue; // @synthesize queue=_queue;
- (unsigned long long)observersCount;
- (void)forEachObserver:(id)arg1 finished:(void)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
