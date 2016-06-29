
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGFeedStatusViewDelegate.h>
#import <Instagram/IGFindUsersViewDelegate.h>

@class IGFindUsersView, IGFeedStatusView, IGFindUsersViewDataSource, IGRefreshControl, NSString;

@interface IGFindUsersViewController : IGViewController <IGFeedStatusViewDelegate, IGFindUsersViewDelegate> {

	char _loading;
	IGFindUsersView* _usersView;
	IGFeedStatusView* _feedStatusView;
	IGFindUsersViewDataSource* _findUsersViewDataSource;
	IGRefreshControl* _refreshControl;

}

@property (nonatomic,retain) IGFindUsersView * usersView;                                      //@synthesize usersView=_usersView - In the implementation block
@property (nonatomic,retain) IGFeedStatusView * feedStatusView;                                //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,retain) IGFindUsersViewDataSource * findUsersViewDataSource;              //@synthesize findUsersViewDataSource=_findUsersViewDataSource - In the implementation block
@property (nonatomic,retain) IGRefreshControl * refreshControl;                                //@synthesize refreshControl=_refreshControl - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                    //@synthesize loading=_loading - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)setFeedStatusView:(IGFeedStatusView *)arg1 ;
-(IGFeedStatusView *)feedStatusView;
-(void)feedStatusViewDidTapOnInfoView:(id)arg1 ;
-(void)feedStatusView:(id)arg1 didChangeComputedHeight:(float)arg2 ;
-(float)visibleContentHeight;
-(id)currentActiveScrollView;
-(IGFindUsersViewDataSource *)findUsersViewDataSource;
-(void)setFindUsersViewDataSource:(IGFindUsersViewDataSource *)arg1 ;
-(void)updateNavigationRightBarButtonItem;
-(char)allowEmptyStateAndEmptyFeedLoadingIndicator;
-(void)findUsersView:(id)arg1 didTapOnUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(id)newFindUsersViewDataSource;
-(IGFindUsersView *)usersView;
-(void)fetchUsers;
-(void)showErrorLoadMessageIfPossible:(id)arg1 ;
-(void)setUsersView:(IGFindUsersView *)arg1 ;
-(void)onCloseTapped:(id)arg1 ;
-(void)authorizeAndFetchUsers;
-(void)findUsersView:(id)arg1 didLoadUsers:(id)arg2 ;
-(void)didAuthorizeWithDataRequest:(id)arg1 ;
-(void)didFailToAuthorizeWithReason:(id)arg1 ;
-(id)newFindUsersView;
-(void)findUsersView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)findUsersView:(id)arg1 didTapOnItemWithMediaID:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)findUsersView:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)findUsersView:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4 ;
-(void)findUsersView:(id)arg1 scrollViewDidEndScrolling:(id)arg2 ;
-(void)findUsersView:(id)arg1 scrollViewDidEndDragging:(id)arg2 ;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(char)isLoading;
-(void)setRefreshControl:(IGRefreshControl *)arg1 ;
-(IGRefreshControl *)refreshControl;
-(void)setLoading:(char)arg1 ;
@end

