
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIActivityIndicatorView;

@interface IGTableViewInsetInfoView : UIView {

	UILabel* _label;
	UIImageView* _icon;
	UIActivityIndicatorView* _spinner;
	id _target;
	SEL _action;
	char _hideIndicatorIcon;
	int _currentButtonState;

}

@property (assign,nonatomic) int currentButtonState;              //@synthesize currentButtonState=_currentButtonState - In the implementation block
@property (assign,nonatomic) char hideIndicatorIcon;              //@synthesize hideIndicatorIcon=_hideIndicatorIcon - In the implementation block
-(void)setHideIndicatorIcon:(char)arg1 ;
-(void)setIndicatorState:(int)arg1 withText:(id)arg2 ;
-(void)tapped;
-(void)animateSpinner:(char)arg1 ;
-(char)hideIndicatorIcon;
-(int)currentButtonState;
-(void)setCurrentButtonState:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
@end

