
#import <UIKit/UIViewController.h>
#import <Instagram/IGFindUsersViewDelegate.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGContactsFriendsHelperDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@protocol IGRetroRegistrationFindFriendsViewControllerDelegate, IGRaindropAnalyticsDelegate;
@class IGRegistrationFriendsListView, IGRetroRegistrationFindFriendsView, IGRegistrationNavigationBar, IGFindUsersViewDataSource, IGContactsFriendsHelper, NSString;

@interface IGRetroRegistrationFindFriendsViewController : UIViewController <IGFindUsersViewDelegate, IGCoreTextLinkHandler, IGContactsFriendsHelperDelegate, IGRaindropAnalyticsDelegate> {

	id<IGRetroRegistrationFindFriendsViewControllerDelegate> _delegate;
	int _findFriendsMode;
	IGRegistrationFriendsListView* _friendsListView;
	IGRetroRegistrationFindFriendsView* _findFriendsView;
	IGRegistrationNavigationBar* _friendsListViewNavBar;
	IGFindUsersViewDataSource* _findUsersViewDataSource;
	IGContactsFriendsHelper* _contactsHelper;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;
	int _followCount;

}

@property (assign,nonatomic,__weak) id<IGRetroRegistrationFindFriendsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int findFriendsMode;                                                                   //@synthesize findFriendsMode=_findFriendsMode - In the implementation block
@property (nonatomic,retain) IGRegistrationFriendsListView * friendsListView;                                       //@synthesize friendsListView=_friendsListView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationFindFriendsView * findFriendsView;                                  //@synthesize findFriendsView=_findFriendsView - In the implementation block
@property (nonatomic,retain) IGRegistrationNavigationBar * friendsListViewNavBar;                                   //@synthesize friendsListViewNavBar=_friendsListViewNavBar - In the implementation block
@property (nonatomic,retain) IGFindUsersViewDataSource * findUsersViewDataSource;                                   //@synthesize findUsersViewDataSource=_findUsersViewDataSource - In the implementation block
@property (nonatomic,retain) IGContactsFriendsHelper * contactsHelper;                                              //@synthesize contactsHelper=_contactsHelper - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;                              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (assign,nonatomic) int followCount;                                                                       //@synthesize followCount=_followCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2 ;
-(void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2 ;
-(IGFindUsersViewDataSource *)findUsersViewDataSource;
-(void)setFindUsersViewDataSource:(IGFindUsersViewDataSource *)arg1 ;
-(void)contactsFriendsHelperDidTapLearnMore:(id)arg1 ;
-(void)findUsersView:(id)arg1 didLoadUsers:(id)arg2 ;
-(void)findUsersView:(id)arg1 didFollowUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)onFacebookAuthSuccess;
-(void)onFacebookAuthFailure;
-(void)findUsersView:(id)arg1 didUnFollowUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)findUsersView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)findUsersView:(id)arg1 didFollowAllUsers:(id)arg2 ;
-(void)onVkontakteAuthSuccessDismissOAuth:(char)arg1 ;
-(void)onVkontakteAuthSuccess;
-(void)onVkontakteAuthFailure;
-(void)nextButtonTapped:(id)arg1 ;
-(int)findFriendsMode;
-(IGRetroRegistrationFindFriendsView *)findFriendsView;
-(void)connectButtonTapped:(id)arg1 ;
-(void)skipButtonTapped:(id)arg1 ;
-(IGRegistrationFriendsListView *)friendsListView;
-(void)fetchFacebookFriends;
-(void)fetchVKFriends;
-(void)fetchContactsFriends;
-(IGRegistrationNavigationBar *)friendsListViewNavBar;
-(void)displayUserList;
-(void)cancelUserFetch;
-(void)followAllButtonTapped:(id)arg1 ;
-(IGContactsFriendsHelper *)contactsHelper;
-(void)setSourceCount:(int)arg1 ;
-(void)setFollowCount:(int)arg1 ;
-(int)followCount;
-(id)initWithFindFriendsMode:(int)arg1 ;
-(void)setFindFriendsMode:(int)arg1 ;
-(void)setFriendsListView:(IGRegistrationFriendsListView *)arg1 ;
-(void)setFindFriendsView:(IGRetroRegistrationFindFriendsView *)arg1 ;
-(void)setFriendsListViewNavBar:(IGRegistrationNavigationBar *)arg1 ;
-(void)setContactsHelper:(IGContactsFriendsHelper *)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationFindFriendsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGRetroRegistrationFindFriendsViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)connect;
-(id)titleText;
-(char)prefersNavigationBarHidden;
@end

