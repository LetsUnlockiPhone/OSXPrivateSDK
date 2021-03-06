/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GKStateMachineDelegate-Protocol.h"

@class GKCollectionViewDataSource, GKPlaceholderContentStateMachine, NSString;

@interface GKSegmentInfo : NSObject <GKStateMachineDelegate>
{
    id <GKSegmentInfoDelegagte> _delegateWeak;
    GKCollectionViewDataSource *_dataSource;
    NSString *_title;
    GKPlaceholderContentStateMachine *_loadingMatchine;
}

@property(retain, nonatomic) GKPlaceholderContentStateMachine *loadingMatchine; // @synthesize loadingMatchine=_loadingMatchine;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) GKCollectionViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)didEnterErrorState;
- (void)didEnterNoContentState;
- (void)didExitLoadingState;
- (void)didEnterLoadingState;
@property(retain, nonatomic) NSString *loadingState;
@property(nonatomic) id <GKSegmentInfoDelegagte> delegate; // @synthesize delegate=_delegateWeak;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

