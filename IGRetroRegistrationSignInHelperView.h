
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationSignInHelperScrollView, IGRetroRegistrationBackgroundView;

@interface IGRetroRegistrationSignInHelperView : UIView {

	IGRetroRegistrationSignInHelperScrollView* _signInHelperScrollView;
	IGRetroRegistrationBackgroundView* _backgroundView;

}

@property (nonatomic,retain) IGRetroRegistrationSignInHelperScrollView * signInHelperScrollView;              //@synthesize signInHelperScrollView=_signInHelperScrollView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                              //@synthesize backgroundView=_backgroundView - In the implementation block
-(IGRetroRegistrationSignInHelperScrollView *)signInHelperScrollView;
-(void)setSignInHelperScrollView:(IGRetroRegistrationSignInHelperScrollView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
@end

