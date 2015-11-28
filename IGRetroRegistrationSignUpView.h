
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationSignUpScrollView, IGRetroRegistrationBackgroundView;

@interface IGRetroRegistrationSignUpView : UIView {

	IGRetroRegistrationSignUpScrollView* _signUpScrollView;
	IGRetroRegistrationBackgroundView* _backgroundView;

}

@property (nonatomic,retain) IGRetroRegistrationSignUpScrollView * signUpScrollView;              //@synthesize signUpScrollView=_signUpScrollView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                  //@synthesize backgroundView=_backgroundView - In the implementation block
-(IGRetroRegistrationSignUpScrollView *)signUpScrollView;
-(void)setSignUpScrollView:(IGRetroRegistrationSignUpScrollView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
@end

