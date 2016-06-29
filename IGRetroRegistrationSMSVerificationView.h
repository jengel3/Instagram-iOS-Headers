
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationSMSVerificationScrollView, IGRetroRegistrationBackgroundView;

@interface IGRetroRegistrationSMSVerificationView : UIView {

	IGRetroRegistrationSMSVerificationScrollView* _smsVerificationScrollView;
	IGRetroRegistrationBackgroundView* _backgroundView;

}

@property (nonatomic,retain) IGRetroRegistrationSMSVerificationScrollView * smsVerificationScrollView;              //@synthesize smsVerificationScrollView=_smsVerificationScrollView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                                    //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)setSmsVerificationScrollView:(IGRetroRegistrationSMSVerificationScrollView *)arg1 ;
-(id)smsVerificationView;
-(IGRetroRegistrationSMSVerificationScrollView *)smsVerificationScrollView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
@end

