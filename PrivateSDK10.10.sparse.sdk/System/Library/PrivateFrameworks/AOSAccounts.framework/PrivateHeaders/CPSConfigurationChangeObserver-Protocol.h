/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CPSConfigurationChangeObserver <NSObject>

@optional
- (void)configurationClient:(id)arg1 didChangePreferencesForServiceIdentifiers:(id)arg2;
- (void)configurationClient:(id)arg1 didChangeStateForServiceIdentifiers:(id)arg2;
- (void)configurationClientDidChangeLoggedInAccountStatus:(id)arg1;
- (void)configurationClientDidStart:(id)arg1;
@end
