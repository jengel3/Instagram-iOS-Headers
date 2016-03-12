
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGAccountRecoveryEmailConfirmationScrollView, IGRetroRegistrationBackgroundView;

@interface IGAccountRecoveryEmailConfirmationView : UIView {

	IGAccountRecoveryEmailConfirmationScrollView* _confirmationScrollView;
	IGRetroRegistrationBackgroundView* _backgroundView;

}

@property (nonatomic,retain) IGAccountRecoveryEmailConfirmationScrollView * confirmationScrollView;              //@synthesize confirmationScrollView=_confirmationScrollView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                                 //@synthesize backgroundView=_backgroundView - In the implementation block
-(IGAccountRecoveryEmailConfirmationScrollView *)confirmationScrollView;
-(void)setConfirmationScrollView:(IGAccountRecoveryEmailConfirmationScrollView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
@end

