
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationLoginScrollView, IGRetroRegistrationBackgroundView;

@interface IGRetroRegistrationLoginView : UIView {

	IGRetroRegistrationLoginScrollView* _loginScrollView;
	IGRetroRegistrationBackgroundView* _backgroundView;

}

@property (nonatomic,retain) IGRetroRegistrationLoginScrollView * loginScrollView;              //@synthesize loginScrollView=_loginScrollView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)setLoginScrollView:(IGRetroRegistrationLoginScrollView *)arg1 ;
-(IGRetroRegistrationLoginScrollView *)loginScrollView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
@end

