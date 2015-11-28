
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGDirectPendingThreadViewDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>

@protocol IGDirectPendingInboxDelegate;
@class NSNumber, UITableView, NSOrderedSet, NSString, IGPullToRefreshViewManager, UIView;

@interface IGDirectPendingInboxViewController : IGViewController <UITableViewDataSource, UITableViewDelegate, IGDirectPendingThreadViewDelegate, IGPullToRefreshProtocol> {

	char _loadingPreviousThreads;
	char _hasFakedPullToRefresh;
	id<IGDirectPendingInboxDelegate> _delegate;
	NSNumber* _totalPending;
	UITableView* _tableView;
	NSOrderedSet* _threads;
	NSString* _nextMaxId;
	IGPullToRefreshViewManager* _pullToRefreshViewManager;
	UIView* _headerLabel;
	UIView* _footerView;

}

@property (assign,nonatomic,__weak) id<IGDirectPendingInboxDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNumber * totalPending;                                            //@synthesize totalPending=_totalPending - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSOrderedSet * threads;                                             //@synthesize threads=_threads - In the implementation block
@property (assign,nonatomic) char loadingPreviousThreads;                                        //@synthesize loadingPreviousThreads=_loadingPreviousThreads - In the implementation block
@property (nonatomic,copy) NSString * nextMaxId;                                                 //@synthesize nextMaxId=_nextMaxId - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager * pullToRefreshViewManager;              //@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
@property (assign,nonatomic) char hasFakedPullToRefresh;                                         //@synthesize hasFakedPullToRefresh=_hasFakedPullToRefresh - In the implementation block
@property (nonatomic,retain) UIView * headerLabel;                                               //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                //@synthesize footerView=_footerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThreads:(NSOrderedSet *)arg1 ;
-(void)setPullToRefreshViewManager:(IGPullToRefreshViewManager *)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshViewManager;
-(void)setTotalPending:(NSNumber *)arg1 ;
-(char)loadingPreviousThreads;
-(void)setLoadingPreviousThreads:(char)arg1 ;
-(float)cellProfilePictureVerticalPadding;
-(void)loadMoreThreads;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(void)updateFooterView;
-(char)hasFakedPullToRefresh;
-(void)setHasFakedPullToRefresh:(char)arg1 ;
-(void)refreshDataWithNextMaxID:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)allowAllTapped;
-(void)declineAllTapped;
-(NSNumber *)totalPending;
-(id)actionSheetHeaderLabelWithString:(id)arg1 ;
-(id)remainingInviterForThreads:(id)arg1 ;
-(NSString *)nextMaxId;
-(void)setNextMaxId:(NSString *)arg1 ;
-(void)threadViewController:(id)arg1 didAcceptThread:(id)arg2 ;
-(void)threadViewController:(id)arg1 didDeclineThread:(id)arg2 ;
-(char)disableNonEdgeNavigationGesture;
-(void)setDelegate:(id<IGDirectPendingInboxDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<IGDirectPendingInboxDelegate>)delegate;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewDidLoad;
-(UIEdgeInsets)preferredContentInsets;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setHeaderLabel:(UIView *)arg1 ;
-(UIView *)headerLabel;
-(NSOrderedSet *)threads;
@end

