
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationPhoneNumberFrontView, IGRetroRegistrationBackgroundView;

@interface IGRetroRegistrationPhoneNumberView : UIView {

	IGRetroRegistrationPhoneNumberFrontView* _phoneNumberFrontView;
	IGRetroRegistrationBackgroundView* _backgroundView;

}

@property (nonatomic,retain) IGRetroRegistrationPhoneNumberFrontView * phoneNumberFrontView;              //@synthesize phoneNumberFrontView=_phoneNumberFrontView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                          //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)setPhoneNumberFrontView:(IGRetroRegistrationPhoneNumberFrontView *)arg1 ;
-(IGRetroRegistrationPhoneNumberFrontView *)phoneNumberFrontView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
@end

