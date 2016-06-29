
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AVAsset, IGTrackStabilizer;

@interface IGVideoClip : NSObject <NSCoding, NSCopying> {

	NSString* _assetIdentifier;
	AVAsset* _asset;
	int _position;
	int _sourceType;
	int _trimType;
	IGTrackStabilizer* _trackStabilizer;
	NSString* _clipUUID;
	CGRect _cropRect;
	SCD_Struct_IG77 _startTime;
	SCD_Struct_IG77 _endTime;
	SCD_Struct_IG78 _compositionTimeRange;
	GLKMatrix4 _playbackTransform;

}

@property (nonatomic,readonly) NSString * clipUUID;                             //@synthesize clipUUID=_clipUUID - In the implementation block
@property (nonatomic,readonly) _GLKMatrix4 playbackTransform;                   //@synthesize playbackTransform=_playbackTransform - In the implementation block
@property (nonatomic,copy) NSString * assetIdentifier;                          //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) AVAsset * asset;                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) int position;                                    //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) int sourceType;                                  //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG77 startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG77 endTime;                           //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) int trimType;                                      //@synthesize trimType=_trimType - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG78 compositionTimeRange;              //@synthesize compositionTimeRange=_compositionTimeRange - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                   //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,retain) IGTrackStabilizer * trackStabilizer;               //@synthesize trackStabilizer=_trackStabilizer - In the implementation block
+(id)assetURLForClipUUID:(id)arg1 ;
-(id)initWithAsset:(id)arg1 position:(int)arg2 sourceType:(int)arg3 ;
-(NSString *)clipUUID;
-(NSString *)assetIdentifier;
-(int)trimType;
-(CGAffineTransform)videoTrackTransform;
-(float)trimmedDuration;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(void)setTrimType:(int)arg1 ;
-(void)setTrackStabilizer:(IGTrackStabilizer *)arg1 ;
-(SCD_Struct_IG78)timeRangeForAudioAndVideo;
-(void)setCompositionTimeRange:(SCD_Struct_IG78)arg1 ;
-(SCD_Struct_IG78)compositionTimeRange;
-(IGTrackStabilizer *)trackStabilizer;
-(_GLKMatrix4)playbackTransform;
-(CGSize)applyInverseTransformToSize:(CGSize)arg1 ;
-(void)resetTimes;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setStartTime:(SCD_Struct_IG77)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)position;
-(int)sourceType;
-(AVAsset *)asset;
-(SCD_Struct_IG77)startTime;
-(CGSize)preferredSize;
-(SCD_Struct_IG77)endTime;
-(void)setEndTime:(SCD_Struct_IG77)arg1 ;
-(void)updateTransform;
@end

