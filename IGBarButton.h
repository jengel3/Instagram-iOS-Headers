
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface IGBarButton : UIView {

	int _style;
	UIButton* _mainButton;
	CGSize _touchTargetInflation;

}

@property (nonatomic,readonly) int style;                              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIButton * mainButton;                    //@synthesize mainButton=_mainButton - In the implementation block
@property (assign,nonatomic) CGSize touchTargetInflation;              //@synthesize touchTargetInflation=_touchTargetInflation - In the implementation block
+(id)barButtonItemWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
+(id)barButtonItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(int)arg4 ;
+(id)loadingBarButtonItemWithStyle:(int)arg1 ;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(int)arg4 image:(id)arg5 ;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(int)arg4 ;
-(void)setMainButton:(UIButton *)arg1 ;
-(id)initButtonWithImage:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4 accessibilityLabel:(id)arg5 ;
-(UIButton *)mainButton;
-(CGSize)touchTargetInflation;
-(void)setTouchTargetInflation:(CGSize)arg1 ;
-(char)enabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(int)style;
@end

