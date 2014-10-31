/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalManagedChangeRequest.h>

@class NSNumber, NSString;

@interface CalManagedCalendarHomeChangeRequest : CalManagedChangeRequest
{
}

+ (id)insertCalendarHomeChangeRequestWithType:(int)arg1 principalUID:(id)arg2 uri:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)entityName;

// Remaining properties
@property(retain) NSString *principalUID; // @dynamic principalUID;
@property(retain) NSString *property; // @dynamic property;
@property(retain) NSString *uri; // @dynamic uri;
@property(retain) NSString *value; // @dynamic value;
@property(retain) NSNumber *valueType; // @dynamic valueType;

@end
