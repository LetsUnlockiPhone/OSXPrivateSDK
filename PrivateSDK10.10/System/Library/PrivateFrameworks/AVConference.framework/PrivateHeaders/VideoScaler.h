/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface VideoScaler : NSObject
{
    char *_tempBuffer1;
    char *_tempBuffer2;
    unsigned long long _tempBufferWidth;
    unsigned long long _tempBufferHeight;
}

+ (void)initialize;
- (void)scale4Vertx8Horz_422_SSE2WithInputBuffer:(char *)arg1 outputBuffer:(char *)arg2 tempDataBuffer:(char *)arg3 tempDataBuffer2:(char *)arg4 inputWidth:(int)arg5 inputHeight:(int)arg6 outputWidth:(int)arg7 outputHeight:(int)arg8 rowBytesInput:(int)arg9 rowBytesOutput:(int)arg10;
- (void)findUpAndDownWithInRange:(int)arg1 outRange:(int)arg2 up:(int *)arg3 down:(int *)arg4;
- (int)convertAndScalePixelBuffer:(struct __CVBuffer *)arg1 toWidth:(int)arg2 toHeight:(int)arg3 withPixelFormat:(unsigned int)arg4 usingPixelBufferPool:(struct __CVPixelBufferPool *)arg5 andStoreTo:(struct __CVBuffer **)arg6;
- (int)adjustTempBuffersForInputWidth:(unsigned long long)arg1 inputHeight:(unsigned long long)arg2 outputWidth:(unsigned long long)arg3 outputHeight:(unsigned long long)arg4;
- (void)dealloc;
- (id)init;

@end
