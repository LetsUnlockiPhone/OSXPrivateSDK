/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarAgentLink/CalAgentLinkOperation.h>

@interface CalAgentLinkOneWayOperation : CalAgentLinkOperation
{
    BOOL _semaphoreDecremented;
}

@property(nonatomic) BOOL semaphoreDecremented; // @synthesize semaphoreDecremented=_semaphoreDecremented;
- (void)willFinish;
- (void)prepare;
- (id)init;

@end
