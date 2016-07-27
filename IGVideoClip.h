
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AVAsset, IGTrackStabilizer;

@interface IGVideoClip : NSObject <NSSecureCoding, NSCopying> {

	NSString* _assetIdentifier;
	AVAsset* _asset;
	int _position;
	int _sourceType;
	int _trimType;
	IGTrackStabilizer* _trackStabilizer;
	NSString* _clipUUID;
	CGRect _cropRect;
	SCD_Struct_IG52 _startTime;
	SCD_Struct_IG52 _endTime;
	SCD_Struct_IG67 _compositionTimeRange;
	GLKMatrix4 _playbackTransform;

}

@property (nonatomic,retain) NSString * clipUUID;                               //@synthesize clipUUID=_clipUUID - In the implementation block
@property (nonatomic,retain) AVAsset * asset;                                   //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) int position;                                      //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) int sourceType;                                    //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) _GLKMatrix4 playbackTransform;                   //@synthesize playbackTransform=_playbackTransform - In the implementation block
@property (nonatomic,copy) NSString * assetIdentifier;                          //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG52 startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG52 endTime;                           //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) int trimType;                                      //@synthesize trimType=_trimType - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG67 compositionTimeRange;              //@synthesize compositionTimeRange=_compositionTimeRange - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                   //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,retain) IGTrackStabilizer * trackStabilizer;               //@synthesize trackStabilizer=_trackStabilizer - In the implementation block
+(id)assetURLForClipUUID:(id)arg1 ;
+(char)supportsSecureCoding;
-(void)setTrackStabilizer:(IGTrackStabilizer *)arg1 ;
-(id)initWithAsset:(id)arg1 position:(int)arg2 sourceType:(int)arg3 ;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(int)trimType;
-(void)setTrimType:(int)arg1 ;
-(NSString *)assetIdentifier;
-(SCD_Struct_IG67)compositionTimeRange;
-(_GLKMatrix4)playbackTransform;
-(IGTrackStabilizer *)trackStabilizer;
-(float)trimmedDuration;
-(void)resetTimes;
-(void)setClipUUID:(NSString *)arg1 ;
-(void)setCompositionTimeRange:(SCD_Struct_IG67)arg1 ;
-(NSString *)clipUUID;
-(CGAffineTransform)videoTrackTransform;
-(SCD_Struct_IG67)timeRangeForAudioAndVideo;
-(CGSize)applyInverseTransformToSize:(CGSize)arg1 ;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setStartTime:(SCD_Struct_IG52)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
-(AVAsset *)asset;
-(SCD_Struct_IG52)startTime;
-(void)setAsset:(AVAsset *)arg1 ;
-(CGSize)preferredSize;
-(SCD_Struct_IG52)endTime;
-(void)setEndTime:(SCD_Struct_IG52)arg1 ;
-(void)updateTransform;
@end

