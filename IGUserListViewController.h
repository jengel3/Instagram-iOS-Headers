
#import <Instagram/IGPlainTableViewController.h>
#import <Instagram/IGNavSearchBarDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>
#import <Instagram/IGUserListNetworkDataSourceDelegate.h>
#import <Instagram/IGFeedStatusViewDelegate.h>
#import <Instagram/IGFollowListUserCellDelegate.h>

@class IGUserListNetworkDataSource, NSString, NSMutableSet, IGFeedItem, UIBarButtonItem, NSMutableIndexSet, IGFeedStatusView, IGNavSearchBar;

@interface IGUserListViewController : IGPlainTableViewController <IGNavSearchBarDelegate, UITableViewDataSource, IGRaindropAnalyticsDelegate, IGProfilePictureImageViewDelegate, IGUserListNetworkDataSourceDelegate, IGFeedStatusViewDelegate, IGFollowListUserCellDelegate> {

	IGUserListNetworkDataSource* _networkDataSource;
	int _userCellAccessory;
	NSString* _listContextPK;
	NSString* _rankToken;
	NSMutableSet* _selectedUsers;
	IGFeedItem* _feedItem;
	UIBarButtonItem* _defaultRightBarButtonItemForDone;
	int _userListType;
	NSMutableIndexSet* _expandedIndices;
	IGFeedStatusView* _feedStatusView;
	IGNavSearchBar* _searchBar;
	NSString* _searchString;
	NSString* _sessionId;

}

@property (assign,nonatomic) int userListType;                                                //@synthesize userListType=_userListType - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * expandedIndices;                             //@synthesize expandedIndices=_expandedIndices - In the implementation block
@property (nonatomic,retain) IGFeedStatusView * feedStatusView;                               //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                           //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGNavSearchBar * searchBar;                                      //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) NSString * searchString;                                         //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                                            //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,retain) IGUserListNetworkDataSource * networkDataSource;                 //@synthesize networkDataSource=_networkDataSource - In the implementation block
@property (assign,nonatomic) int userCellAccessory;                                           //@synthesize userCellAccessory=_userCellAccessory - In the implementation block
@property (nonatomic,copy) NSString * listContextPK;                                          //@synthesize listContextPK=_listContextPK - In the implementation block
@property (nonatomic,copy) NSString * rankToken;                                              //@synthesize rankToken=_rankToken - In the implementation block
@property (nonatomic,retain) NSMutableSet * selectedUsers;                                    //@synthesize selectedUsers=_selectedUsers - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * defaultRightBarButtonItemForDone;              //@synthesize defaultRightBarButtonItemForDone=_defaultRightBarButtonItemForDone - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)likersUserListViewControllerForFeedItemPK:(id)arg1 ;
+(id)nameOfUserListType:(int)arg1 ;
+(char)shouldShowFullName;
+(char)enableSocialContext;
-(id)analyticsModule;
-(IGFeedItem *)feedItem;
-(NSString *)rankToken;
-(id)analyticsExtras;
-(void)dataSourceDidStartLoading:(id)arg1 ;
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)dataSourceDidFailLoad:(id)arg1 ;
-(void)setFeedStatusView:(IGFeedStatusView *)arg1 ;
-(id)indexPathForUser:(id)arg1 ;
-(IGFeedStatusView *)feedStatusView;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)feedStatusViewDidTapOnInfoView:(id)arg1 ;
-(void)feedStatusView:(id)arg1 didChangeComputedHeight:(float)arg2 ;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)followButtonGroupController:(id)arg1 logfollowButtonTapWithAction:(int)arg2 user:(id)arg3 ;
-(void)searchBarWillBeginEditing:(id)arg1 ;
-(void)setRankToken:(NSString *)arg1 ;
-(int)userCellAccessory;
-(void)setUserCellAccessory:(int)arg1 ;
-(id)initWithUserListType:(int)arg1 ;
-(void)setNetworkDataSource:(IGUserListNetworkDataSource *)arg1 ;
-(void)setListContextPK:(NSString *)arg1 ;
-(char)isSearchableUserListType;
-(IGUserListNetworkDataSource *)networkDataSource;
-(id)rightBarButtonItemsForLoading;
-(id)rightBarButtonItemsForDone;
-(int)userListType;
-(char)isShowingSimilarAccountsViewForCellAtIndexPath:(id)arg1 ;
-(id)statusCell;
-(id)userCellForIndexPath:(id)arg1 ;
-(void)presentSimilarAccountsViewForCellAtIndexPath:(id)arg1 expand:(char)arg2 ;
-(void)logAnalyticsEvent:(id)arg1 forUser:(id)arg2 ;
-(NSString *)listContextPK;
-(NSMutableIndexSet *)expandedIndices;
-(void)loadMoreUsers;
-(void)didTapOnSeeAllAccounts:(id)arg1 withUser:(id)arg2 ;
-(void)setSelectedUsers:(NSMutableSet *)arg1 ;
-(void)removeUserFromList:(id)arg1 ;
-(void)setForceLoading:(char)arg1 ;
-(NSMutableSet *)selectedUsers;
-(UIBarButtonItem *)defaultRightBarButtonItemForDone;
-(void)setDefaultRightBarButtonItemForDone:(UIBarButtonItem *)arg1 ;
-(void)setUserListType:(int)arg1 ;
-(void)setExpandedIndices:(NSMutableIndexSet *)arg1 ;
-(void)profilePictureTapped:(id)arg1 ;
-(char)enableNavState;
-(void)dealloc;
-(void)reloadData;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(IGNavSearchBar *)searchBar;
-(NSString *)searchString;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)setSearchBar:(IGNavSearchBar *)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
@end

