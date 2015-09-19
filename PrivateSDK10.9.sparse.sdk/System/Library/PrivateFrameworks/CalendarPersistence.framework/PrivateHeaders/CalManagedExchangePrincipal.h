//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedPrincipal.h>

@class CalManagedExchangeError, NSString;

@interface CalManagedExchangePrincipal : CalManagedPrincipal
{
}

+ (id)fetchRequestWithServerURL:(id)arg1 isDelegate:(BOOL)arg2 inManagedObjectContext:(id)arg3;
+ (id)pathExtension;
+ (id)entityName;
- (id)typeString;
- (id)webServicesURL;
- (void)didSave;
- (id)properties;
- (void)refresh:(int)arg1;
- (void)refresh;
- (void)deactivate;
- (void)activateAndInitializeSyncingSystem:(BOOL)arg1;
- (void)activate;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)lastOperationError;
- (void)setSupportsDefaultAlarms:(BOOL)arg1;
- (BOOL)supportsDefaultAlarms;
- (BOOL)isRenameable;
- (BOOL)isRemote;
- (BOOL)isAutoScheduleSupported;
- (BOOL)isPrivateCommentsSupported;
- (BOOL)isCalendarServerPrivateEventsSupported;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (BOOL)validateForWrite:(id *)arg1;
- (id)type;
- (void)awakeFromInsert;
- (void)getUserAvailabilityForEventID:(id)arg1 addresses:(id)arg2 timeRange:(id)arg3 reply:(CDUnknownBlockType)arg4;

// Remaining properties
@property(retain) NSString *deletedItemsFolderId; // @dynamic deletedItemsFolderId;
@property(retain) NSString *deletedItemsFolderSyncState; // @dynamic deletedItemsFolderSyncState;
@property(retain) CalManagedExchangeError *lastError; // @dynamic lastError;
@property(retain) NSString *mailbox; // @dynamic mailbox;
@property(retain) NSString *rootFolderID; // @dynamic rootFolderID;

@end
