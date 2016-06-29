
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationBackgroundView, IGProfilePictureImageView, UILabel, UIButton, NSURL, NSString;

@interface IGAccountTakeOverView : UIView {

	IGRetroRegistrationBackgroundView* _backgroundView;
	IGProfilePictureImageView* _profilePictureView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _confirmLoginButton;
	NSURL* _profilePictureURL;
	NSString* _username;

}

@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePictureView;                  //@synthesize profilePictureView=_profilePictureView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                      //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIButton * confirmLoginButton;                                   //@synthesize confirmLoginButton=_confirmLoginButton - In the implementation block
@property (nonatomic,readonly) NSURL * profilePictureURL;                                     //@synthesize profilePictureURL=_profilePictureURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                                      //@synthesize username=_username - In the implementation block
-(IGProfilePictureImageView *)profilePictureView;
-(void)setProfilePictureView:(IGProfilePictureImageView *)arg1 ;
-(NSURL *)profilePictureURL;
-(void)setConfirmLoginButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 username:(id)arg2 profilePictureURL:(id)arg3 ;
-(UIButton *)confirmLoginButton;
-(UILabel *)descriptionLabel;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(NSString *)username;
@end

