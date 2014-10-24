//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMutableArray, NSMutableDictionary, NSString;

@interface CalUILocationController : NSObject
{
    NSMutableDictionary *_placemarkQueryResults;
    NSCache *_placemarkCache;
    NSMutableArray *_geocoders;
    id <CalUIPlacemarkRequesterProtocol> _requester;
    NSString *_requestTag;
    NSMutableArray *_locationRequesters;
    long long _unfinishedQueries;
    NSMutableArray *_requestCounts;
}

+ (id)locationController;
@property(retain) NSMutableArray *requestCounts; // @synthesize requestCounts=_requestCounts;
@property long long unfinishedQueries; // @synthesize unfinishedQueries=_unfinishedQueries;
@property(retain) NSMutableArray *locationRequesters; // @synthesize locationRequesters=_locationRequesters;
@property(retain) NSString *requestTag; // @synthesize requestTag=_requestTag;
@property(retain) id <CalUIPlacemarkRequesterProtocol> requester; // @synthesize requester=_requester;
@property(retain) NSMutableArray *geocoders; // @synthesize geocoders=_geocoders;
@property(retain) NSCache *placemarkCache; // @synthesize placemarkCache=_placemarkCache;
@property(retain) NSMutableDictionary *placemarkQueryResults; // @synthesize placemarkQueryResults=_placemarkQueryResults;
- (id)rateLimitedQueriesWithQueries:(id)arg1;
- (unsigned long long)placemarkRequestRate;
- (void)countNewPlacemarkQueries:(unsigned long long)arg1;
- (unsigned long long)placemarkRequestRateWithNewQueryCount:(unsigned long long)arg1;
- (void)requestPlacemarksForQueries:(id)arg1 sender:(id)arg2 tag:(id)arg3;
- (void)acceptPlacemarks:(id)arg1 forQuery:(id)arg2 tag:(id)arg3;
- (void)dealloc;
- (id)init;

@end
