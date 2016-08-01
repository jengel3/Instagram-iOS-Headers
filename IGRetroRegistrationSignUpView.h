
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationSignUpScrollView, IGRetroRegistrationBackgroundView;

@interface IGRetroRegistrationSignUpView : UIView {

	char _shouldSplitUsername;
	IGRetroRegistrationSignUpScrollView* _signUpScrollView;
	IGRetroRegistrationBackgroundView* _backgroundView;

}

@property (nonatomic,retain) IGRetroRegistrationSignUpScrollView * signUpScrollView;              //@synthesize signUpScrollView=_signUpScrollView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                  //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) char shouldSplitUsername;                                          //@synthesize shouldSplitUsername=_shouldSplitUsername - In the implementation block
-(id)initWithFrame:(CGRect)arg1 shouldSplitUsername:(char)arg2 ;
-(char)shouldSplitUsername;
-(IGRetroRegistrationSignUpScrollView *)signUpScrollView;
-(void)setSignUpScrollView:(IGRetroRegistrationSignUpScrollView *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
@end

