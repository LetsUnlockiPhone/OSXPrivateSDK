//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSMutableArray;

@protocol BKItemProviderDropTarget
- (unsigned long long)validateDrop:(id <NSDraggingInfo>)arg1 at:(int)arg2 toItem:(id <NSObject><BKItem>)arg3;

@optional
+ (NSArray *)itemsDraggedTypes;
- (BOOL)performDrop:(id <NSDraggingInfo>)arg1 at:(int)arg2 toItem:(id <NSObject><BKItem>)arg3 addedItems:(NSMutableArray *)arg4;
- (BOOL)performDrop:(id <NSDraggingInfo>)arg1 at:(int)arg2 toItem:(id <NSObject><BKItem>)arg3 dragOperation:(unsigned long long)arg4 addedItems:(NSMutableArray *)arg5;
@end
