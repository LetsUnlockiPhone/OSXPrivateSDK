//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalOperation.h>

#import "NSCoding.h"

@class CalManagedPersistentOperation;

@interface CalPersistentOperation : CalOperation <NSCoding>
{
    CalManagedPersistentOperation *_managedOperation;
}

+ (id)dearchive:(id)arg1;
+ (id)archive:(id)arg1 inContext:(id)arg2;
@property(retain) CalManagedPersistentOperation *managedOperation; // @synthesize managedOperation=_managedOperation;
- (id)managedObjectIDForURIRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
