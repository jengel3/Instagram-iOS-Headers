
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>

@class IGRetroRegistrationSignUpViewController, IGRetroRegistrationUsernameField, IGRetroRegistrationTextField, UIButton, IGCoreTextView, IGProfilePictureImageView, UILabel;

@interface IGRetroRegistrationSignUpScrollView : UIScrollView {

	IGRetroRegistrationSignUpViewController* _vcDelegate;
	IGRetroRegistrationUsernameField* _usernameField;
	IGRetroRegistrationTextField* _passwordField;
	IGRetroRegistrationTextField* _fullnameField;
	UIButton* _nextButton;
	IGCoreTextView* _termView;
	IGProfilePictureImageView* _profilePictureView;
	UILabel* _photoLabel;

}

@property (assign,nonatomic,__weak) IGRetroRegistrationSignUpViewController * vcDelegate;              //@synthesize vcDelegate=_vcDelegate - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationUsernameField * usernameField;                         //@synthesize usernameField=_usernameField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * passwordField;                             //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * fullnameField;                             //@synthesize fullnameField=_fullnameField - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;                                                    //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) IGCoreTextView * termView;                                                //@synthesize termView=_termView - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePictureView;                           //@synthesize profilePictureView=_profilePictureView - In the implementation block
@property (nonatomic,retain) UILabel * photoLabel;                                                     //@synthesize photoLabel=_photoLabel - In the implementation block
-(IGProfilePictureImageView *)profilePictureView;
-(void)setProfilePictureView:(IGProfilePictureImageView *)arg1 ;
-(IGRetroRegistrationUsernameField *)usernameField;
-(void)setUsernameField:(IGRetroRegistrationUsernameField *)arg1 ;
-(IGCoreTextView *)termView;
-(void)setTermView:(IGCoreTextView *)arg1 ;
-(UILabel *)photoLabel;
-(id)pictureView;
-(IGRetroRegistrationTextField *)fullnameField;
-(IGRetroRegistrationSignUpViewController *)vcDelegate;
-(void)setVcDelegate:(IGRetroRegistrationSignUpViewController *)arg1 ;
-(void)setFullnameField:(IGRetroRegistrationTextField *)arg1 ;
-(void)setPhotoLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGRetroRegistrationTextField *)passwordField;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
-(void)setPasswordField:(IGRetroRegistrationTextField *)arg1 ;
@end

