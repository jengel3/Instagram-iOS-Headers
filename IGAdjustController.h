
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGConvexPolygonCropViewDelegate.h>

@protocol IGAdjustControllerDelegate;
@class IGConvexPolygonCropView, IGTransformController, UIImage, NSArray, UIView, NSString;

@interface IGAdjustController : NSObject <IGConvexPolygonCropViewDelegate> {

	IGConvexPolygonCropView* _cropView;
	IGTransformController* _transformController;
	CGSize _originalImageSize;
	float _originalCropScaleRatio;
	float _originalCropAspectRatio;
	char _cropIsUpdating;
	char _cropNeedsUpdate;
	UIImage* _contentImage;
	id<IGAdjustControllerDelegate> _delegate;
	NSArray* __perspectiveContentRegion;

}

@property (nonatomic,copy,readonly) NSArray * _perspectiveContentRegion;                  //@synthesize _perspectiveContentRegion=__perspectiveContentRegion - In the implementation block
@property (nonatomic,retain) UIImage * contentImage;                                      //@synthesize contentImage=_contentImage - In the implementation block
@property (nonatomic,readonly) UIView * cropView; 
@property (assign,nonatomic) float orientationAngle; 
@property (nonatomic,readonly) float perspectiveXRotateAngle; 
@property (nonatomic,readonly) float perspectiveYRotateAngle; 
@property (nonatomic,readonly) float perspectiveZRotateAngle; 
@property (assign,nonatomic) CGPoint cropCenter; 
@property (assign,nonatomic) float cropZoomScale; 
@property (assign,nonatomic,__weak) id<IGAdjustControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hasAdjustedValues;
-(void)updateCropView;
-(id)perspectiveContentRegion;
-(void)commitCroppingIfNeeded;
-(void)setDisplayCropView:(char)arg1 ;
-(id)perspectiveCorrectedSurfaceFromImage:(id)arg1 perspectiveTransform:(_GLKMatrix4)arg2 cropCenter:(CGPoint)arg3 cropZoom:(float)arg4 ;
-(CGVector)aspectRatioAdjustedVector:(CGVector)arg1 ;
-(float)perspectiveXRotateAngle;
-(float)perspectiveYRotateAngle;
-(float)perspectiveZRotateAngle;
-(id)createSurfaceWithImage:(id)arg1 cropRect:(CGRect)arg2 imageSizeLimit:(CGSize)arg3 ;
-(float)perspectiveRotateAngleForRotateMode:(unsigned)arg1 ;
-(void)setPerspectiveRotationWithXRotatationAngle:(float)arg1 YRotationAngle:(float)arg2 ZRotationAngle:(float)arg3 ;
-(void)setPerspectiveRotationAngle:(float)arg1 rotationType:(unsigned)arg2 ;
-(void)confirmCropping;
-(void)cancelCropping;
-(NSArray *)_perspectiveContentRegion;
-(void)setCropZoomScale:(float)arg1 ;
-(void)setCropCenter:(CGPoint)arg1 ;
-(void)cropViewWillUpdateCropRegion:(id)arg1 ;
-(void)cropViewDidUpdateCropRegion:(id)arg1 ;
-(CGPoint)cropCenter;
-(void)setOrientationAngle:(float)arg1 ;
-(float)orientationAngle;
-(CGSize)largestOutputSizeWithNoUpscaling;
-(UIView *)cropView;
-(void)prepareInitialCropAspectRatio:(float)arg1 cropCenter:(CGPoint)arg2 cropZoomScale:(float)arg3 ;
-(id)surfaceAfterAdjustmentForSize:(CGSize)arg1 ;
-(UIImage *)contentImage;
-(void)setDelegate:(id<IGAdjustControllerDelegate>)arg1 ;
-(id<IGAdjustControllerDelegate>)delegate;
-(id)initWithContentRect:(CGRect)arg1 ;
-(void)setContentImage:(UIImage *)arg1 ;
-(float)cropZoomScale;
@end

