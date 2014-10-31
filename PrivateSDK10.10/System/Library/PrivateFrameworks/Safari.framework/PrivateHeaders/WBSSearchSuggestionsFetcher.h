/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

// Not exported
@interface WBSSearchSuggestionsFetcher : NSObject
{
    unsigned long long _numberOfPendingFetches;
    BOOL _hasConnectionToSearchHelper;
    NSString *_suggestionsURLTemplate;
}

@property(readonly, copy, nonatomic) NSString *suggestionsURLTemplate; // @synthesize suggestionsURLTemplate=_suggestionsURLTemplate;
- (void).cxx_destruct;
- (void)_fetchDidFinishWithSuggestions:(id)arg1 error:(id)arg2 completionHandler:(id)arg3;
- (id)_searchHelperConnection;
- (void)disconnectFromSearchHelperIfNecessary;
- (void)cancelExistingSuggestionsRequest;
- (void)updateSuggestionsRequestWithSearchTerms:(id)arg1 userAgentString:(id)arg2 completionHandler:(id)arg3;
@property(readonly, nonatomic, getter=isFetching) BOOL fetching;
- (id)initWithSuggestionsURLTemplate:(id)arg1;

@end
