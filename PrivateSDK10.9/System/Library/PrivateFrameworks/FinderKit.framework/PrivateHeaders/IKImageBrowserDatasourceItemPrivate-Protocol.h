//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IKImageBrowserCell, IKImageCell, NSDictionary, NSImage, NSString;

@protocol IKImageBrowserDatasourceItemPrivate

@optional
- (NSDictionary *)statusInfo;
- (id)statusImageForCell:(IKImageBrowserCell *)arg1;
- (NSDictionary *)statusInfoForCell:(IKImageBrowserCell *)arg1;
- (NSImage *)tagImageForCell:(IKImageBrowserCell *)arg1;
- (BOOL)datasourceItemIsThreadSafe;
- (id)IKImageRepresentationWithType:(NSString *)arg1;
- (NSDictionary *)inlinePreviewQuickLookClientProperties;
- (struct CGRect)quickLookContentFrameForImageSize:(struct CGSize)arg1;
- (struct OpaqueIconRef *)createAlternativeIconRepresentation;
- (struct OpaqueIconRef *)createAlternativeIconRepresentationWithOptions:(NSDictionary *)arg1;
- (id)imageToDrawForCell:(IKImageCell *)arg1;
- (BOOL)isDimmed;
- (BOOL)holesFlavor;
- (struct __CFDictionary *)quickLookThumbnailOptions;
- (id)_ikThumbnailImage;
- (id)posterImage;
- (double)aspectRatio;
@end
