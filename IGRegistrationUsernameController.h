
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGRegistrationStepObject.h>

@protocol IGRegistrationUsernameControllerDelegate;
@class IGRegistrationStepView, IGRegistrationNavigationBar, UIView, NSTimer, NSArray, UIScrollView, NSString;

@interface IGRegistrationUsernameController : NSObject <IGTextFieldDelegate, IGRegistrationStepObject> {

	char _proactivelyCheckUsername;
	id<IGRegistrationUsernameControllerDelegate> _delegate;
	IGRegistrationStepView* _stepView;
	IGRegistrationNavigationBar* _navBar;
	UIView* _iconView;
	NSTimer* _usernameCheckTimer;
	NSArray* _suggestedUsernames;
	UIScrollView* _suggestionsScrollView;

}

@property (assign,nonatomic,__weak) id<IGRegistrationUsernameControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRegistrationStepView * stepView;                                         //@synthesize stepView=_stepView - In the implementation block
@property (nonatomic,retain) IGRegistrationNavigationBar * navBar;                                      //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UIView * iconView;                                                         //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) NSTimer * usernameCheckTimer;                                              //@synthesize usernameCheckTimer=_usernameCheckTimer - In the implementation block
@property (nonatomic,retain) NSArray * suggestedUsernames;                                              //@synthesize suggestedUsernames=_suggestedUsernames - In the implementation block
@property (nonatomic,retain) UIScrollView * suggestionsScrollView;                                      //@synthesize suggestionsScrollView=_suggestionsScrollView - In the implementation block
@property (assign,nonatomic) char proactivelyCheckUsername;                                             //@synthesize proactivelyCheckUsername=_proactivelyCheckUsername - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nextButtonTapped;
-(void)checkUsername;
-(void)startOrRestartUsernameCheckTimer;
-(IGRegistrationStepView *)stepView;
-(void)stepViewWillAppear;
-(void)setStepView:(IGRegistrationStepView *)arg1 ;
-(NSArray *)suggestedUsernames;
-(id)initWithSuggestedUsernames:(id)arg1 ;
-(void)setSuggestedUsernames:(NSArray *)arg1 ;
-(UIScrollView *)suggestionsScrollView;
-(void)usernameButtonTapped:(id)arg1 ;
-(void)validateUsername;
-(void)checkUsernameWithUsernameValidCompletion:(/*^block*/id)arg1 ;
-(void)setProactivelyCheckUsername:(char)arg1 ;
-(char)proactivelyCheckUsername;
-(NSTimer *)usernameCheckTimer;
-(void)setUsernameCheckTimer:(NSTimer *)arg1 ;
-(void)validateTextField:(id)arg1 ;
-(void)setSuggestionsScrollView:(UIScrollView *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRegistrationUsernameControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGRegistrationUsernameControllerDelegate>)delegate;
-(char)textFieldShouldReturn:(id)arg1 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(void)setNavBar:(IGRegistrationNavigationBar *)arg1 ;
-(IGRegistrationNavigationBar *)navBar;
@end

