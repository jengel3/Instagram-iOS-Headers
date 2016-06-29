
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface IGExplorePromptTooltipView : UIView {

	UIView* _contentView;
	UIView* _leftBackground;
	UIView* _rightBackground;
	CGPoint _pinPoint;

}

@property (nonatomic,retain) UIView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * leftBackground;               //@synthesize leftBackground=_leftBackground - In the implementation block
@property (nonatomic,retain) UIView * rightBackground;              //@synthesize rightBackground=_rightBackground - In the implementation block
@property (assign,nonatomic) CGPoint pinPoint;                      //@synthesize pinPoint=_pinPoint - In the implementation block
-(id)initWithFrame:(CGRect)arg1 contentView:(id)arg2 ;
-(void)setPinPoint:(CGPoint)arg1 ;
-(void)setLeftBackground:(UIView *)arg1 ;
-(void)setRightBackground:(UIView *)arg1 ;
-(UIView *)leftBackground;
-(UIView *)rightBackground;
-(CGPoint)pinPoint;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
@end

