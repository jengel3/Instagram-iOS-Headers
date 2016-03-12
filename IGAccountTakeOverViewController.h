
#import <UIKit/UIViewController.h>

@protocol IGAccountTakeOverViewControllerDelegate;
@class NSDictionary, IGAccountTakeOverView, FBSDKAccessToken;

@interface IGAccountTakeOverViewController : UIViewController {

	id<IGAccountTakeOverViewControllerDelegate> _delegate;
	NSDictionary* _loggedInDictionary;
	IGAccountTakeOverView* _accountTakeOverView;
	FBSDKAccessToken* _facebookAccessToken;

}

@property (assign,nonatomic,__weak) id<IGAccountTakeOverViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * loggedInDictionary;                                      //@synthesize loggedInDictionary=_loggedInDictionary - In the implementation block
@property (nonatomic,retain) IGAccountTakeOverView * accountTakeOverView;                              //@synthesize accountTakeOverView=_accountTakeOverView - In the implementation block
@property (nonatomic,retain) FBSDKAccessToken * facebookAccessToken;                                   //@synthesize facebookAccessToken=_facebookAccessToken - In the implementation block
-(NSDictionary *)loggedInDictionary;
-(void)setAccountTakeOverView:(IGAccountTakeOverView *)arg1 ;
-(IGAccountTakeOverView *)accountTakeOverView;
-(void)signUp;
-(FBSDKAccessToken *)facebookAccessToken;
-(id)initWithLoggedInDictionary:(id)arg1 facebookAccessToken:(id)arg2 ;
-(void)setFacebookAccessToken:(FBSDKAccessToken *)arg1 ;
-(void)setDelegate:(id<IGAccountTakeOverViewControllerDelegate>)arg1 ;
-(id<IGAccountTakeOverViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLoad;
-(void)login;
-(char)prefersNavigationBarHidden;
@end

