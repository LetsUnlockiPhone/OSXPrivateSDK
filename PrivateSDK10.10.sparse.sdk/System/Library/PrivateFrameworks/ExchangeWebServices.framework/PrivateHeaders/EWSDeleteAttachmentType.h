/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSArray;

@interface EWSDeleteAttachmentType : EWSBaseRequestType
{
    NSArray *_AttachmentIds;
}

+ (id)definition;
@property(copy, nonatomic) NSArray *AttachmentIds; // @synthesize AttachmentIds=_AttachmentIds;
- (void)dealloc;

@end

