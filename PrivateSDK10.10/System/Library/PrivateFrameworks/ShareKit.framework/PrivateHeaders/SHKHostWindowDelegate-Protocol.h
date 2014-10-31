/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SHKHostWindowDelegate <NSObject>
- (void)viewControllerWantsToChangeViewToSize:(struct CGSize)arg1 containerViewScreenFrame:(struct CGRect)arg2 currentViewFrame:(struct CGRect)arg3 transactionUUID:(id)arg4;
- (void)requestClientWindowFrameWithCompletionBlock:(id)arg1;
- (void)setAnimatesDimAndBlur:(BOOL)arg1;
- (void)setHostWindowFrame:(struct CGRect)arg1 withClientWindowSync:(BOOL)arg2 blurAndShadowSync:(BOOL)arg3;
- (void)startSharingTransitionOutWithSuccess:(BOOL)arg1 duration:(double)arg2;
- (void)startSharingTransitionInWithServiceScreenFrame:(struct CGRect)arg1 initialLayerTransform:(struct CGAffineTransform)arg2 dimmingScreenFrame:(struct CGRect)arg3 delay:(double)arg4 duration:(double)arg5 currentMediaTime:(double)arg6;
- (void)startInstantTransitionOut;
- (void)startInstantTransitionInWithServiceScreenFrame:(struct CGRect)arg1 dimmingScreenFrame:(struct CGRect)arg2;
- (void)startMarkupTransitionOut;
- (void)startMarkupTransitionInWithServiceScreenFrame:(struct CGRect)arg1 initialLayerTransform:(struct CGAffineTransform)arg2 dimmingScreenFrame:(struct CGRect)arg3;
@end
