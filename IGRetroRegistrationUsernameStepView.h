
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationUsernameViewController, IGRetroRegistrationUsernameScrollView, IGRetroRegistrationBackgroundView, IGRetroRegistrationUsernameField, IGRetroRegistrationNextButton, UIButton;

@interface IGRetroRegistrationUsernameStepView : UIView {

	IGRetroRegistrationUsernameViewController* _delegate;
	IGRetroRegistrationUsernameScrollView* _usernameScrollView;
	IGRetroRegistrationBackgroundView* _backgroundView;

}

@property (nonatomic,retain) IGRetroRegistrationUsernameScrollView * usernameScrollView;               //@synthesize usernameScrollView=_usernameScrollView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) IGRetroRegistrationUsernameViewController * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGRetroRegistrationUsernameField * usernameField; 
@property (nonatomic,readonly) IGRetroRegistrationNextButton * nextButton; 
@property (nonatomic,readonly) UIButton * refreshButton; 
-(IGRetroRegistrationUsernameScrollView *)usernameScrollView;
-(void)didTapFooterButton;
-(IGRetroRegistrationUsernameField *)usernameField;
-(void)scrollViewScrollToPoint:(CGPoint)arg1 ;
-(void)restoreScrollViewPosition;
-(float)nextButtonMaxY;
-(void)setUsernameScrollView:(IGRetroRegistrationUsernameScrollView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(IGRetroRegistrationUsernameViewController *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(IGRetroRegistrationUsernameViewController *)delegate;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
-(IGRetroRegistrationNextButton *)nextButton;
-(UIButton *)refreshButton;
@end

