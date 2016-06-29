

@class IGAlertActionBar, UIViewController;

@interface IGDogfooderAlertBarPresenter : NSObject {

	char _activated;
	IGAlertActionBar* _alertActionBar;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) IGAlertActionBar * alertActionBar;                               //@synthesize alertActionBar=_alertActionBar - In the implementation block
@property (assign,nonatomic) char activated;                                                  //@synthesize activated=_activated - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(void)updateModeChanged:(id)arg1 ;
-(IGAlertActionBar *)alertActionBar;
-(void)showAlertActionBarWithText:(id)arg1 style:(int)arg2 ;
-(void)setAlertActionBar:(IGAlertActionBar *)arg1 ;
-(id)init;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)activate;
-(char)activated;
-(void)setActivated:(char)arg1 ;
@end

