/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Mail/MFEWSResponseOperation.h>

@interface MFEWSSyncFolderHierarchyResponseOperation : MFEWSResponseOperation
{
    id _createBlock;
    id _updateBlock;
    id _deleteBlock;
}

@property(copy, nonatomic) id deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(copy, nonatomic) id updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) id createBlock; // @synthesize createBlock=_createBlock;
- (void).cxx_destruct;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;

@end

