
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>
#import <Instagram/IGImageViewDelegate.h>

@protocol IGRegistrationProfilePicHeaderViewDelegate;
@class IGProfilePictureHelper, IGProfilePictureImageView, UIColor, UIViewController, UIImageView, UIButton, IGCircularBorderView, UILabel, UIActivityIndicatorView, UIImage, NSString;

@interface IGRegistrationProfilePicHeaderView : UIView <IGProfilePictureImageViewDelegate, IGImageViewDelegate> {

	IGProfilePictureHelper* _profilePictureHelper;
	char _displayFBConfirmation;
	char _disallowProfilePictureChange;
	char _useCompactLayout;
	char _isLoading;
	IGProfilePictureImageView* _profilePictureView;
	UIColor* _imageBorderColor;
	UIColor* _titleColor;
	UIViewController*<IGRegistrationProfilePicHeaderViewDelegate> _delegate;
	UIImageView* _backgroundImageView;
	UIButton* _notMeButton;
	IGCircularBorderView* _borderView;
	UILabel* _loadingLabel;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,retain) IGProfilePictureImageView * profilePictureView;                                             //@synthesize profilePictureView=_profilePictureView - In the implementation block
@property (assign,nonatomic) UIImage * profilePicture; 
@property (assign,nonatomic) char displayFBConfirmation;                                                                 //@synthesize displayFBConfirmation=_displayFBConfirmation - In the implementation block
@property (nonatomic,retain) UIColor * imageBorderColor;                                                                 //@synthesize imageBorderColor=_imageBorderColor - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                                                                       //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) char disallowProfilePictureChange;                                                          //@synthesize disallowProfilePictureChange=_disallowProfilePictureChange - In the implementation block
@property (assign,nonatomic) char useCompactLayout;                                                                      //@synthesize useCompactLayout=_useCompactLayout - In the implementation block
@property (assign,nonatomic) char isLoading;                                                                             //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<IGRegistrationProfilePicHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                                                          //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIButton * notMeButton;                                                                     //@synthesize notMeButton=_notMeButton - In the implementation block
@property (nonatomic,retain) IGCircularBorderView * borderView;                                                          //@synthesize borderView=_borderView - In the implementation block
@property (nonatomic,retain) UILabel * loadingLabel;                                                                     //@synthesize loadingLabel=_loadingLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;                                                 //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profilePictureTapped:(id)arg1 ;
-(IGProfilePictureImageView *)profilePictureView;
-(void)setProfilePictureView:(IGProfilePictureImageView *)arg1 ;
-(UIImage *)profilePicture;
-(void)setProfilePicture:(UIImage *)arg1 ;
-(void)chooseProfilePicture;
-(id)initWithFrame:(CGRect)arg1 backgroundImage:(id)arg2 ;
-(void)setImageBorderColor:(UIColor *)arg1 ;
-(void)setDisallowProfilePictureChange:(char)arg1 ;
-(void)setUseCompactLayout:(char)arg1 ;
-(id)profileImageWithText:(id)arg1 ;
-(void)onNotMeTapped:(id)arg1 ;
-(IGCircularBorderView *)borderView;
-(char)disallowProfilePictureChange;
-(void)setFBConfirmationTitleUserName:(id)arg1 ;
-(void)loadFacebookProfilePictureIfUnset;
-(char)displayFBConfirmation;
-(void)setDisplayFBConfirmation:(char)arg1 ;
-(UIColor *)imageBorderColor;
-(char)useCompactLayout;
-(UIButton *)notMeButton;
-(void)setNotMeButton:(UIButton *)arg1 ;
-(void)setBorderView:(IGCircularBorderView *)arg1 ;
-(void)setDelegate:(UIViewController*<IGRegistrationProfilePicHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(UIViewController*<IGRegistrationProfilePicHeaderViewDelegate>)delegate;
-(UIImageView *)backgroundImageView;
-(char)isLoading;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(void)setLoadingLabel:(UILabel *)arg1 ;
-(UILabel *)loadingLabel;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)setIsLoading:(char)arg1 ;
@end

