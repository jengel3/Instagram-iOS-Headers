
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewCell.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>
#import <Instagram/IGImageViewDelegate.h>

@protocol UITextFieldDelegateIGProfilePictureHelperDelegate;
@class IGProfilePictureHelper, IGTextField, IGProfilePictureImageView, UIViewController, UIButton, UIImage, NSString;

@interface IGGroupedTableViewProfileCell : IGGroupedTableViewCell <IGProfilePictureImageViewDelegate, IGImageViewDelegate> {

	IGProfilePictureHelper* _profilePictureHelper;
	IGTextField* _usernameField;
	IGTextField* _passwordField;
	IGProfilePictureImageView* _profilePictureView;
	UIViewController*<UITextFieldDelegate>*<IGProfilePictureHelperDelegate> _delegate;
	UIButton* _profilePictureEditButton;

}

@property (nonatomic,retain) IGTextField * usernameField;                                                                          //@synthesize usernameField=_usernameField - In the implementation block
@property (nonatomic,retain) IGTextField * passwordField;                                                                          //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePictureView;                                                       //@synthesize profilePictureView=_profilePictureView - In the implementation block
@property (nonatomic,retain) UIButton * profilePictureEditButton;                                                                  //@synthesize profilePictureEditButton=_profilePictureEditButton - In the implementation block
@property (nonatomic,retain) UIImage * profilePicture; 
@property (assign,nonatomic,__weak) UIViewController*<UITextFieldDelegate>*<IGProfilePictureHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)height;
-(IGProfilePictureImageView *)profilePictureView;
-(void)setProfilePictureView:(IGProfilePictureImageView *)arg1 ;
-(id)initWithProfilePictureRect:(CGRect)arg1 ;
-(void)chooseProfilePicture;
-(UIImage *)profilePicture;
-(void)setProfilePicture:(UIImage *)arg1 ;
-(UIButton *)profilePictureEditButton;
-(void)setProfilePictureEditButton:(UIButton *)arg1 ;
-(void)profilePictureTapped:(id)arg1 ;
-(void)setUsernameField:(IGTextField *)arg1 ;
-(IGTextField *)usernameField;
-(void)setDelegate:(UIViewController*<UITextFieldDelegate>*<IGProfilePictureHelperDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(UIViewController*<UITextFieldDelegate>*<IGProfilePictureHelperDelegate>)delegate;
-(IGTextField *)passwordField;
-(void)setPasswordField:(IGTextField *)arg1 ;
@end

