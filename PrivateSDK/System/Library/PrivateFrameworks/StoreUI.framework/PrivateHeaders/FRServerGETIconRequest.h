//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreUI/FRServerGETRequest.h>

@class NSData, NSImage;

@interface FRServerGETIconRequest : FRServerGETRequest
{
    NSImage *_iconImage;
    NSData *_iconData;
}

@property(retain) NSData *iconData; // @synthesize iconData=_iconData;
@property(retain) NSImage *iconImage; // @synthesize iconImage=_iconImage;
- (void).cxx_destruct;
- (void)handleServerResponse:(id)arg1;

@end
