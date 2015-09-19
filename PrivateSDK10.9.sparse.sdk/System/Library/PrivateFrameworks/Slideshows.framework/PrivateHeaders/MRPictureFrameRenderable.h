//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MUPoolObject.h>

@class MRImage, NSString;

@interface MRPictureFrameRenderable : MUPoolObject
{
    MRImage *image;
    struct CGRect rect;
    struct CGRect innerRect;
    struct CGRect outerRect;
    NSString *where;
    BOOL ignoreBlend;
    MRPictureFrameRenderable *next;
}

+ (CDStruct_7b508128 *)poolInfo;
@property(copy, nonatomic) NSString *where; // @synthesize where;
@property(retain, nonatomic) MRImage *image; // @synthesize image;
- (void)dealloc;
- (void)purge;

@end
