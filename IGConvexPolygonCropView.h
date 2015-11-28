
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGConvexPolygonScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGConvexPolygonCropViewDelegate;
@class IGConvexPolygonScrollView, NSArray, NSString;

@interface IGConvexPolygonCropView : UIView <IGConvexPolygonScrollViewDelegate, UIGestureRecognizerDelegate> {

	IGConvexPolygonScrollView* _scrollView;
	id<IGConvexPolygonCropViewDelegate> _delegate;
	GLKMatrix4 _contentTransform;

}

@property (assign,nonatomic) float cropAngle; 
@property (assign,nonatomic) float cropZoomScale; 
@property (assign,nonatomic) CGPoint cropCenter; 
@property (nonatomic,copy) NSArray * contentRegion; 
@property (assign,nonatomic) _GLKMatrix4 contentTransform;                                     //@synthesize contentTransform=_contentTransform - In the implementation block
@property (assign,nonatomic,__weak) id<IGConvexPolygonCropViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentView:(id)arg1 viewModelSize:(CGSize)arg2 ;
-(CGPoint)cropCenter;
-(void)updateContentViewWithContentTransform:(_GLKMatrix4)arg1 contentRegion:(id)arg2 cropCenter:(CGPoint)arg3 cropScale:(float)arg4 ;
-(void)setCropCenter:(CGPoint)arg1 ;
-(void)setCropZoomScale:(float)arg1 ;
-(NSArray *)contentRegion;
-(void)cancelAnimations;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(void)setContentRegion:(NSArray *)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 ;
-(void)scrollViewWillBeginZoomBouncingAnimation:(id)arg1 ;
-(void)scrollViewDidEndZoomBouncingAnimation:(id)arg1 ;
-(void)setCropAngle:(float)arg1 ;
-(float)cropAngle;
-(_GLKMatrix4)contentTransform;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGConvexPolygonCropViewDelegate>)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<IGConvexPolygonCropViewDelegate>)delegate;
-(float)cropZoomScale;
@end

