
#import <Instagram/IGNavigationController.h>
#import <Instagram/IGUsernameViewControllerDelegate.h>
#import <Instagram/IGNavigationControllerDelegate.h>
#import <Instagram/IGRegistrationFindUsersViewControllerDelegate.h>
#import <Instagram/IGWelcomeViewControllerDelegate.h>
#import <Instagram/IGRegistrationFlowViewControllerDelegate.h>
#import <Instagram/IGClusterBrowsingV2ViewControllerDelegate.h>

@class NSDictionary, NSString, IGPeopleFeedViewController, UIBarButtonItem;

@interface IGRegistrationNavigationController : IGNavigationController <IGUsernameViewControllerDelegate, IGNavigationControllerDelegate, IGRegistrationFindUsersViewControllerDelegate, IGWelcomeViewControllerDelegate, IGRegistrationFlowViewControllerDelegate, IGClusterBrowsingV2ViewControllerDelegate> {

	int _currentStep;
	char _registerWithFB;
	char _skipFindFriends;
	char _enterFromAutoLogin;
	char _isSwitchingUsers;
	NSDictionary* _facebookMeInfo;
	NSString* _email;
	int _findFriendsViewMode;
	int _selectedFindFriendsViewModes;
	IGPeopleFeedViewController* _discoverMorePeopleVC;
	UIBarButtonItem* _doneButton;

}

@property (assign,nonatomic) char registerWithFB;                                            //@synthesize registerWithFB=_registerWithFB - In the implementation block
@property (nonatomic,retain) NSDictionary * facebookMeInfo;                                  //@synthesize facebookMeInfo=_facebookMeInfo - In the implementation block
@property (nonatomic,retain) NSString * email;                                               //@synthesize email=_email - In the implementation block
@property (assign,nonatomic) int findFriendsViewMode;                                        //@synthesize findFriendsViewMode=_findFriendsViewMode - In the implementation block
@property (assign,nonatomic) int selectedFindFriendsViewModes;                               //@synthesize selectedFindFriendsViewModes=_selectedFindFriendsViewModes - In the implementation block
@property (nonatomic,retain) IGPeopleFeedViewController * discoverMorePeopleVC;              //@synthesize discoverMorePeopleVC=_discoverMorePeopleVC - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                   //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic) char isSwitchingUsers;                                          //@synthesize isSwitchingUsers=_isSwitchingUsers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onFacebookAuthSuccess;
-(void)clusterBrowsingV2ViewControllerDidSkip:(id)arg1 ;
-(void)clusterBrowsingV2ViewController:(id)arg1 willContinueToViewController:(id)arg2 ;
-(void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(char)arg3 ;
-(void)onDoneButtonTapped;
-(void)continueRegistration;
-(void)registrationFindUsersViewController:(id)arg1 didSelectSource:(int)arg2 ;
-(void)registrationFindUsersViewControllerDidSkip:(id)arg1 ;
-(void)registrationFindUsersViewControllerDidContinue:(id)arg1 ;
-(void)setSelectedFindFriendsViewModes:(int)arg1 ;
-(void)setFindFriendsViewMode:(int)arg1 ;
-(void)continueRegistrationWithFB;
-(void)continueRegistrationWithoutFB;
-(int)findFriendsViewMode;
-(int)selectedFindFriendsViewModes;
-(NSDictionary *)facebookMeInfo;
-(void)showNewActivationFlow;
-(char)shouldShowClusterBrowsing;
-(id)newClusterBrowsingVC;
-(IGPeopleFeedViewController *)discoverMorePeopleVC;
-(char)isSwitchingUsers;
-(void)startRegistrationWithFacebookInfo:(id)arg1 ;
-(void)pushSignInViewController;
-(void)usernameViewControllerDidSwitchToEmailFlow:(id)arg1 ;
-(void)usernameViewControllerDidSwitchToFBFlow:(id)arg1 ;
-(void)usernameViewController:(id)arg1 requestsLoginToUsername:(id)arg2 password:(id)arg3 ;
-(char)usernameViewControllerIsSwitchingUsers:(id)arg1 ;
-(void)welcomeViewController:(id)arg1 requestsLoginToUsername:(id)arg2 ;
-(void)welcomeViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2 ;
-(void)welcomeViewController:(id)arg1 proceedRegisteringWithFBInfo:(id)arg2 ;
-(void)welcomeViewControllerDidTapLogIn:(id)arg1 ;
-(void)welcomeViewController:(id)arg1 willProceedWithEmail:(id)arg2 ;
-(void)welcomeViewControllerWantsToDismiss:(id)arg1 ;
-(char)welcomeViewControllerIsSwitchingUsers:(id)arg1 ;
-(void)registrationFlowController:(id)arg1 willResetPasswordWithViewController:(id)arg2 ;
-(void)registrationFlowController:(id)arg1 didFinishRegistrationWithLoggedInDict:(id)arg2 ;
-(void)registrationFlowController:(id)arg1 shouldRegisterWithFacebookInformation:(id)arg2 ;
-(char)registrationFlowControllerIsSwitchingUsers:(id)arg1 ;
-(id)initWithIsSwitchingUsers:(char)arg1 ;
-(void)showFindFriendsControllerWithHiddenBackButton:(char)arg1 autoload:(int)arg2 showProfilePicture:(char)arg3 ;
-(char)registerWithFB;
-(void)setRegisterWithFB:(char)arg1 ;
-(void)setFacebookMeInfo:(NSDictionary *)arg1 ;
-(void)setDiscoverMorePeopleVC:(IGPeopleFeedViewController *)arg1 ;
-(void)setIsSwitchingUsers:(char)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
@end

