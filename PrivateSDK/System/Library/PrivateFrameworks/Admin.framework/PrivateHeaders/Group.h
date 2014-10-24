//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Admin/DSRecord.h>

@class NSMutableArray, NSNumber, NSString;

@interface Group : DSRecord
{
    NSNumber *mGUIDNumber;
    NSMutableArray *mUsers;
    NSMutableArray *mUserGUIDs;
    NSMutableArray *mNestedGUIDs;
    BOOL mGUIDChecked;
    BOOL mHasGUID;
    NSString *mUUIDString;
    NSString *mRealNameString;
}

+ (id)adminGroup;
+ (long long)nextFreeGroupIDInRange:(struct _NSRange)arg1;
+ (long long)nextFreeGroupID;
+ (id)findGroupByGUID:(struct __CFUUID *)arg1;
+ (id)findGroupByName:(id)arg1;
+ (id)findGroupByName:(id)arg1 node:(id)arg2;
+ (id)findGroupByID:(long long)arg1;
+ (id)createGroupWithName:(id)arg1 realName:(id)arg2 gid:(long long)arg3 inNode:(id)arg4;
+ (id)createGroupWithName:(id)arg1 gid:(long long)arg2 inNode:(id)arg3;
+ (id)allLocalGroups;
+ (id)wcCreateGroupWithName:(id)arg1 realName:(id)arg2;
- (void)refresh;
- (BOOL)deleteGroup;
- (id)arrayOfNestedGUIDs;
- (BOOL)hasNestedGroup:(id)arg1;
- (BOOL)removeNestedGroup:(id)arg1;
- (BOOL)addNestedGroup:(id)arg1;
- (id)arrayOfMemberGUIDs;
- (id)arrayOfMemberNames;
- (BOOL)hasMemberUUID:(id)arg1;
- (BOOL)hasMember:(id)arg1;
- (BOOL)removeMember:(id)arg1;
- (BOOL)removeMemberUUID:(id)arg1 name:(id)arg2;
- (BOOL)addMember:(id)arg1;
- (BOOL)addMemberUUID:(id)arg1 name:(id)arg2;
- (BOOL)setRealName:(id)arg1;
- (id)realName;
- (BOOL)setGeneratedUID:(id)arg1;
- (id)generatedUID;
- (BOOL)setgid:(long long)arg1;
- (long long)gid;
- (long long)setRecordNameTo:(id)arg1;
- (void)dealloc;
- (id)initWithRecordName:(const char *)arg1 type:(const char *)arg2 node:(id)arg3;
- (id)_initWithInfo:(id)arg1 node:(id)arg2;
- (void)_postDistributedNotification:(id)arg1;
- (BOOL)wcRemoveGroupMemberWithUUID:(id)arg1;
- (BOOL)wcRemoveAccountWithName:(id)arg1;
- (BOOL)wcAddAccountWithName:(id)arg1;
- (BOOL)wcRemoveNestedGroupWithName:(id)arg1;
- (BOOL)wcAddNestedGroup:(id)arg1;
- (BOOL)wcAddNestedGroupWithName:(id)arg1;
- (BOOL)wcSetGroupName:(id)arg1;
- (BOOL)wcRemoveMember:(id)arg1;

@end
