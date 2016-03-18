
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface IGBarButton : UIView {

	UIButton* _mainButton;
	CGSize _touchTargetInflation;

}

@property (assign,nonatomic) char enabled; 
@property (nonatomic,retain) UIButton * mainButton;                    //@synthesize mainButton=_mainButton - In the implementation block
@property (assign,nonatomic) CGSize touchTargetInflation;              //@synthesize touchTargetInflation=_touchTargetInflation - In the implementation block
+(id)barButtonItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 tintColor:(id)arg4 semiBold:(char)arg5 ;
+(id)barButtonItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
+(id)barButtonItemWithImage:(id)arg1 accessibilityLabel:(id)arg2 target:(id)arg3 action:(SEL)arg4 ;
+(id)doneItemWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)nextItemWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)cancelItemWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)sendItemWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)dismissItemWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)backItemWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)cameraNextItemWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)cameraDoneItemWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)cameraOKItemWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)cameraShareItemWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)loadingBarButtonItem;
+(id)refreshBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 image:(id)arg4 accessibilityLabel:(id)arg5 semiBold:(char)arg6 ;
-(void)setMainButton:(UIButton *)arg1 ;
-(UIButton *)mainButton;
-(CGSize)touchTargetInflation;
-(void)setTouchTargetInflation:(CGSize)arg1 ;
-(char)enabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
@end

