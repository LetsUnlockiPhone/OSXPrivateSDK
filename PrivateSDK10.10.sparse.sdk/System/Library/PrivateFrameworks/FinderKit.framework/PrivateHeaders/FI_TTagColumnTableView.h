/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_TTableView.h>

@class FI_TTableViewShrinkToFitController;

// Not exported
@interface FI_TTagColumnTableView : FI_TTableView
{
    FI_TTableViewShrinkToFitController *_stfController;
}

- (void)keyDown:(id)arg1;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (id)stfEditorController_FI;
- (id)menuForEvent:(id)arg1;
- (BOOL)canDragRowsWithIndexes:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)aboutToTearDown;
- (id)tagColumnController;
- (void)awakeCommon;

@end
