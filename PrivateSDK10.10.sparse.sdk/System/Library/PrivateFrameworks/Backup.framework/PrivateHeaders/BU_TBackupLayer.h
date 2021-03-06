/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@class CABackdropLayer;

// Not exported
@interface BU_TBackupLayer : CALayer
{
    unsigned long long fIndex;
    _Bool fSnapshotImageRequested;
    struct TRef<TTimeMachineTarget *, TRetainReleasePolicy<TTimeMachineTarget *>> fTarget;
    struct TNSRef<CABackdropLayer *> _backdropLayer;
    struct TNSRef<CALayer *> _effectLayer;
    _Bool _configuredForInvalid;
}

@property(nonatomic) _Bool configuredForInvalid; // @synthesize configuredForInvalid=_configuredForInvalid;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (_Bool)showAsValidTarget;
- (void)setOpacity:(float)arg1;
@property(retain, nonatomic) CALayer *effectLayer;
@property(retain, nonatomic) CABackdropLayer *backdropLayer;

@end

