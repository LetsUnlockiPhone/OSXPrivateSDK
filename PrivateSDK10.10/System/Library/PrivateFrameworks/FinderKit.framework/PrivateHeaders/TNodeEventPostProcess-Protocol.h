/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol TNodeEventPostProcess <NSObject>
- (void)validateNodeProcessing:(struct TFENodeVector *)arg1 forComparator:(struct TBaseNodeComparator *)arg2 andGroups:(struct TGroupedNodes *)arg3 withManager:(struct TGroupManager *)arg4;
- (void)processNodes:(struct TFENodeVector *)arg1 andGroup:(struct TGroupedNodes *)arg2 withCanceledFlag:(_Bool *)arg3;
@end
