
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationPhoneConfirmationFrontView, IGRetroRegistrationBackgroundView;

@interface IGRetroRegistrationPhoneConfirmationView : UIView {

	IGRetroRegistrationPhoneConfirmationFrontView* _confirmationFrontView;
	IGRetroRegistrationBackgroundView* _backgroundView;

}

@property (nonatomic,retain) IGRetroRegistrationPhoneConfirmationFrontView * confirmationFrontView;              //@synthesize confirmationFrontView=_confirmationFrontView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                                 //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)setConfirmationFrontView:(IGRetroRegistrationPhoneConfirmationFrontView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 phoneNumber:(id)arg2 ;
-(IGRetroRegistrationPhoneConfirmationFrontView *)confirmationFrontView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
@end

