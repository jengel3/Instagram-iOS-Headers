
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGFindUsersViewDelegate.h>
#import <Instagram/IGContactsFriendsHelperDelegate.h>
#import <Instagram/IGFindFriendsHelperDelegate.h>
#import <Instagram/IGRegistrationStepObject.h>

@protocol IGRegistrationFindFriendsControllerDelegate, IGRaindropAnalyticsDelegate;
@class IGRegistrationFindFriendsStepView, IGRegistrationNavigationBar, UIView, IGRegistrationFriendsListView, IGFindUsersViewDataSource, IGContactsFriendsHelper, NSString;

@interface IGRegistrationFindFriendsController : NSObject <UITableViewDelegate, IGCoreTextLinkHandler, IGFindUsersViewDelegate, IGContactsFriendsHelperDelegate, IGFindFriendsHelperDelegate, IGRegistrationStepObject> {

	id<IGRegistrationFindFriendsControllerDelegate> _delegate;
	IGRegistrationFindFriendsStepView* _stepView;
	IGRegistrationNavigationBar* _navBar;
	UIView* _iconView;
	IGRegistrationFriendsListView* _findFriendsView;
	int _findFriendsMode;
	IGFindUsersViewDataSource* _findUsersViewDataSource;
	IGContactsFriendsHelper* _contactsHelper;
	int _followCount;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;

}

@property (assign,nonatomic,__weak) id<IGRegistrationFindFriendsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRegistrationFindFriendsStepView * stepView;                                 //@synthesize stepView=_stepView - In the implementation block
@property (nonatomic,retain) IGRegistrationNavigationBar * navBar;                                         //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UIView * iconView;                                                            //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) IGRegistrationFriendsListView * findFriendsView;                              //@synthesize findFriendsView=_findFriendsView - In the implementation block
@property (assign,nonatomic) int findFriendsMode;                                                          //@synthesize findFriendsMode=_findFriendsMode - In the implementation block
@property (nonatomic,retain) IGFindUsersViewDataSource * findUsersViewDataSource;                          //@synthesize findUsersViewDataSource=_findUsersViewDataSource - In the implementation block
@property (nonatomic,retain) IGContactsFriendsHelper * contactsHelper;                                     //@synthesize contactsHelper=_contactsHelper - In the implementation block
@property (assign,nonatomic) int followCount;                                                              //@synthesize followCount=_followCount - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;                     //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)onFacebookAuthSuccess;
-(void)findUsersView:(id)arg1 didFollowUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(IGFindUsersViewDataSource *)findUsersViewDataSource;
-(void)setFindUsersViewDataSource:(IGFindUsersViewDataSource *)arg1 ;
-(void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2 ;
-(void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2 ;
-(void)findUsersView:(id)arg1 didLoadUsers:(id)arg2 ;
-(void)onFacebookAuthFailure;
-(void)findUsersView:(id)arg1 didUnFollowUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)findUsersView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)findUsersView:(id)arg1 didFollowAllUsers:(id)arg2 ;
-(void)onVkontakteAuthSuccessDismissOAuth:(char)arg1 ;
-(void)onVkontakteAuthSuccess;
-(void)onVkontakteAuthFailure;
-(void)cancelUserFetch;
-(void)setFollowCount:(int)arg1 ;
-(int)followCount;
-(void)fetchFacebookFriends;
-(void)fetchVKFriends;
-(IGContactsFriendsHelper *)contactsHelper;
-(void)setContactsHelper:(IGContactsFriendsHelper *)arg1 ;
-(IGRegistrationFindFriendsStepView *)stepView;
-(void)stepViewWillAppear;
-(void)setStepView:(IGRegistrationFindFriendsStepView *)arg1 ;
-(void)setFindFriendsMode:(int)arg1 ;
-(int)findFriendsMode;
-(void)connectButtonTapped;
-(IGRegistrationFriendsListView *)findFriendsView;
-(void)followAllButtonTapped:(id)arg1 ;
-(void)fetchContactsFriends;
-(void)displayUserList;
-(void)setSourceCount:(int)arg1 ;
-(id)initWithFindFriendsMode:(int)arg1 analyticsDelegate:(id)arg2 ;
-(void)setFindFriendsView:(IGRegistrationFriendsListView *)arg1 ;
-(void)setDelegate:(id<IGRegistrationFindFriendsControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGRegistrationFindFriendsControllerDelegate>)delegate;
-(void)connect;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(void)setNavBar:(IGRegistrationNavigationBar *)arg1 ;
-(IGRegistrationNavigationBar *)navBar;
-(id)titleText;
@end

