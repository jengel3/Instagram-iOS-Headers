
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface IGCircularBorderView : UIView {

	UIColor* _borderColor;

}

@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
@end

