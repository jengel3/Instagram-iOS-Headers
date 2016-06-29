
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSURL, IGVideoConfiguration, AVMutableComposition, UIImage, NSCache;

@interface IGVideoComposition : NSObject <NSCoding> {

	char _shouldMuteAudio;
	NSArray* _clips;
	Class _filterClass;
	float _filterStrength;
	float _keyPosition;
	NSURL* _renderedVideoURL;
	int _stabilizationMode;
	IGVideoConfiguration* _configuration;
	AVMutableComposition* _composition;
	float _renderProgress;
	UIImage* _thumbnail;
	NSCache* _thumbnailCache;

}

@property (nonatomic,retain) NSArray * clips;                                   //@synthesize clips=_clips - In the implementation block
@property (nonatomic,retain) IGVideoConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) AVMutableComposition * composition;                //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic) float renderProgress;                              //@synthesize renderProgress=_renderProgress - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                               //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) NSCache * thumbnailCache;                          //@synthesize thumbnailCache=_thumbnailCache - In the implementation block
@property (nonatomic,retain) Class filterClass;                                 //@synthesize filterClass=_filterClass - In the implementation block
@property (assign,nonatomic) float filterStrength;                              //@synthesize filterStrength=_filterStrength - In the implementation block
@property (assign,nonatomic) float keyPosition;                                 //@synthesize keyPosition=_keyPosition - In the implementation block
@property (nonatomic,retain) NSURL * renderedVideoURL;                          //@synthesize renderedVideoURL=_renderedVideoURL - In the implementation block
@property (assign,nonatomic) int stabilizationMode;                             //@synthesize stabilizationMode=_stabilizationMode - In the implementation block
@property (assign,nonatomic) char shouldMuteAudio;                              //@synthesize shouldMuteAudio=_shouldMuteAudio - In the implementation block
+(CGSize)calculateDownscaleSizeForInputSize:(CGSize)arg1 outputSize:(CGSize)arg2 clip:(id)arg3 ;
-(float)filterStrength;
-(void)setFilterStrength:(float)arg1 ;
-(NSArray *)clips;
-(Class)filterClass;
-(float)keyPosition;
-(NSURL *)renderedVideoURL;
-(int)stabilizationMode;
-(char)shouldMuteAudio;
-(void)setClips:(NSArray *)arg1 ;
-(unsigned)clipIndexForFrameTime:(SCD_Struct_IG77)arg1 ;
-(SCD_Struct_IG77)convertPresentationTime:(SCD_Struct_IG77)arg1 toClip:(id)arg2 ;
-(CGImageRef)generator:(id)arg1 generateImageForTimestamp:(SCD_Struct_IG77*)arg2 ;
-(char)shouldStabilizeClip:(id)arg1 ;
-(void)addClip:(id)arg1 ;
-(void)removeLastClip;
-(void)moveClipAtIndex:(id)arg1 toIndex:(id)arg2 ;
-(void)removeClipAtIndex:(id)arg1 ;
-(void)setKeyPosition:(float)arg1 ;
-(void)refreshThumbnail;
-(id)rawVideoLocationString;
-(char)isFastVideo;
-(void)resetClipsAndInvalidateComposition;
-(void)setRenderedVideoURL:(NSURL *)arg1 ;
-(char)shouldEnableStabilization;
-(char)shouldStabilizeFrameAtTime:(SCD_Struct_IG77)arg1 ;
-(char)canEnableStabilization;
-(void)setFilterClass:(Class)arg1 ;
-(void)setStabilizationMode:(int)arg1 ;
-(void)setShouldMuteAudio:(char)arg1 ;
-(float)renderProgress;
-(void)setRenderProgress:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_IG77)duration;
-(void)setConfiguration:(IGVideoConfiguration *)arg1 ;
-(IGVideoConfiguration *)configuration;
-(int)sourceType;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(id)initWithVideoConfiguration:(id)arg1 ;
-(AVMutableComposition *)composition;
-(void)setComposition:(AVMutableComposition *)arg1 ;
-(void)invalidateComposition;
-(NSCache *)thumbnailCache;
-(void)setThumbnailCache:(NSCache *)arg1 ;
@end

