
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
	float _perspectiveXRotateAngle;
	float _perspectiveYRotateAngle;
	float _perspectiveZRotateAngle;
	id<IGAdjustControllerDelegate> _delegate;
	NSArray* __perspectiveContentRegion;

}

@property (nonatomic,retain) UIImage * contentImage;                                      //@synthesize contentImage=_contentImage - In the implementation block
@property (nonatomic,readonly) UIView * cropView; 
@property (assign,nonatomic) float orientationAngle; 
@property (assign,nonatomic) float perspectiveXRotateAngle;                               //@synthesize perspectiveXRotateAngle=_perspectiveXRotateAngle - In the implementation block
@property (assign,nonatomic) float perspectiveYRotateAngle;                               //@synthesize perspectiveYRotateAngle=_perspectiveYRotateAngle - In the implementation block
@property (assign,nonatomic) float perspectiveZRotateAngle;                               //@synthesize perspectiveZRotateAngle=_perspectiveZRotateAngle - In the implementation block
@property (assign,nonatomic) CGPoint cropCenter; 
@property (assign,nonatomic) float cropZoomScale; 
@property (assign,nonatomic,__weak) id<IGAdjustControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * _perspectiveContentRegion;                  //@synthesize _perspectiveContentRegion=__perspectiveContentRegion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)cropView;
-(void)updateCropView;
-(id)perspectiveContentRegion;
-(CGPoint)cropCenter;
-(void)setCropCenter:(CGPoint)arg1 ;
-(void)setCropZoomScale:(float)arg1 ;
-(float)orientationAngle;
-(void)commitCroppingIfNeeded;
-(void)setOrientationAngle:(float)arg1 ;
-(void)setDisplayCropView:(char)arg1 ;
-(id)perspectiveCorrectedSurfaceFromImage:(id)arg1 perspectiveTransform:(_GLKMatrix4)arg2 cropCenter:(CGPoint)arg3 cropZoom:(float)arg4 ;
-(CGVector)aspectRatioAdjustedVector:(CGVector)arg1 ;
-(float)perspectiveXRotateAngle;
-(float)perspectiveYRotateAngle;
-(float)perspectiveZRotateAngle;
-(id)createSurfaceWithImage:(id)arg1 cropRect:(CGRect)arg2 imageSizeLimit:(CGSize)arg3 ;
-(CGSize)largestOutputSizeWithNoUpscaling;
-(void)cropViewWillUpdateCropRegion:(id)arg1 ;
-(void)cropViewDidUpdateCropRegion:(id)arg1 ;
-(void)prepareInitialCropAspectRatio:(float)arg1 cropCenter:(CGPoint)arg2 cropZoomScale:(float)arg3 ;
-(float)perspectiveRotateAngleForRotateMode:(unsigned)arg1 ;
-(void)setPerspectiveRotationWithXRotatationAngle:(float)arg1 YRotationAngle:(float)arg2 ZRotationAngle:(float)arg3 ;
-(void)setPerspectiveRotationAngle:(float)arg1 rotationType:(unsigned)arg2 ;
-(char)hasAdjustedValues;
-(void)confirmCropping;
-(void)cancelCropping;
-(id)surfaceAfterAdjustmentForSize:(CGSize)arg1 ;
-(void)setPerspectiveXRotateAngle:(float)arg1 ;
-(void)setPerspectiveYRotateAngle:(float)arg1 ;
-(void)setPerspectiveZRotateAngle:(float)arg1 ;
-(NSArray *)_perspectiveContentRegion;
-(UIImage *)contentImage;
-(void)setDelegate:(id<IGAdjustControllerDelegate>)arg1 ;
-(id<IGAdjustControllerDelegate>)delegate;
-(id)initWithContentRect:(CGRect)arg1 ;
-(void)setContentImage:(UIImage *)arg1 ;
-(float)cropZoomScale;
@end

