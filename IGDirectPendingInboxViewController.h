
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGDirectPendingThreadViewDelegate.h>
#import <Instagram/IGUIPerfLoggable.h>
#import <Instagram/IGDirectPendingInboxControllerType.h>

@protocol IGDirectPendingInboxDelegate;
@class IGUserSession, UITableView, NSOrderedSet, NSString, IGRefreshControl, UIView, NSSet, UIButton, UIBarButtonItem, IGDirectUIPerfLogProxy, IGDirectPendingInboxService;

@interface IGDirectPendingInboxViewController : IGViewController <UITableViewDataSource, UITableViewDelegate, IGDirectPendingThreadViewDelegate, IGUIPerfLoggable, IGDirectPendingInboxControllerType> {

	char _loadingPreviousThreads;
	char _hasPendingChanges;
	id<IGDirectPendingInboxDelegate> _delegate;
	int _totalPending;
	IGUserSession* _userSession;
	UITableView* _tableView;
	NSOrderedSet* _threads;
	NSString* _oldestCursor;
	IGRefreshControl* _refreshControl;
	UIView* _headerLabel;
	UIView* _footerView;
	NSSet* _selectedThreads;
	UIButton* _declineButton;
	UIButton* _allowButton;
	UIBarButtonItem* _editButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _spinnerButton;
	IGDirectUIPerfLogProxy* _perfLogProxy;
	IGDirectPendingInboxService* _service;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                 //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSOrderedSet * threads;                                        //@synthesize threads=_threads - In the implementation block
@property (assign,nonatomic) char loadingPreviousThreads;                                   //@synthesize loadingPreviousThreads=_loadingPreviousThreads - In the implementation block
@property (nonatomic,copy) NSString * oldestCursor;                                         //@synthesize oldestCursor=_oldestCursor - In the implementation block
@property (nonatomic,retain) IGRefreshControl * refreshControl;                             //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) UIView * headerLabel;                                          //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                           //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) NSSet * selectedThreads;                                       //@synthesize selectedThreads=_selectedThreads - In the implementation block
@property (nonatomic,retain) UIButton * declineButton;                                      //@synthesize declineButton=_declineButton - In the implementation block
@property (nonatomic,copy) UIButton * allowButton;                                          //@synthesize allowButton=_allowButton - In the implementation block
@property (assign,nonatomic) char hasPendingChanges;                                        //@synthesize hasPendingChanges=_hasPendingChanges - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * editButton;                                  //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                  //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * spinnerButton;                               //@synthesize spinnerButton=_spinnerButton - In the implementation block
@property (nonatomic,retain) IGDirectUIPerfLogProxy * perfLogProxy;                         //@synthesize perfLogProxy=_perfLogProxy - In the implementation block
@property (nonatomic,readonly) IGDirectPendingInboxService * service;                       //@synthesize service=_service - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectPendingInboxDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int totalPending;                                              //@synthesize totalPending=_totalPending - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithUserSession:(id)arg1 ;
-(void)reloadDataFromPullToRefresh;
-(IGDirectUIPerfLogProxy *)perfLogProxy;
-(void)setTotalPending:(int)arg1 ;
-(NSString *)oldestCursor;
-(void)setOldestCursor:(NSString *)arg1 ;
-(void)setThreads:(NSOrderedSet *)arg1 ;
-(char)loadingPreviousThreads;
-(void)setLoadingPreviousThreads:(char)arg1 ;
-(float)cellProfilePictureVerticalPadding;
-(void)loadMoreThreads;
-(char)shouldLogEvent:(unsigned)arg1 ;
-(unsigned)lastLogEvent;
-(void)allEventsLoggedWithResult:(id)arg1 ;
-(void)setPerfLogProxy:(IGDirectUIPerfLogProxy *)arg1 ;
-(void)updateRightButton;
-(void)refreshDataWithOldestCursor:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)fetchPendingThreadsCompletion:(/*^block*/id)arg1 ;
-(void)setSelectedThreads:(NSSet *)arg1 ;
-(NSSet *)selectedThreads;
-(int)totalPending;
-(id)actionSheetHeaderLabelWithString:(id)arg1 ;
-(id)allowString;
-(void)setHasPendingChanges:(char)arg1 ;
-(id)allThreadIds;
-(id)declineString;
-(void)updateFooterView;
-(id)remainingInviterForThreads:(id)arg1 ;
-(void)threadViewController:(id)arg1 didAcceptThread:(id)arg2 ;
-(void)threadViewController:(id)arg1 didDeclineThread:(id)arg2 ;
-(void)setAllowButton:(UIButton *)arg1 ;
-(void)setSpinnerButton:(UIBarButtonItem *)arg1 ;
-(void)toggleEditMode;
-(void)allowTapped;
-(void)declineTapped;
-(UIButton *)allowButton;
-(UIBarButtonItem *)spinnerButton;
-(char)disableNonEdgeNavigationGesture;
-(char)prefersTabBarHidden;
-(char)hasPendingChanges;
-(void)setDelegate:(id<IGDirectPendingInboxDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<IGDirectPendingInboxDelegate>)delegate;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setEditing:(char)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(UIEdgeInsets)preferredContentInsets;
-(void)setRefreshControl:(IGRefreshControl *)arg1 ;
-(IGRefreshControl *)refreshControl;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setEditButton:(UIBarButtonItem *)arg1 ;
-(IGDirectPendingInboxService *)service;
-(void)setHeaderLabel:(UIView *)arg1 ;
-(UIView *)headerLabel;
-(IGUserSession *)userSession;
-(NSOrderedSet *)threads;
-(UIBarButtonItem *)editButton;
-(UIButton *)declineButton;
-(void)setDeclineButton:(UIButton *)arg1 ;
@end

