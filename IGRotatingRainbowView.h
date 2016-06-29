
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface IGRotatingRainbowView : UIView {

	UIImageView* _rotatingBackgroundView;

}

@property (nonatomic,retain) UIImageView * rotatingBackgroundView;              //@synthesize rotatingBackgroundView=_rotatingBackgroundView - In the implementation block
-(void)setRotatingBackgroundView:(UIImageView *)arg1 ;
-(void)adjustRotatingBackgroundViewFrameIfNeeded;
-(UIImageView *)rotatingBackgroundView;
-(void)rotateBackgroundView;
-(id)initWithFrame:(CGRect)arg1 rainbowViewType:(int)arg2 ;
-(void)rotateForTransitionWithClockwise:(char)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
@end

