/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:53 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/FBViewController.h>

@protocol FBGraphUser;
@class NSArray, FBProfilePictureView, UIImageView, UILabel, UIButton, NSBundle;

@interface FBUserSettingsViewController : FBViewController {

	char _attemptingLogin;
	NSArray* _permissions;
	NSArray* _readPermissions;
	NSArray* _publishPermissions;
	int _defaultAudience;
	FBProfilePictureView* _profilePicture;
	UIImageView* _backgroundImageView;
	UILabel* _connectedStateLabel;
	id<FBGraphUser> _me;
	UIButton* _loginLogoutButton;
	NSBundle* _bundle;
	/*^block*/id _sessionStateHandler;
	/*^block*/id _requestHandler;

}

@property (nonatomic,copy) NSArray * permissions;                                //@synthesize permissions=_permissions - In the implementation block
@property (nonatomic,copy) NSArray * readPermissions;                            //@synthesize readPermissions=_readPermissions - In the implementation block
@property (nonatomic,copy) NSArray * publishPermissions;                         //@synthesize publishPermissions=_publishPermissions - In the implementation block
@property (assign,nonatomic) int defaultAudience;                                //@synthesize defaultAudience=_defaultAudience - In the implementation block
@property (nonatomic,retain) FBProfilePictureView * profilePicture;              //@synthesize profilePicture=_profilePicture - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                  //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UILabel * connectedStateLabel;                      //@synthesize connectedStateLabel=_connectedStateLabel - In the implementation block
@property (nonatomic,retain) id<FBGraphUser> me;                                 //@synthesize me=_me - In the implementation block
@property (nonatomic,retain) UIButton * loginLogoutButton;                       //@synthesize loginLogoutButton=_loginLogoutButton - In the implementation block
@property (assign,nonatomic) char attemptingLogin;                               //@synthesize attemptingLogin=_attemptingLogin - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                                  //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy) id sessionStateHandler;                               //@synthesize sessionStateHandler=_sessionStateHandler - In the implementation block
@property (nonatomic,copy) id requestHandler;                                    //@synthesize requestHandler=_requestHandler - In the implementation block
-(FBProfilePictureView *)profilePicture;
-(void)setProfilePicture:(FBProfilePictureView *)arg1 ;
-(void)updateControls;
-(void)sessionStateChanged:(id)arg1 state:(int)arg2 error:(id)arg3 ;
-(void)setDefaultAudience:(int)arg1 ;
-(void)setSessionStateHandler:(id)arg1 ;
-(void)initializeBlocks;
-(void)setAttemptingLogin:(char)arg1 ;
-(id)sessionStateHandler;
-(void)setConnectedStateLabel:(UILabel *)arg1 ;
-(UILabel *)connectedStateLabel;
-(void)setLoginLogoutButton:(UIButton *)arg1 ;
-(UIButton *)loginLogoutButton;
-(void)loginLogoutButtonPressed:(id)arg1 ;
-(void)openSession:(char)arg1 ;
-(void)handleActiveSessionStateChanged:(id)arg1 ;
-(char)attemptingLogin;
-(NSArray *)publishPermissions;
-(NSArray *)readPermissions;
-(void)setReadPermissions:(NSArray *)arg1 ;
-(void)setPublishPermissions:(NSArray *)arg1 ;
-(int)defaultAudience;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)updateBackgroundImage;
-(UIImageView *)backgroundImageView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)setRequestHandler:(id)arg1 ;
-(id)requestHandler;
-(id<FBGraphUser>)me;
-(void)setMe:(id<FBGraphUser>)arg1 ;
-(NSArray *)permissions;
-(void)setPermissions:(NSArray *)arg1 ;
@end

