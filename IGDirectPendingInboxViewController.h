
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGDirectPendingThreadViewDelegate.h>
#import <Instagram/IGUIPerfLoggable.h>
#import <Instagram/IGDirectPendingInboxControllerType.h>

@protocol IGDirectPendingInboxDelegate;
@class IGUserSession, UITableView, NSOrderedSet, IGRefreshControl, UIView, UITextView, NSSet, UIButton, UIBarButtonItem, IGDirectUIPerfLogProxy, IGDirectPendingInboxService, NSString;

@interface IGDirectPendingInboxViewController : IGViewController <UITableViewDataSource, UITableViewDelegate, IGDirectPendingThreadViewDelegate, IGUIPerfLoggable, IGDirectPendingInboxControllerType> {

	char _loadingPreviousThreads;
	char _hasPendingChanges;
	id<IGDirectPendingInboxDelegate> _delegate;
	int _totalPending;
	IGUserSession* _userSession;
	UITableView* _tableView;
	NSOrderedSet* _threads;
	IGRefreshControl* _refreshControl;
	UIView* _headerLabel;
	UITextView* _headerLabelTextView;
	UIView* _footerView;
	NSSet* _selectedThreads;
	UIButton* _declineButton;
	UIButton* _allowButton;
	UIBarButtonItem* _editButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _spinnerButton;
	UIView* _buttonSeparator;
	UIView* _topLine;
	IGDirectUIPerfLogProxy* _perfLogProxy;
	IGDirectPendingInboxService* _service;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                 //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSOrderedSet * threads;                                          //@synthesize threads=_threads - In the implementation block
@property (assign,nonatomic) char loadingPreviousThreads;                                   //@synthesize loadingPreviousThreads=_loadingPreviousThreads - In the implementation block
@property (nonatomic,retain) IGRefreshControl * refreshControl;                             //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) UIView * headerLabel;                                          //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UITextView * headerLabelTextView;                              //@synthesize headerLabelTextView=_headerLabelTextView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                           //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) NSSet * selectedThreads;                                       //@synthesize selectedThreads=_selectedThreads - In the implementation block
@property (nonatomic,retain) UIButton * declineButton;                                      //@synthesize declineButton=_declineButton - In the implementation block
@property (nonatomic,copy) UIButton * allowButton;                                          //@synthesize allowButton=_allowButton - In the implementation block
@property (assign,nonatomic) char hasPendingChanges;                                        //@synthesize hasPendingChanges=_hasPendingChanges - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * editButton;                                  //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                  //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * spinnerButton;                               //@synthesize spinnerButton=_spinnerButton - In the implementation block
@property (nonatomic,retain) UIView * buttonSeparator;                                      //@synthesize buttonSeparator=_buttonSeparator - In the implementation block
@property (nonatomic,retain) UIView * topLine;                                              //@synthesize topLine=_topLine - In the implementation block
@property (nonatomic,retain) IGDirectUIPerfLogProxy * perfLogProxy;                         //@synthesize perfLogProxy=_perfLogProxy - In the implementation block
@property (nonatomic,readonly) IGDirectPendingInboxService * service;                       //@synthesize service=_service - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectPendingInboxDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int totalPending;                                              //@synthesize totalPending=_totalPending - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(char)prefersTabBarHidden;
-(id)initWithUserSession:(id)arg1 ;
-(UIView *)topLine;
-(void)setTopLine:(UIView *)arg1 ;
-(void)updateRightButton;
-(void)reloadDataFromPullToRefresh;
-(void)refreshDataFromFirstPage:(char)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)setThreads:(NSOrderedSet *)arg1 ;
-(void)fetchPendingThreadsCompletion:(/*^block*/id)arg1 ;
-(UITextView *)headerLabelTextView;
-(void)setSelectedThreads:(NSSet *)arg1 ;
-(float)cellProfilePictureVerticalPadding;
-(NSSet *)selectedThreads;
-(int)totalPending;
-(id)actionSheetHeaderLabelWithString:(id)arg1 ;
-(id)allowString;
-(void)setHasPendingChanges:(char)arg1 ;
-(id)allThreadIds;
-(id)declineString;
-(void)updateFooterView;
-(id)remainingInviterForThreads:(id)arg1 ;
-(void)loadMoreThreads;
-(char)loadingPreviousThreads;
-(void)setLoadingPreviousThreads:(char)arg1 ;
-(IGDirectUIPerfLogProxy *)perfLogProxy;
-(char)shouldLogEvent:(unsigned)arg1 ;
-(unsigned)lastLogEvent;
-(void)allEventsLoggedWithResult:(id)arg1 ;
-(void)threadViewController:(id)arg1 didAcceptThread:(id)arg2 ;
-(void)threadViewController:(id)arg1 didDeclineThread:(id)arg2 ;
-(void)setTotalPending:(int)arg1 ;
-(char)disableNonEdgeNavigationGesture;
-(void)setHeaderLabelTextView:(UITextView *)arg1 ;
-(void)setAllowButton:(UIButton *)arg1 ;
-(void)setSpinnerButton:(UIBarButtonItem *)arg1 ;
-(void)setPerfLogProxy:(IGDirectUIPerfLogProxy *)arg1 ;
-(void)toggleEditMode;
-(void)allowTapped;
-(void)declineTapped;
-(UIButton *)allowButton;
-(UIBarButtonItem *)spinnerButton;
-(char)hasPendingChanges;
-(void)setDelegate:(id<IGDirectPendingInboxDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<IGDirectPendingInboxDelegate>)delegate;
-(void)viewDidLayoutSubviews;
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
-(void)setButtonSeparator:(UIView *)arg1 ;
-(UIView *)buttonSeparator;
-(IGUserSession *)userSession;
-(NSOrderedSet *)threads;
-(UIBarButtonItem *)editButton;
-(UIButton *)declineButton;
-(void)setDeclineButton:(UIButton *)arg1 ;
@end

