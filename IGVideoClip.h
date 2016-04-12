
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AVAsset, IGTrackStabilizer;

@interface IGVideoClip : NSObject <NSCopying> {

	NSString* _assetIdentifier;
	AVAsset* _asset;
	int _position;
	int _sourceType;
	unsigned _trimType;
	IGTrackStabilizer* _trackStabilizer;
	CGRect _cropRect;
	SCD_Struct_IG44 _startTime;
	SCD_Struct_IG44 _endTime;
	SCD_Struct_IG58 _compositionTimeRange;
	GLKMatrix4 _playbackTransform;

}

@property (nonatomic,copy) NSString * assetIdentifier;                                 //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,retain) AVAsset * asset;                                          //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) int position;                                             //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) int sourceType;                                           //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize; 
@property (assign,nonatomic) SCD_Struct_IG44 startTime;                                //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG44 endTime;                                  //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) unsigned trimType;                                        //@synthesize trimType=_trimType - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IG58 timeRangeForAudioAndVideo; 
@property (nonatomic,readonly) float trimmedDuration; 
@property (assign,nonatomic) SCD_Struct_IG58 compositionTimeRange;                     //@synthesize compositionTimeRange=_compositionTimeRange - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                          //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) _GLKMatrix4 playbackTransform;                          //@synthesize playbackTransform=_playbackTransform - In the implementation block
@property (nonatomic,retain) IGTrackStabilizer * trackStabilizer;                      //@synthesize trackStabilizer=_trackStabilizer - In the implementation block
-(id)initWithAsset:(id)arg1 position:(int)arg2 sourceType:(int)arg3 ;
-(void)setTrackStabilizer:(IGTrackStabilizer *)arg1 ;
-(NSString *)assetIdentifier;
-(float)trimmedDuration;
-(IGTrackStabilizer *)trackStabilizer;
-(unsigned)trimType;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(void)resetTimes;
-(CGAffineTransform)videoTrackTransform;
-(SCD_Struct_IG58)timeRangeForAudioAndVideo;
-(CGSize)applyInverseTransformToSize:(CGSize)arg1 ;
-(void)setTrimType:(unsigned)arg1 ;
-(SCD_Struct_IG58)compositionTimeRange;
-(void)setCompositionTimeRange:(SCD_Struct_IG58)arg1 ;
-(_GLKMatrix4)playbackTransform;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setStartTime:(SCD_Struct_IG44)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
-(AVAsset *)asset;
-(SCD_Struct_IG44)startTime;
-(void)setAsset:(AVAsset *)arg1 ;
-(CGSize)preferredSize;
-(SCD_Struct_IG44)endTime;
-(void)setEndTime:(SCD_Struct_IG44)arg1 ;
-(void)updateTransform;
@end

