
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGTableViewInsetInfoViewDelegate;
@class UILabel, UIImageView, UIActivityIndicatorView;

@interface IGTableViewInsetInfoView : UIView {

	UILabel* _label;
	UILabel* _detailLabel;
	UIImageView* _icon;
	UIActivityIndicatorView* _spinner;
	char _hideIndicatorIcon;
	int _currentButtonState;
	id<IGTableViewInsetInfoViewDelegate> _delegate;

}

@property (assign,nonatomic) int currentButtonState;                                            //@synthesize currentButtonState=_currentButtonState - In the implementation block
@property (assign,nonatomic) char hideIndicatorIcon;                                            //@synthesize hideIndicatorIcon=_hideIndicatorIcon - In the implementation block
@property (assign,nonatomic,__weak) id<IGTableViewInsetInfoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)tapped;
-(void)animateSpinner:(char)arg1 ;
-(char)hideIndicatorIcon;
-(int)currentButtonState;
-(void)setCurrentButtonState:(int)arg1 ;
-(void)setHideIndicatorIcon:(char)arg1 ;
-(void)setIndicatorState:(int)arg1 withText:(id)arg2 detail:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGTableViewInsetInfoViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id<IGTableViewInsetInfoViewDelegate>)delegate;
@end

