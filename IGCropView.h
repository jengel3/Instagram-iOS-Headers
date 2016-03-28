
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol IGCropViewUserInteractionDelegate;
@class IGScrollView, UIView, UITapGestureRecognizer, UIPanGestureRecognizer, NSString;

@interface IGCropView : UIView <UIScrollViewDelegate> {

	IGScrollView* _scrollView;
	char _isInteracting;
	char _didSetPinchProperties;
	char _zoomEnabled;
	char _nonSquareEnabled;
	UIView* _circularCropperView;
	char _circularCropMode;
	float _cropAngle;
	UITapGestureRecognizer* _tap;
	UIPanGestureRecognizer* _minimizePan;
	id<IGCropViewUserInteractionDelegate> _userInteractionDelegate;

}

@property (nonatomic,retain) UIView * contentView; 
@property (getter=isInteracting,nonatomic,readonly) char interacting; 
@property (assign,getter=isZoomEnabled,nonatomic) char zoomEnabled; 
@property (assign,getter=isNonSquareEnabled,nonatomic) char nonSquareEnabled;                                   //@synthesize nonSquareEnabled=_nonSquareEnabled - In the implementation block
@property (assign,nonatomic) float maximumZoom; 
@property (assign,nonatomic) CGPoint cropCenter; 
@property (assign,nonatomic) float cropZoom; 
@property (assign,nonatomic) float cropAngle;                                                                   //@synthesize cropAngle=_cropAngle - In the implementation block
@property (assign,nonatomic) int cropMode; 
@property (assign,nonatomic) char circularCropMode;                                                             //@synthesize circularCropMode=_circularCropMode - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tap;                                                      //@synthesize tap=_tap - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * minimizePan;                                              //@synthesize minimizePan=_minimizePan - In the implementation block
@property (assign,nonatomic,__weak) id<IGCropViewUserInteractionDelegate> userInteractionDelegate;              //@synthesize userInteractionDelegate=_userInteractionDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInteractionDelegate:(id<IGCropViewUserInteractionDelegate>)arg1 ;
-(void)setNonSquareEnabled:(char)arg1 ;
-(void)setTap:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tap;
-(CGPoint)cropCenter;
-(void)setCropCenter:(CGPoint)arg1 ;
-(CGSize)largestOutputSizeWithNoUpscaling;
-(void)setCropAngle:(float)arg1 ;
-(float)cropAngle;
-(UIPanGestureRecognizer *)minimizePan;
-(void)checkInteractions:(id)arg1 ;
-(void)setMinimizePan:(UIPanGestureRecognizer *)arg1 ;
-(float)maxAspectRatioSetting;
-(float)minAspectRatioSetting;
-(void)setCropCenter:(CGPoint)arg1 animated:(char)arg2 ;
-(float)straightenScaleForAngle:(float)arg1 ;
-(void)setCropMode:(int)arg1 animated:(char)arg2 ;
-(float)cropZoom;
-(void)maybeSetPinchProperties;
-(id<IGCropViewUserInteractionDelegate>)userInteractionDelegate;
-(id)circularCropperView;
-(void)setCropZoom:(float)arg1 ;
-(IGCropInfo)cropInfo;
-(void)addBlockedGestureRecognizer:(id)arg1 ;
-(void)setCircularCropMode:(char)arg1 ;
-(char)isNonSquareEnabled;
-(char)circularCropMode;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setZoomEnabled:(char)arg1 ;
-(char)isZoomEnabled;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGRect)visibleContentRect;
-(void)setCropMode:(int)arg1 ;
-(int)cropMode;
-(float)maximumZoom;
-(void)setMaximumZoom:(float)arg1 ;
-(void)updateZoomScales;
-(char)isInteracting;
@end

