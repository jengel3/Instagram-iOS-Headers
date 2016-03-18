
#import <Instagram/IGViewController.h>
#import <Instagram/IGNavSearchBarDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>
#import <Instagram/IGUserListNetworkDataSourceDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Instagram/IGFeedStatusViewDynamicHeightProtocol.h>
#import <Instagram/IGFollowListUserCellDelegate.h>

@class IGUserListNetworkDataSource, IGPlainTableView, NSString, IGFeedItem, NSMutableIndexSet, IGFeedStatusView, IGNavSearchBar;

@interface IGUserListViewController : IGViewController <IGNavSearchBarDelegate, IGRaindropAnalyticsDelegate, IGProfilePictureImageViewDelegate, IGUserListNetworkDataSourceDelegate, UITableViewDelegate, UITableViewDataSource, IGFeedStatusViewDynamicHeightProtocol, IGFollowListUserCellDelegate> {

	IGUserListNetworkDataSource* _networkDataSource;
	IGPlainTableView* _tableView;
	int _userCellAccessory;
	int _userListType;
	NSString* _listContextPK;
	NSString* _rankToken;
	IGFeedItem* _feedItem;
	NSMutableIndexSet* _expandedIndices;
	IGFeedStatusView* _feedStatusView;
	IGNavSearchBar* _searchBar;

}

@property (nonatomic,retain) IGUserListNetworkDataSource * networkDataSource;              //@synthesize networkDataSource=_networkDataSource - In the implementation block
@property (nonatomic,retain) IGPlainTableView * tableView;                                 //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) int userCellAccessory;                                        //@synthesize userCellAccessory=_userCellAccessory - In the implementation block
@property (assign,nonatomic) int userListType;                                             //@synthesize userListType=_userListType - In the implementation block
@property (nonatomic,copy) NSString * listContextPK;                                       //@synthesize listContextPK=_listContextPK - In the implementation block
@property (nonatomic,copy) NSString * rankToken;                                           //@synthesize rankToken=_rankToken - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                        //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * expandedIndices;                          //@synthesize expandedIndices=_expandedIndices - In the implementation block
@property (nonatomic,retain) IGFeedStatusView * feedStatusView;                            //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,retain) IGNavSearchBar * searchBar;                                   //@synthesize searchBar=_searchBar - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nameOfUserListType:(int)arg1 ;
-(void)setUserCellAccessory:(int)arg1 ;
-(void)setNetworkDataSource:(IGUserListNetworkDataSource *)arg1 ;
-(void)setUserListType:(int)arg1 ;
-(void)setListContextPK:(NSString *)arg1 ;
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(NSString *)rankToken;
-(void)setRankToken:(NSString *)arg1 ;
-(IGFeedItem *)feedItem;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)followButtonGroupController:(id)arg1 logfollowButtonTapWithAction:(int)arg2 user:(id)arg3 ;
-(void)profilePictureTapped:(id)arg1 ;
-(void)dataSourceDidStartLoading:(id)arg1 ;
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)dataSourceDidFailLoad:(id)arg1 ;
-(IGFeedStatusView *)feedStatusView;
-(void)setFeedStatusView:(IGFeedStatusView *)arg1 ;
-(id)indexPathForUser:(id)arg1 ;
-(void)feedStatusView:(id)arg1 wantsChangeToHeight:(float)arg2 ;
-(void)makeSearchBar;
-(void)searchBarWillBeginEditing:(id)arg1 ;
-(void)didTapOnSeeAllAccounts:(id)arg1 withUser:(id)arg2 ;
-(void)removeUserFromList:(id)arg1 ;
-(IGUserListNetworkDataSource *)networkDataSource;
-(int)userCellAccessory;
-(void)loadMoreUsers;
-(int)userListType;
-(char)isShowingSimilarAccountsViewForCellAtIndexPath:(id)arg1 ;
-(id)statusCell;
-(id)userCellForIndexPath:(id)arg1 ;
-(void)presentSimilarAccountsViewForCellAtIndexPath:(id)arg1 expand:(char)arg2 ;
-(void)logAnalyticsEvent:(id)arg1 forUser:(id)arg2 ;
-(NSString *)listContextPK;
-(NSMutableIndexSet *)expandedIndices;
-(void)setExpandedIndices:(NSMutableIndexSet *)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(IGPlainTableView *)tableView;
-(void)setTableView:(IGPlainTableView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(IGNavSearchBar *)searchBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)setSearchBar:(IGNavSearchBar *)arg1 ;
@end

