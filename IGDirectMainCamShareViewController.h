
#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGTokenFieldDelegate.h>
#import <Instagram/IGDirectRecipientDataSourceDelegate.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGAnalyticsRaindropProtocol.h>
#import <Instagram/IGShareManager.h>

@class IGAnalyticsMetadata, IGRaindropNavEvent, IGMutableRaindropRankInfo, NSString, UIScrollView, UIViewController, IGRaindropNavState, IGMediaMetadata, UIView, NSOrderedSet, IGDirectThread, IGDirectRecipientDataSource, IGTokenField, NSArray;

@interface IGDirectMainCamShareViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, IGTextFieldDelegate, IGTokenFieldDelegate, IGDirectRecipientDataSourceDelegate, IGAnalyticsModule, IGAnalyticsRaindropProtocol, IGShareManager> {

	char _collapseGroups;
	char _forceHide;
	char _isPerformingSearch;
	char _searchMode;
	NSString* _shareString;
	UIViewController* _delegate;
	IGMutableRaindropRankInfo* _surfaceRankInfo;
	IGRaindropNavState* _navState;
	IGMediaMetadata* _mediaMetadata;
	UIView* _headerView;
	UIView* _tableHeaderView;
	NSOrderedSet* _groupThreads;
	NSOrderedSet* _singleUsers;
	IGDirectThread* _selectedGroup;
	IGDirectRecipientDataSource* _dataSource;
	IGTokenField* _tokenField;
	NSArray* _sections;
	NSArray* _headerViews;

}

@property (nonatomic,readonly) IGMutableRaindropRankInfo * surfaceRankInfo;              //@synthesize surfaceRankInfo=_surfaceRankInfo - In the implementation block
@property (nonatomic,readonly) IGRaindropNavState * navState;                            //@synthesize navState=_navState - In the implementation block
@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                            //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                        //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * tableHeaderView;                                   //@synthesize tableHeaderView=_tableHeaderView - In the implementation block
@property (nonatomic,retain) NSOrderedSet * groupThreads;                                //@synthesize groupThreads=_groupThreads - In the implementation block
@property (nonatomic,retain) NSOrderedSet * singleUsers;                                 //@synthesize singleUsers=_singleUsers - In the implementation block
@property (nonatomic,retain) IGDirectThread * selectedGroup;                             //@synthesize selectedGroup=_selectedGroup - In the implementation block
@property (assign,nonatomic) char collapseGroups;                                        //@synthesize collapseGroups=_collapseGroups - In the implementation block
@property (assign,nonatomic) char forceHide;                                             //@synthesize forceHide=_forceHide - In the implementation block
@property (assign,nonatomic) char isPerformingSearch;                                    //@synthesize isPerformingSearch=_isPerformingSearch - In the implementation block
@property (assign,nonatomic) char searchMode;                                            //@synthesize searchMode=_searchMode - In the implementation block
@property (nonatomic,retain) IGDirectRecipientDataSource * dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) IGTokenField * tokenField;                                  //@synthesize tokenField=_tokenField - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                         //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSArray * headerViews;                                      //@synthesize headerViews=_headerViews - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IGAnalyticsMetadata * analyticsMetadata; 
@property (nonatomic,readonly) IGRaindropNavEvent * currentNavEvent; 
@property (nonatomic,readonly) int viewType; 
@property (nonatomic,readonly) char enableNavState; 
@property (nonatomic,copy) NSString * shareString;                                       //@synthesize shareString=_shareString - In the implementation block
@property (nonatomic,readonly) char isReadyToShare; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic,__weak) UIViewController * delegate;                         //@synthesize delegate=_delegate - In the implementation block
-(IGRaindropNavEvent *)currentNavEvent;
-(IGAnalyticsMetadata *)analyticsMetadata;
-(char)enableNavState;
-(IGMutableRaindropRankInfo *)surfaceRankInfo;
-(id)analyticsModule;
-(IGRaindropNavState *)navState;
-(char)isPerformingSearch;
-(void)setIsPerformingSearch:(char)arg1 ;
-(void)dataSourceDidStartLoading:(id)arg1 ;
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)dataSourceDidFailLoad:(id)arg1 ;
-(void)setTokenField:(IGTokenField *)arg1 ;
-(IGTokenField *)tokenField;
-(id)tokenFieldViewForTokenOverlay:(id)arg1 ;
-(void)tokenFieldWillFocusUser:(id)arg1 ;
-(void)tokenFieldDidBeginEditing:(id)arg1 ;
-(char)tokenFieldCanFinishEditing:(id)arg1 ;
-(void)tokenFieldDidRequestSearch:(id)arg1 ;
-(void)tokenField:(id)arg1 didChangeQuery:(id)arg2 ;
-(void)tokenField:(id)arg1 didDeleteToken:(id)arg2 ;
-(void)tokenFieldWillBeginEditing:(id)arg1 ;
-(void)setCollapseGroups:(char)arg1 ;
-(void)setSingleUsers:(NSOrderedSet *)arg1 ;
-(void)setGroupThreads:(NSOrderedSet *)arg1 ;
-(void)updateShareStatus;
-(void)updateSections;
-(IGDirectThread *)selectedGroup;
-(void)endEditingSearchCell;
-(void)reloadWithoutAnimation;
-(void)seeAllTapped;
-(void)hideTapped;
-(NSOrderedSet *)groupThreads;
-(void)setForceHide:(char)arg1 ;
-(void)reloadWithAnimation:(int)arg1 ;
-(void)reloadSectionWithoutAnimation:(int)arg1 ;
-(char)forceHide;
-(char)groupMode;
-(char)collapseGroups;
-(char)searchMode;
-(NSOrderedSet *)singleUsers;
-(id)headerForSectionWithTitle:(id)arg1 showSeeAll:(char)arg2 showHide:(char)arg3 addLine:(char)arg4 ;
-(char)multiSelectMode;
-(void)handleSelectionForThread:(id)arg1 atIndexPath:(id)arg2 ;
-(void)handleSelectionForUser:(id)arg1 atIndexPath:(id)arg2 fromSearch:(char)arg3 ;
-(void)setSelectedGroup:(IGDirectThread *)arg1 ;
-(void)setShareString:(NSString *)arg1 ;
-(id)initWithMediaMetadata:(id)arg1 ;
-(void)configureWithHeaderView:(id)arg1 ;
-(NSString *)shareString;
-(char)isReadyToShare;
-(void)setDataSource:(IGDirectRecipientDataSource *)arg1 ;
-(void)setDelegate:(UIViewController *)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(IGDirectRecipientDataSource *)dataSource;
-(UIViewController *)delegate;
-(char)resignFirstResponder;
-(UIScrollView *)scrollView;
-(UIView *)tableHeaderView;
-(int)viewType;
-(void)setTableHeaderView:(UIView *)arg1 ;
-(void)viewDidLoad;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)setHeaderViews:(NSArray *)arg1 ;
-(NSArray *)headerViews;
-(IGMediaMetadata *)mediaMetadata;
-(void)setMediaMetadata:(IGMediaMetadata *)arg1 ;
-(void)setSearchMode:(char)arg1 ;
@end

