
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIView;

@interface IGRetroRegistrationSignInHelperToggleView : UIView {

	UIButton* _usernameButton;
	UIButton* _phoneButton;
	UIView* _usernameLine;
	UIView* _phoneLine;

}

@property (nonatomic,retain) UIButton * usernameButton;              //@synthesize usernameButton=_usernameButton - In the implementation block
@property (nonatomic,retain) UIButton * phoneButton;                 //@synthesize phoneButton=_phoneButton - In the implementation block
@property (nonatomic,retain) UIView * usernameLine;                  //@synthesize usernameLine=_usernameLine - In the implementation block
@property (nonatomic,retain) UIView * phoneLine;                     //@synthesize phoneLine=_phoneLine - In the implementation block
+(id)createButtonWithTitle:(id)arg1 ;
-(UIButton *)usernameButton;
-(void)setUsernameButton:(UIButton *)arg1 ;
-(UIView *)usernameLine;
-(UIView *)phoneLine;
-(void)setUsernameLine:(UIView *)arg1 ;
-(void)setPhoneLine:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setPhoneButton:(UIButton *)arg1 ;
-(UIButton *)phoneButton;
@end

