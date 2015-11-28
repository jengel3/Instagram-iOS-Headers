
#import <Instagram/IGMediaMetadataProtocol.h>

@class NSString, NSArray;

@interface IGVideoMetadata : NSObject <IGMediaMetadataProtocol> {

	char _isAudioMuted;
	NSString* _rawVideoLocationString;
	int _posterFrameIndex;
	float _videoTimeLength;
	int _videoSourceType;
	NSArray* _clipsMetadata;

}

@property (nonatomic,copy) NSString * rawVideoLocationString;              //@synthesize rawVideoLocationString=_rawVideoLocationString - In the implementation block
@property (assign,nonatomic) int posterFrameIndex;                         //@synthesize posterFrameIndex=_posterFrameIndex - In the implementation block
@property (assign,nonatomic) float videoTimeLength;                        //@synthesize videoTimeLength=_videoTimeLength - In the implementation block
@property (assign,nonatomic) int videoSourceType;                          //@synthesize videoSourceType=_videoSourceType - In the implementation block
@property (nonatomic,retain) NSArray * clipsMetadata;                      //@synthesize clipsMetadata=_clipsMetadata - In the implementation block
@property (assign,nonatomic) char isAudioMuted;                            //@synthesize isAudioMuted=_isAudioMuted - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareToShare;
-(id)sharingInfo;
-(NSString *)rawVideoLocationString;
-(void)setRawVideoLocationString:(NSString *)arg1 ;
-(id)initWithVideo:(id)arg1 ;
-(void)updateKeyPosition:(float)arg1 ;
-(void)updateIsAudioMuted:(char)arg1 ;
-(void)setClipsMetadata:(NSArray *)arg1 ;
-(void)setVideoTimeLength:(float)arg1 ;
-(void)setVideoSourceType:(int)arg1 ;
-(NSArray *)clipsMetadata;
-(int)posterFrameIndex;
-(float)videoTimeLength;
-(int)videoSourceType;
-(void)setPosterFrameIndex:(int)arg1 ;
-(void)setIsAudioMuted:(char)arg1 ;
-(char)isAudioMuted;
@end

