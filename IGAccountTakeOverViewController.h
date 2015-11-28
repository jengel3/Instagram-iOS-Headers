
#import <UIKit/UIViewController.h>

@protocol IGAccountTakeOverViewControllerDelegate;
@class NSDictionary, IGAccountTakeOverView;

@interface IGAccountTakeOverViewController : UIViewController {

	id<IGAccountTakeOverViewControllerDelegate> _delegate;
	NSDictionary* _loggedInDictionary;
	IGAccountTakeOverView* _accountTakeOverView;

}

@property (assign,nonatomic,__weak) id<IGAccountTakeOverViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * loggedInDictionary;                                      //@synthesize loggedInDictionary=_loggedInDictionary - In the implementation block
@property (nonatomic,retain) IGAccountTakeOverView * accountTakeOverView;                              //@synthesize accountTakeOverView=_accountTakeOverView - In the implementation block
-(NSDictionary *)loggedInDictionary;
-(void)setAccountTakeOverView:(IGAccountTakeOverView *)arg1 ;
-(IGAccountTakeOverView *)accountTakeOverView;
-(void)signUp;
-(id)initWithLoggedInDictionary:(id)arg1 ;
-(void)setDelegate:(id<IGAccountTakeOverViewControllerDelegate>)arg1 ;
-(id<IGAccountTakeOverViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLoad;
-(void)login;
-(char)prefersNavigationBarHidden;
@end

