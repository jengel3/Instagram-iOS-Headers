
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGPostPipelineFilterDelegate.h>

@class IGContext, IGRenderer, IGSurfaceView, UIImageView, IGSurface, CADisplayLink, IGTargetBlock, IGSampleBuffer, IGPostPipelineFilter, IGTiltShiftOverlayFilter, UIImage, CALayer, NSString;

@interface IGFilteredPhotoView : UIView <IGPostPipelineFilterDelegate> {

	IGContext* _renderingContext;
	IGRenderer* _tiltShiftOverlayRenderer;
	IGSurfaceView* _reviewView;
	UIImageView* _borderImageView;
	IGSurfaceView* _tiltShiftOverlayView;
	UIImageView* _initialImageView;
	IGSurface* _tiltShiftOverlayInputSurface;
	CADisplayLink* _displayLink;
	char _overlayNeedsRefresh;
	char _borderHidden;
	IGTargetBlock* _displayLinkBlock;
	IGSampleBuffer* _imageBuffer;
	IGPostPipelineFilter* _postPipelineFilter;
	unsigned _tiltShiftMode;
	IGTiltShiftOverlayFilter* _tiltShiftOverlayFilter;

}

@property (nonatomic,retain) IGTiltShiftOverlayFilter * tiltShiftOverlayFilter;              //@synthesize tiltShiftOverlayFilter=_tiltShiftOverlayFilter - In the implementation block
@property (nonatomic,retain) IGSampleBuffer * imageBuffer;                                   //@synthesize imageBuffer=_imageBuffer - In the implementation block
@property (nonatomic,readonly) UIImage * snapshot; 
@property (nonatomic,readonly) IGPostPipelineFilter * postPipelineFilter;                    //@synthesize postPipelineFilter=_postPipelineFilter - In the implementation block
@property (assign,getter=isBorderHidden,nonatomic) char borderHidden; 
@property (assign,nonatomic) unsigned tiltShiftMode;                                         //@synthesize tiltShiftMode=_tiltShiftMode - In the implementation block
@property (assign,nonatomic) CGPoint tiltShiftCenter; 
@property (assign,nonatomic) float tiltShiftAngle; 
@property (assign,nonatomic) float tiltShiftRadius; 
@property (nonatomic,readonly) CALayer * tiltShiftOverlayLayer; 
@property (assign,nonatomic) _GLKMatrix4 textureTransform; 
@property (nonatomic,readonly) CGSize maxSupportedImageSize; 
@property (assign,nonatomic) char displayOriginal; 
@property (assign,nonatomic) float previewScaleFactor; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)tiltShiftMode;
-(void)setTiltShiftMode:(unsigned)arg1 ;
-(void)drawIfNeeded;
-(void)setPreviewScaleFactor:(float)arg1 ;
-(void)setDisplayOriginal:(char)arg1 ;
-(void)animateFadeFromCurrentState;
-(void)setBorderHidden:(char)arg1 ;
-(void)reduceRenderingCaches;
-(id)flattenedFilter;
-(void)setTiltShiftOverlayFilter:(IGTiltShiftOverlayFilter *)arg1 ;
-(IGTiltShiftOverlayFilter *)tiltShiftOverlayFilter;
-(_GLKMatrix4)textureTransform;
-(char)displayOriginal;
-(char)isBorderHidden;
-(void)refreshOverlay;
-(void)postPipelineFilterDidRender;
-(CGSize)maxSupportedImageSize;
-(float)previewScaleFactor;
-(CALayer *)tiltShiftOverlayLayer;
-(float)tiltShiftAngle;
-(void)setTiltShiftAngle:(float)arg1 ;
-(void)setOverlayNeedsRefresh;
-(void)setTiltShiftCenter:(CGPoint)arg1 ;
-(float)tiltShiftRadius;
-(void)setTiltShiftRadius:(float)arg1 ;
-(CGPoint)tiltShiftCenter;
-(IGPostPipelineFilter *)postPipelineFilter;
-(void)setPhotoFilterClass:(Class)arg1 ;
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UIImage *)snapshot;
-(IGSampleBuffer *)imageBuffer;
-(void)setImageBuffer:(IGSampleBuffer *)arg1 ;
-(void)updateBorder;
@end

