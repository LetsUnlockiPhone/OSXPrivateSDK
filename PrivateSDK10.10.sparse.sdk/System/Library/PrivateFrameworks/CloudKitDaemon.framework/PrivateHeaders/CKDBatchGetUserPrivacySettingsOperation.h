/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDBatchGetUserPrivacySettingsOperation : CKDOperation
{
    NSArray *_containerPrivacySettings;
}

+ (id)appPermissionGroupsFromContainerPrivacySettings:(id)arg1;
@property(copy, nonatomic) NSArray *containerPrivacySettings; // @synthesize containerPrivacySettings=_containerPrivacySettings;
- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldCheckAppVersion;

@end

