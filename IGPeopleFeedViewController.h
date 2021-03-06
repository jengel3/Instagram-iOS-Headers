
#import <Instagram/IGExploreFeedViewController.h>
#import <Instagram/IGFindUsersViewDataSourceDelegate.h>
#import <Instagram/IGContactsFriendsViewControllerDelegate.h>
#import <Instagram/IGAnalyticsModule.h>

@class NSArray, NSMutableSet, IGFindUsersViewDataSource, UIView, IGDiscoverMorePeopleConnectionView, NSString;

@interface IGPeopleFeedViewController : IGExploreFeedViewController <IGFindUsersViewDataSourceDelegate, IGContactsFriendsViewControllerDelegate, IGAnalyticsModule> {

	id _delegate;
	NSArray* _forcedUserIDs;
	/*^block*/id _dismissBlock;
	NSMutableSet* _loggedImpressions;
	IGFindUsersViewDataSource* _dataSource;
	UIView* _connectionHeaderView;
	IGDiscoverMorePeopleConnectionView* _facebookConnectionView;
	IGDiscoverMorePeopleConnectionView* _contactsConnectionView;
	IGDiscoverMorePeopleConnectionView* _vkConnectionView;
	int _feedType;

}

@property (nonatomic,retain) NSMutableSet * loggedImpressions;                                         //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (nonatomic,retain) IGFindUsersViewDataSource * dataSource;                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UIView * connectionHeaderView;                                            //@synthesize connectionHeaderView=_connectionHeaderView - In the implementation block
@property (nonatomic,retain) IGDiscoverMorePeopleConnectionView * facebookConnectionView;              //@synthesize facebookConnectionView=_facebookConnectionView - In the implementation block
@property (nonatomic,retain) IGDiscoverMorePeopleConnectionView * contactsConnectionView;              //@synthesize contactsConnectionView=_contactsConnectionView - In the implementation block
@property (nonatomic,retain) IGDiscoverMorePeopleConnectionView * vkConnectionView;                    //@synthesize vkConnectionView=_vkConnectionView - In the implementation block
@property (assign,nonatomic) int feedType;                                                             //@synthesize feedType=_feedType - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * forcedUserIDs;                                                  //@synthesize forcedUserIDs=_forcedUserIDs - In the implementation block
@property (nonatomic,copy) id dismissBlock;                                                            //@synthesize dismissBlock=_dismissBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(char)disableNonEdgeNavigationGesture;
-(id)feedStatusViewDataSource;
-(id)exploreViewModelForObject:(id)arg1 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)didUnfollowObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didFollowObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didDismissObject:(id)arg1 atIndex:(int)arg2 ;
-(void)fetchMoreData;
-(void)didDisplayObject:(id)arg1 atIndex:(int)arg2 ;
-(void)willDisplayObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)willDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)followStatusNotification:(id)arg1 ;
-(int)feedType;
-(void)logTap:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)dismissBlock;
-(void)logDismiss:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)logFollow:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)logImpression:(id)arg1 viewed:(char)arg2 atIndex:(unsigned)arg3 ;
-(void)logMediaImpression:(id)arg1 viewed:(char)arg2 atIndex:(int)arg3 mediaIndex:(unsigned)arg4 ;
-(id)initWithDataSource:(id)arg1 feedType:(int)arg2 ;
-(NSArray *)forcedUserIDs;
-(void)setForcedUserIDs:(NSArray *)arg1 ;
-(void)setDismissBlock:(id)arg1 ;
-(void)setLoggedImpressions:(NSMutableSet *)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(NSMutableSet *)loggedImpressions;
-(id)initExplorePeopleFeedViewController;
-(void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2 ;
-(void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2 ;
-(void)contactsViewControllerWillDisconnectContacts:(id)arg1 ;
-(void)contactsViewController:(id)arg1 didDisconnectContactsWithSuccess:(char)arg2 ;
-(IGDiscoverMorePeopleConnectionView *)facebookConnectionView;
-(IGDiscoverMorePeopleConnectionView *)contactsConnectionView;
-(IGDiscoverMorePeopleConnectionView *)vkConnectionView;
-(UIView *)connectionHeaderView;
-(void)logAYMFEvent:(id)arg1 userID:(id)arg2 atPosition:(unsigned)arg3 fullScreen:(char)arg4 algorithm:(id)arg5 ;
-(void)setConnectionHeaderView:(UIView *)arg1 ;
-(void)setFacebookConnectionView:(IGDiscoverMorePeopleConnectionView *)arg1 ;
-(void)setContactsConnectionView:(IGDiscoverMorePeopleConnectionView *)arg1 ;
-(void)setVkConnectionView:(IGDiscoverMorePeopleConnectionView *)arg1 ;
-(void)setProfileChainingDismissBlockWithUser:(id)arg1 ;
-(id)initProfileChainingPeopleFeedViewControllerWithUser:(id)arg1 ;
-(id)titleLabelWithUserName:(id)arg1 ;
-(void)doFacebookConnection;
-(char)disableNavigationGesture;
-(char)enableNavState;
-(void)fetchData;
-(void)setDataSource:(IGFindUsersViewDataSource *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(IGFindUsersViewDataSource *)dataSource;
-(id)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(id)headerView;
@end

