
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationSSOLoginBackgroundView, UIButton, IGImageView, NSString, UIImageView, UIView, UIActivityIndicatorView;

@interface IGRetroRegistrationSSOLoginView : UIView {

	IGRetroRegistrationSSOLoginBackgroundView* _backgroundView;
	UIButton* _loginButton;
	UIButton* _removeAccountButton;
	IGImageView* _profilePictureView;
	NSString* _igHandle;
	UIImageView* _iconView;
	UIView* _profilePictureBackgroundView;
	UIActivityIndicatorView* _buttonLoadingIndicator;

}

@property (nonatomic,retain) NSString * igHandle;                                                     //@synthesize igHandle=_igHandle - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationSSOLoginBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                                  //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) IGImageView * profilePictureView;                                        //@synthesize profilePictureView=_profilePictureView - In the implementation block
@property (nonatomic,retain) UIView * profilePictureBackgroundView;                                   //@synthesize profilePictureBackgroundView=_profilePictureBackgroundView - In the implementation block
@property (nonatomic,retain) UIButton * loginButton;                                                  //@synthesize loginButton=_loginButton - In the implementation block
@property (nonatomic,retain) UIButton * removeAccountButton;                                          //@synthesize removeAccountButton=_removeAccountButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * buttonLoadingIndicator;                        //@synthesize buttonLoadingIndicator=_buttonLoadingIndicator - In the implementation block
-(IGImageView *)profilePictureView;
-(void)setProfilePictureView:(IGImageView *)arg1 ;
-(void)setLoginButton:(UIButton *)arg1 ;
-(id)createProfilePictureView;
-(id)createProfilePictureBackgroundView;
-(id)createLoginButton;
-(id)createRemoveButton;
-(UIView *)profilePictureBackgroundView;
-(UIActivityIndicatorView *)buttonLoadingIndicator;
-(NSString *)igHandle;
-(void)setRemoveAccountButton:(UIButton *)arg1 ;
-(void)setIgHandle:(NSString *)arg1 ;
-(void)setProfilePictureBackgroundView:(UIView *)arg1 ;
-(void)setButtonLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIButton *)removeAccountButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(IGRetroRegistrationSSOLoginBackgroundView *)arg1 ;
-(IGRetroRegistrationSSOLoginBackgroundView *)backgroundView;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setIsLoading:(char)arg1 ;
-(void)setUsername:(id)arg1 ;
-(UIButton *)loginButton;
@end

