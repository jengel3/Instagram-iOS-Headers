
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, IGRegistrationBackgroundView, UIView;

@interface IGRetroRegistrationSSOLoginBackgroundView : UIView {

	UIButton* _switchAccountButton;
	UIButton* _signUpButton;
	IGRegistrationBackgroundView* _backgroundView;
	UIView* _footerViewSeperator;
	UIView* _footerButtonSeperator;
	UIView* _footerView;

}

@property (nonatomic,retain) IGRegistrationBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * footerViewSeperator;                               //@synthesize footerViewSeperator=_footerViewSeperator - In the implementation block
@property (nonatomic,retain) UIView * footerButtonSeperator;                             //@synthesize footerButtonSeperator=_footerButtonSeperator - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                        //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UIButton * switchAccountButton;                             //@synthesize switchAccountButton=_switchAccountButton - In the implementation block
@property (nonatomic,retain) UIButton * signUpButton;                                    //@synthesize signUpButton=_signUpButton - In the implementation block
-(UIView *)footerViewSeperator;
-(UIButton *)switchAccountButton;
-(UIButton *)signUpButton;
-(UIView *)footerButtonSeperator;
-(void)setSwitchAccountButton:(UIButton *)arg1 ;
-(void)setSignUpButton:(UIButton *)arg1 ;
-(void)setFooterViewSeperator:(UIView *)arg1 ;
-(void)setFooterButtonSeperator:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(IGRegistrationBackgroundView *)arg1 ;
-(IGRegistrationBackgroundView *)backgroundView;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
@end

