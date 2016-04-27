

#import <Instagram/Instagram-Structs.h>
@class NSArray;

@interface IGTransformController : NSObject {

	char _shouldZoomToFit;
	char _perspectiveTransformNeedRefresh;
	char _cropTransformNeedRefresh;
	GLKMatrix4 _perspectiveTransform;
	GLKMatrix4 _cropTransform;
	CGPoint _center;
	float _perspectiveAutoZoomScaleRatio;
	float _aspectRatio;
	float _originalCropAspectRatio;
	float _orientationAngle;
	float _rotationX;
	float _rotationY;
	float _rotationZ;
	float _cropRotateAngle;
	float _cropScaleRatio;
	CGPoint _cropCenter;

}

@property (assign,nonatomic) float aspectRatio;                               //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) float originalCropAspectRatio;                   //@synthesize originalCropAspectRatio=_originalCropAspectRatio - In the implementation block
@property (assign,nonatomic) float orientationAngle;                          //@synthesize orientationAngle=_orientationAngle - In the implementation block
@property (assign,nonatomic) float rotationX;                                 //@synthesize rotationX=_rotationX - In the implementation block
@property (assign,nonatomic) float rotationY;                                 //@synthesize rotationY=_rotationY - In the implementation block
@property (assign,nonatomic) float rotationZ;                                 //@synthesize rotationZ=_rotationZ - In the implementation block
@property (nonatomic,readonly) _GLKMatrix4 perspectiveTransform;              //@synthesize perspectiveTransform=_perspectiveTransform - In the implementation block
@property (nonatomic,readonly) NSArray * contentRegion; 
@property (assign,nonatomic) float cropRotateAngle;                           //@synthesize cropRotateAngle=_cropRotateAngle - In the implementation block
@property (assign,nonatomic) CGPoint cropCenter;                              //@synthesize cropCenter=_cropCenter - In the implementation block
@property (assign,nonatomic) float cropScaleRatio;                            //@synthesize cropScaleRatio=_cropScaleRatio - In the implementation block
@property (nonatomic,readonly) _GLKMatrix4 cropTransform;                     //@synthesize cropTransform=_cropTransform - In the implementation block
-(void)setCropCenter:(CGPoint)arg1 ;
-(NSArray *)contentRegion;
-(CGPoint)cropCenter;
-(void)updatePerspectiveTransform;
-(void)generatePerspectiveTransform;
-(void)updateCropTransformWithPerspectiveTransform:(_GLKMatrix4)arg1 ;
-(float)zoomingScaleForPerspective:(_GLKMatrix4)arg1 withOriginCenter:(CGPoint)arg2 ;
-(void)generateCropTransform;
-(CGPoint)computePositionForPerspectiveTransform:(_GLKMatrix4)arg1 coordinate:(CGPoint)arg2 ;
-(CGPoint)aspectRatioAdjustedPointFromPoint:(CGPoint)arg1 forAspectRatio:(float)arg2 ;
-(float)computeDigonalScaleRatioWithStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 origin:(CGPoint)arg3 ;
-(void)setOrientationAngle:(float)arg1 ;
-(void)setCropScaleRatio:(float)arg1 ;
-(void)setCropRotateAngle:(float)arg1 ;
-(float)originalCropAspectRatio;
-(void)setOriginalCropAspectRatio:(float)arg1 ;
-(float)orientationAngle;
-(float)cropRotateAngle;
-(float)cropScaleRatio;
-(_GLKMatrix4)cropTransform;
-(float)aspectRatio;
-(id)init;
-(_GLKMatrix4)perspectiveTransform;
-(void)setRotationX:(float)arg1 ;
-(void)setRotationY:(float)arg1 ;
-(float)rotationX;
-(float)rotationY;
-(void)setRotationZ:(float)arg1 ;
-(float)rotationZ;
-(void)setAspectRatio:(float)arg1 ;
@end

