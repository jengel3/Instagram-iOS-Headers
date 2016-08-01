
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Instagram/IGInviteFriendsDataSourceDelegate.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <Instagram/IGFeedStatusViewDelegate.h>

@class IGUserSession, IGInviteFriendsDataSource, NSMutableArray, IGListAdapter, IGListAdapterUpdaterLogger, IGListCollectionView, IGFeedStatusView, NSString;

@interface IGInviteFBFriendsViewController : IGViewController <UICollectionViewDelegate, UIScrollViewDelegate, IGInviteFriendsDataSourceDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGFeedStatusViewDelegate> {

	char _lastRowViewed;
	IGUserSession* _userSession;
	IGInviteFriendsDataSource* _dataSource;
	NSMutableArray* _userList;
	IGListAdapter* _listAdapter;
	IGListAdapterUpdaterLogger* _adapterPerfLogger;
	IGListCollectionView* _collectionView;
	IGFeedStatusView* _emptyStateView;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                 //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) IGInviteFriendsDataSource * dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSMutableArray * userList;                                   //@synthesize userList=_userList - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                 //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGListAdapterUpdaterLogger * adapterPerfLogger;              //@synthesize adapterPerfLogger=_adapterPerfLogger - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGFeedStatusView * emptyStateView;                           //@synthesize emptyStateView=_emptyStateView - In the implementation block
@property (assign,nonatomic) char lastRowViewed;                                            //@synthesize lastRowViewed=_lastRowViewed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(IGFeedStatusView *)emptyStateView;
-(void)feedStatusViewDidTapOnInfoView:(id)arg1 ;
-(IGListAdapterUpdaterLogger *)adapterPerfLogger;
-(void)setupEmptyStatusView;
-(void)authorizeAndFetchFriendList;
-(char)lastRowViewed;
-(void)setLastRowViewed:(char)arg1 ;
-(id)initWithDataSource:(id)arg1 userSession:(id)arg2 ;
-(void)inviteFriendsDataSource:(id)arg1 didLoadFriendsList:(id)arg2 ;
-(void)inviteFriendsDataSourceDidFailToLoad:(id)arg1 ;
-(NSMutableArray *)userList;
-(void)setupListAdapter;
-(void)scrollViewDidScroll:(id)arg1 ;
-(IGInviteFriendsDataSource *)dataSource;
-(IGListCollectionView *)collectionView;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(void)setupCollectionView;
-(IGUserSession *)userSession;
@end

