
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>

@class IGRetroRegistrationSignUpViewController, IGRetroRegistrationTextField, IGRetroRegistrationNextButton, IGProfilePictureImageView, IGRetroRegistrationUsernameField, IGCoreTextView, UILabel;

@interface IGRetroRegistrationSignUpScrollView : UIScrollView {

	IGRetroRegistrationSignUpViewController* _vcDelegate;
	IGRetroRegistrationTextField* _passwordField;
	IGRetroRegistrationNextButton* _nextButton;
	IGProfilePictureImageView* _profilePictureView;
	IGRetroRegistrationUsernameField* _usernameField;
	IGRetroRegistrationTextField* _fullnameField;
	IGCoreTextView* _termView;
	UILabel* _photoLabel;

}

@property (nonatomic,retain) IGProfilePictureImageView * profilePictureView;                           //@synthesize profilePictureView=_profilePictureView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationUsernameField * usernameField;                         //@synthesize usernameField=_usernameField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * passwordField;                             //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * fullnameField;                             //@synthesize fullnameField=_fullnameField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationNextButton * nextButton;                               //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) IGCoreTextView * termView;                                                //@synthesize termView=_termView - In the implementation block
@property (nonatomic,retain) UILabel * photoLabel;                                                     //@synthesize photoLabel=_photoLabel - In the implementation block
@property (assign,nonatomic,__weak) IGRetroRegistrationSignUpViewController * vcDelegate;              //@synthesize vcDelegate=_vcDelegate - In the implementation block
+(id)createPasswordField;
-(IGProfilePictureImageView *)profilePictureView;
-(void)setProfilePictureView:(IGProfilePictureImageView *)arg1 ;
-(UILabel *)photoLabel;
-(id)pictureView;
-(IGRetroRegistrationTextField *)fullnameField;
-(IGRetroRegistrationUsernameField *)usernameField;
-(IGCoreTextView *)termView;
-(void)addPasswordField;
-(IGRetroRegistrationSignUpViewController *)vcDelegate;
-(void)setVcDelegate:(IGRetroRegistrationSignUpViewController *)arg1 ;
-(void)setUsernameField:(IGRetroRegistrationUsernameField *)arg1 ;
-(void)setFullnameField:(IGRetroRegistrationTextField *)arg1 ;
-(void)setTermView:(IGCoreTextView *)arg1 ;
-(void)setPhotoLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGRetroRegistrationTextField *)passwordField;
-(IGRetroRegistrationNextButton *)nextButton;
-(void)setNextButton:(IGRetroRegistrationNextButton *)arg1 ;
-(void)setPasswordField:(IGRetroRegistrationTextField *)arg1 ;
@end

