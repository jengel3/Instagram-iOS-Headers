
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIImage, NSURL, IGVideoConfiguration, AVMutableComposition, NSCache;

@interface IGVideoComposition : NSObject <NSSecureCoding, NSCopying> {

	char _shouldMuteAudio;
	NSArray* _clips;
	UIImage* _overlayImage;
	float _keyPosition;
	NSURL* _renderedVideoURL;
	int _stabilizationMode;
	IGVideoConfiguration* _configuration;
	AVMutableComposition* _composition;
	float _renderProgress;
	UIImage* _thumbnail;
	NSCache* _thumbnailCache;
	Class _filterClass;
	float _filterStrength;

}

@property (nonatomic,retain) NSArray * clips;                                   //@synthesize clips=_clips - In the implementation block
@property (nonatomic,retain) IGVideoConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) AVMutableComposition * composition;                //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic) float renderProgress;                              //@synthesize renderProgress=_renderProgress - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                               //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) NSCache * thumbnailCache;                          //@synthesize thumbnailCache=_thumbnailCache - In the implementation block
@property (nonatomic,retain) Class filterClass;                                 //@synthesize filterClass=_filterClass - In the implementation block
@property (assign,nonatomic) float filterStrength;                              //@synthesize filterStrength=_filterStrength - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                            //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) float keyPosition;                                 //@synthesize keyPosition=_keyPosition - In the implementation block
@property (nonatomic,retain) NSURL * renderedVideoURL;                          //@synthesize renderedVideoURL=_renderedVideoURL - In the implementation block
@property (assign,nonatomic) int stabilizationMode;                             //@synthesize stabilizationMode=_stabilizationMode - In the implementation block
@property (assign,nonatomic) char shouldMuteAudio;                              //@synthesize shouldMuteAudio=_shouldMuteAudio - In the implementation block
+(CGSize)calculateDownscaleSizeForInputSize:(CGSize)arg1 outputSize:(CGSize)arg2 clip:(id)arg3 ;
+(char)supportsSecureCoding;
-(void)setStabilizationMode:(int)arg1 ;
-(void)addClip:(id)arg1 ;
-(Class)filterClass;
-(void)setFilterStrength:(float)arg1 ;
-(float)filterStrength;
-(void)setFilterClass:(Class)arg1 ;
-(float)renderProgress;
-(NSArray *)clips;
-(void)refreshThumbnail;
-(void)removeLastClip;
-(id)rawVideoLocationString;
-(void)setRenderProgress:(float)arg1 ;
-(NSURL *)renderedVideoURL;
-(void)moveClipAtIndex:(id)arg1 toIndex:(id)arg2 ;
-(void)removeClipAtIndex:(id)arg1 ;
-(char)shouldMuteAudio;
-(char)canEnableStabilization;
-(void)setBaseFilterClass:(Class)arg1 strength:(float)arg2 ;
-(void)setShouldMuteAudio:(char)arg1 ;
-(int)stabilizationMode;
-(SCD_Struct_IG53)convertPresentationTime:(SCD_Struct_IG53)arg1 toClip:(id)arg2 ;
-(unsigned)clipIndexForFrameTime:(SCD_Struct_IG53)arg1 ;
-(char)shouldStabilizeClip:(id)arg1 ;
-(float)keyPosition;
-(void)setKeyPosition:(float)arg1 ;
-(void)setClips:(NSArray *)arg1 ;
-(void)setRenderedVideoURL:(NSURL *)arg1 ;
-(CGImageRef)generator:(id)arg1 generateImageForTimestamp:(SCD_Struct_IG53*)arg2 ;
-(char)isFastVideo;
-(char)shouldEnableStabilization;
-(char)shouldStabilizeFrameAtTime:(SCD_Struct_IG53)arg1 ;
-(UIImage *)overlayImage;
-(id)filter;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_IG53)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
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
-(void)setOverlayImage:(UIImage *)arg1 ;
@end

