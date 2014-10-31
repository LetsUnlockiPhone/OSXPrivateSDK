/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProKit/NSProTimecode.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSProBasicTimecode-Protocol.h"
#import "NSProFeetFramesTimecode-Protocol.h"
#import "NSProMeasuredTimecode-Protocol.h"

@interface NSProExtendedTimecode : NSProTimecode <NSProBasicTimecode, NSProMeasuredTimecode, NSProFeetFramesTimecode, NSCopying, NSCoding>
{
    double pt_tempo;
    long long pt_timeSignatureNumerator;
    long long pt_timeSignatureDenominator;
    long long pt_filmType;
    void *reserved7;
    void *reserved8;
    void *reserved9;
}

+ (long long)version;
- (void)subtractFeet:(long long)arg1 frames:(long long)arg2 quarterFrames:(long long)arg3;
- (void)addFeet:(long long)arg1 frames:(long long)arg2 quarterFrames:(long long)arg3;
- (void)setFFQuarterFrames:(long long)arg1;
- (void)setFFFrames:(long long)arg1;
- (void)setFFFeet:(long long)arg1;
- (void)getFFFeet:(long long *)arg1 frames:(long long *)arg2 quarterFrames:(long long *)arg3;
- (void)subtractBars:(long long)arg1 beats:(double)arg2;
- (void)addBars:(long long)arg1 beats:(double)arg2;
- (void)subtractBars:(long long)arg1 beats:(long long)arg2 divisions:(long long)arg3 ticks:(long long)arg4;
- (void)addBars:(long long)arg1 beats:(long long)arg2 divisions:(long long)arg3 ticks:(long long)arg4;
- (void)setTicks:(long long)arg1;
- (void)setDivisions:(long long)arg1;
- (void)setDoubleBeats:(double)arg1;
- (void)setIntegerBeats:(long long)arg1;
- (void)setBars:(long long)arg1;
- (void)getBars:(long long *)arg1 beats:(double *)arg2;
- (void)getBars:(long long *)arg1 beats:(long long *)arg2 divisions:(long long *)arg3 ticks:(long long *)arg4;
- (void)clearTimecode;
- (void)setIsNegative:(BOOL)arg1;
- (BOOL)isNegative;
- (void)setFilmType:(long long)arg1;
- (long long)filmType;
- (void)setTimeSignatureDenominator:(long long)arg1;
- (void)setTimeSignatureNumerator:(long long)arg1;
- (void)setTempo:(double)arg1;
- (long long)ticksPerBeat;
- (long long)ticksPerDivision;
- (long long)ticksPerBar;
- (long long)divisionsPerBar;
- (long long)timeSignatureDenominator;
- (long long)timeSignatureNumerator;
- (double)tempo;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFilmType:(long long)arg1;
- (id)initWithTempo:(double)arg1 timeSignatureNumerator:(long long)arg2 denominator:(long long)arg3;
- (id)initWithTimecodeNumberValue:(id)arg1 timeRate:(unsigned long long)arg2 timecodeMode:(long long)arg3 audioFrameRate:(unsigned long long)arg4 tempo:(double)arg5 timeSignatureNumerator:(long long)arg6 denominator:(long long)arg7 filmType:(long long)arg8;
- (id)initWithTimecodeNumberValue:(id)arg1 timeRate:(unsigned long long)arg2 timecodeMode:(long long)arg3 audioFrameRate:(unsigned long long)arg4;
- (id)initWithTimecodeNumberValue:(id)arg1 timeRate:(unsigned long long)arg2 timecodeMode:(long long)arg3;
- (id)initWithTime:(CDStruct_198678f7)arg1 frameDuration:(CDStruct_198678f7)arg2 dropFrame:(long long)arg3 audioFrameRate:(unsigned long long)arg4 filmType:(long long)arg5 tempo:(double)arg6 timeSignatureNumerator:(long long)arg7 denominator:(long long)arg8;
- (id)initWithTime:(CDStruct_198678f7)arg1 frameDuration:(CDStruct_198678f7)arg2 dropFrame:(long long)arg3 audioFrameRate:(unsigned long long)arg4 filmType:(long long)arg5;
- (id)initWithTime:(CDStruct_198678f7)arg1 frameDuration:(CDStruct_198678f7)arg2 dropFrame:(long long)arg3 audioFrameRate:(unsigned long long)arg4;
- (id)initWithTime:(CDStruct_198678f7)arg1 frameDuration:(CDStruct_198678f7)arg2 dropFrame:(long long)arg3;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)private35mm3perfAddFeet:(long long)arg1 frames:(long long)arg2 quarterFrames:(long long)arg3 isNegativeDelta:(BOOL)arg4;
- (id)privateTimeForFeet:(long long)arg1 frames:(long long)arg2 fractionalFrames:(double)arg3;
- (double)privateFramesPerFoot;
- (void)privateSetDefaultFilmInfo;
- (void)privateGetZeroBaseBars:(long long *)arg1 beats:(long long *)arg2 divisions:(long long *)arg3 ticks:(long long *)arg4 remainingTime:(id *)arg5;
- (void)privateGetZeroBaseBars:(long long *)arg1 beats:(double *)arg2;
- (void)privateSetDefaultMeasureInfo;
- (void)privateAddBars:(long long)arg1 beats:(double)arg2 isNegativeDelta:(BOOL)arg3;
- (void)privateAddBars:(long long)arg1 beats:(long long)arg2 divisions:(long long)arg3 ticks:(long long)arg4 isNegativeDelta:(BOOL)arg5;
- (id)privateTimeForBars:(long long)arg1 beats:(double)arg2;
- (id)privateTimeForBars:(long long)arg1 beats:(long long)arg2 divisions:(long long)arg3 ticks:(long long)arg4 remainingTime:(id)arg5;
- (double)privateTickDuration;
- (double)privateDivisionDuration;
- (double)privateBarDuration;
- (double)privateBeatDuration;
- (long long)privateTicksPerWholeNote;
- (double)privateDivisionsPerBeat;
- (long long)privateDivisionsPerWholeNote;
- (long long)privateBeatsPerWholeNote;

@end
