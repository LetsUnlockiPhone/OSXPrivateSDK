//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPredicate.h"

@interface NSPredicate (CalendarStoreSupport)
+ (id)calendarPredicateWithGroups:(id)arg1;
+ (id)taskPredicateWithCalendars:(id)arg1;
+ (id)taskPredicateWithSearchTerm:(id)arg1 property:(id)arg2 calendars:(id)arg3;
+ (id)taskPredicateWithAlarm:(BOOL)arg1 calendars:(id)arg2;
+ (id)eventPredicateWithURL:(id)arg1 calendar:(id)arg2;
+ (id)eventPredicateWithSearchTerm:(id)arg1 property:(id)arg2 calendars:(id)arg3;
+ (id)eventPredicateWithStartDate:(id)arg1 endDate:(id)arg2 sharedUID:(id)arg3 calendars:(id)arg4;
+ (id)eventPredicateWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
+ (id)eventPredicateWithCalendars:(id)arg1;
+ (id)eventPredicateWithAttendee:(BOOL)arg1 calendars:(id)arg2;
+ (id)eventPredicateWithAlarm:(BOOL)arg1 calendars:(id)arg2;
+ (id)eventPredicateWithSharedUID:(id)arg1 occurrences:(id)arg2;
+ (id)eventPredicateWithSharedUID:(id)arg1 occurrence:(id)arg2;
+ (id)eventPredicateWithSharedUIDs:(id)arg1;
+ (id)eventPredicateWithLocalUID:(id)arg1 occurrence:(id)arg2;
+ (id)calendarItemPredicateWithFilenames:(id)arg1 calendar:(id)arg2;
+ (id)calendarItemPredicateWithLocalUID:(id)arg1 calendar:(id)arg2;
+ (id)calendarItemPredicateWithSharedUID:(id)arg1 calendar:(id)arg2;
+ (id)calendarItemPredicateWithSharedUID:(id)arg1;
+ (id)calendarItemPredicateWithSharedUIDs:(id)arg1 calendar:(id)arg2;
+ (id)calendarItemPredicateWithSharedUIDs:(id)arg1;
+ (id)calendarItemPredicateWithLocalUID:(id)arg1;
+ (id)nodePredicateWithUID:(id)arg1;
+ (id)alarmPredicateWithCalendars:(id)arg1;
@end
