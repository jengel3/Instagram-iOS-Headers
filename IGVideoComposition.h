

#import <Instagram/Instagram-Structs.h>
@class NSArray, AVMutableComposition, UIImage, NSCache, NSURL;

@interface IGVideoComposition : NSObject {

	char _shouldMuteAudio;
	NSArray* _clips;
	AVMutableComposition* _composition;
	UIImage* _thumbnail;
	NSCache* _thumbnailCache;
	Class _filterClass;
	float _filterStrength;
	float _keyPosition;
	NSURL* _renderedVideoURL;
	unsigned _stabilizationMode;
	float _renderProgress;

}

@property (nonatomic,retain) NSArray * clips;                                 //@synthesize clips=_clips - In the implementation block
@property (nonatomic,retain) AVMutableComposition * composition;              //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                             //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) NSCache * thumbnailCache;                        //@synthesize thumbnailCache=_thumbnailCache - In the implementation block
@property (nonatomic,readonly) int sourceType; 
@property (nonatomic,retain) Class filterClass;                               //@synthesize filterClass=_filterClass - In the implementation block
@property (assign,nonatomic) float filterStrength;                            //@synthesize filterStrength=_filterStrength - In the implementation block
@property (assign,nonatomic) float keyPosition;                               //@synthesize keyPosition=_keyPosition - In the implementation block
@property (nonatomic,retain) NSURL * renderedVideoURL;                        //@synthesize renderedVideoURL=_renderedVideoURL - In the implementation block
@property (assign,nonatomic) unsigned stabilizationMode;                      //@synthesize stabilizationMode=_stabilizationMode - In the implementation block
@property (assign,nonatomic) char shouldMuteAudio;                            //@synthesize shouldMuteAudio=_shouldMuteAudio - In the implementation block
@property (assign,nonatomic) float renderProgress;                            //@synthesize renderProgress=_renderProgress - In the implementation block
+(CGSize)calculateDownscaleSizeForInputSize:(CGSize)arg1 outputSize:(CGSize)arg2 clip:(id)arg3 ;
-(Class)filterClass;
-(void)setFilterClass:(Class)arg1 ;
-(NSArray *)clips;
-(float)keyPosition;
-(char)shouldMuteAudio;
-(void)setStabilizationMode:(unsigned)arg1 ;
-(void)refreshThumbnail;
-(void)removeLastClip;
-(void)addClip:(id)arg1 ;
-(float)filterStrength;
-(void)moveClipAtIndex:(id)arg1 toIndex:(id)arg2 ;
-(void)removeClipAtIndex:(id)arg1 ;
-(void)setClips:(NSArray *)arg1 ;
-(unsigned)clipIndexForFrameTime:(SCD_Struct_IG47)arg1 ;
-(SCD_Struct_IG47)convertPresentationTime:(SCD_Struct_IG47)arg1 toClip:(id)arg2 ;
-(CGImageRef)generator:(id)arg1 generateImageForTimestamp:(SCD_Struct_IG47*)arg2 ;
-(char)shouldStabilizeClip:(id)arg1 ;
-(unsigned)stabilizationMode;
-(void)setKeyPosition:(float)arg1 ;
-(void)resetClipsAndInvalidateComposition;
-(void)setRenderedVideoURL:(NSURL *)arg1 ;
-(char)shouldEnableStabilization;
-(char)shouldStabilizeFrameAtTime:(SCD_Struct_IG47)arg1 ;
-(char)canEnableStabilization;
-(void)setFilterStrength:(float)arg1 ;
-(NSURL *)renderedVideoURL;
-(void)setShouldMuteAudio:(char)arg1 ;
-(float)renderProgress;
-(void)setRenderProgress:(float)arg1 ;
-(id)init;
-(int)sourceType;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(AVMutableComposition *)composition;
-(void)setComposition:(AVMutableComposition *)arg1 ;
-(void)invalidateComposition;
-(NSCache *)thumbnailCache;
-(void)setThumbnailCache:(NSCache *)arg1 ;
@end

