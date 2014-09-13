//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSOutlineView, NSTreeController, SMManager, SMMigrationController;

@interface SMViewController : NSViewController
{
    SMManager *_migrationManager;
    SMMigrationController *_migrationController;
    NSTreeController *_collectionController;
    NSOutlineView *_collectionView;
    id _owner;
}

@property(retain) NSOutlineView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly) id owner; // @synthesize owner=_owner;
@property(retain) NSTreeController *collectionController; // @synthesize collectionController=_collectionController;
@property(readonly) SMManager *migrationManager; // @synthesize migrationManager=_migrationManager;
@property(readonly) SMMigrationController *migrationController; // @synthesize migrationController=_migrationController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 andOwner:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
