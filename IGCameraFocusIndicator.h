
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class CADisplayLink, UIColor;

@interface IGCameraFocusIndicator : UIView {

	CADisplayLink* _reviewDisplayLink;
	int _frame;
	int _stopIn;
	UIColor* _indicatorColor;

}

@property (nonatomic,retain) UIColor * indicatorColor;              //@synthesize indicatorColor=_indicatorColor - In the implementation block
-(void)startAnimatingAtPoint:(CGPoint)arg1 ;
-(void)stopRenderLoop;
-(void)startRenderLoop;
-(UIColor *)indicatorColor;
-(void)completeAnimation;
-(void)setIndicatorColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stopAnimating;
@end

