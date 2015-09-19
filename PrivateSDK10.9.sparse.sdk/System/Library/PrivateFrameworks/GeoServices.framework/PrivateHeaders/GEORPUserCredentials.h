//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEORPUserCredentials : PBCodable <NSCopying>
{
    NSString *_iCloudUserMapsAuthToken;
    NSString *_iCloudUserPersonID;
}

+ (id)_credentialsForPrimaryICloudAccount;
@property(retain, nonatomic) NSString *iCloudUserMapsAuthToken; // @synthesize iCloudUserMapsAuthToken=_iCloudUserMapsAuthToken;
@property(retain, nonatomic) NSString *iCloudUserPersonID; // @synthesize iCloudUserPersonID=_iCloudUserPersonID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasICloudUserMapsAuthToken;
@property(readonly, nonatomic) BOOL hasICloudUserPersonID;
- (void)dealloc;

@end
