
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface IGRotatingRainbowView : UIView {

	UIImageView* _rotatingBackgroundView;

}

@property (nonatomic,retain) UIImageView * rotatingBackgroundView;              //@synthesize rotatingBackgroundView=_rotatingBackgroundView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 rainbowViewType:(int)arg2 ;
-(void)rotateForTransitionWithClockwise:(char)arg1 ;
-(void)setRotatingBackgroundView:(UIImageView *)arg1 ;
-(UIImageView *)rotatingBackgroundView;
-(void)rotateBackgroundView;
-(void)dealloc;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
@end

