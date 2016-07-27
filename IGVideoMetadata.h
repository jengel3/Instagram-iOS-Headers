
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGMediaMetadataProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, IGVideoComposition, NSArray;

@interface IGVideoMetadata : NSObject <IGMediaMetadataProtocol, NSSecureCoding, NSCopying> {

	char _audioMuted;
	NSString* _rawVideoLocationString;
	IGVideoComposition* _videoComposition;
	int _posterFrameIndex;
	float _videoTimeLength;
	int _videoSourceType;
	NSArray* _clipsMetadata;

}

@property (assign,nonatomic) int posterFrameIndex;                             //@synthesize posterFrameIndex=_posterFrameIndex - In the implementation block
@property (assign,nonatomic) float videoTimeLength;                            //@synthesize videoTimeLength=_videoTimeLength - In the implementation block
@property (assign,nonatomic) int videoSourceType;                              //@synthesize videoSourceType=_videoSourceType - In the implementation block
@property (nonatomic,retain) NSArray * clipsMetadata;                          //@synthesize clipsMetadata=_clipsMetadata - In the implementation block
@property (nonatomic,copy) IGVideoComposition * videoComposition;              //@synthesize videoComposition=_videoComposition - In the implementation block
@property (nonatomic,copy) NSString * rawVideoLocationString;                  //@synthesize rawVideoLocationString=_rawVideoLocationString - In the implementation block
@property (assign,getter=isAudioMuted,nonatomic) char audioMuted;              //@synthesize audioMuted=_audioMuted - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)prepareToShare;
-(id)initWithVideo:(id)arg1 ;
-(NSString *)rawVideoLocationString;
-(void)updateKeyPosition:(float)arg1 ;
-(id)sharingInfo;
-(char)isBoomerang;
-(void)updateWithVideo:(id)arg1 ;
-(void)updateClipsMetadataWithVideo:(id)arg1 ;
-(void)setVideoTimeLength:(float)arg1 ;
-(void)setVideoSourceType:(int)arg1 ;
-(void)setRawVideoLocationString:(NSString *)arg1 ;
-(void)setPosterFrameIndex:(int)arg1 ;
-(void)updateVideoTimeLengthWithVideo:(id)arg1 ;
-(NSArray *)clipsMetadata;
-(void)setClipsMetadata:(NSArray *)arg1 ;
-(int)calculateTrimType;
-(int)posterFrameIndex;
-(float)videoTimeLength;
-(int)videoSourceType;
-(IGVideoComposition *)videoComposition;
-(void)setVideoComposition:(IGVideoComposition *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isAudioMuted;
-(void)setAudioMuted:(char)arg1 ;
@end

