/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:03 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

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
@property (assign,nonatomic) UIImage * profilePicture; 
@property (assign,nonatomic,__weak) UIViewController*<UITextFieldDelegate>*<IGProfilePictureHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * profilePictureEditButton;                                                                  //@synthesize profilePictureEditButton=_profilePictureEditButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)height;
-(void)profilePictureTapped:(id)arg1 ;
-(IGProfilePictureImageView *)profilePictureView;
-(void)setProfilePictureView:(IGProfilePictureImageView *)arg1 ;
-(UIImage *)profilePicture;
-(void)setProfilePicture:(UIImage *)arg1 ;
-(IGTextField *)usernameField;
-(id)initWithProfilePictureRect:(CGRect)arg1 ;
-(void)chooseProfilePicture;
-(void)loadFacebookProfilePicture;
-(void)setUsernameField:(IGTextField *)arg1 ;
-(UIButton *)profilePictureEditButton;
-(void)setProfilePictureEditButton:(UIButton *)arg1 ;
-(void)setDelegate:(UIViewController*<UITextFieldDelegate>*<IGProfilePictureHelperDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(UIViewController*<UITextFieldDelegate>*<IGProfilePictureHelperDelegate>)delegate;
-(IGTextField *)passwordField;
-(void)setPasswordField:(IGTextField *)arg1 ;
@end

