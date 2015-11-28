
#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGTokenFieldDelegate.h>
#import <Instagram/IGUserListNetworkDataSourceDelegate.h>
#import <Instagram/IGShareManager.h>

@protocol IGShareManagerDelegate;
@class NSString, UIScrollView, UIViewController, IGMediaMetadata, UIView, NSOrderedSet, IGDirectThread, IGUserListNetworkDataSource, IGUserListLocalDataSource, IGTokenField, NSArray;

@interface IGDirectShareManagerViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, IGTextFieldDelegate, IGTokenFieldDelegate, IGUserListNetworkDataSourceDelegate, IGShareManager> {

	char _collapseGroups;
	char _forceHide;
	char _isPerformingSearch;
	char _searchMode;
	NSString* _shareString;
	UIViewController*<IGShareManagerDelegate> _delegate;
	IGMediaMetadata* _mediaMetadata;
	UIView* _headerView;
	UIView* _tableHeaderView;
	NSOrderedSet* _groupThreads;
	NSOrderedSet* _singleUsers;
	IGDirectThread* _selectedGroup;
	IGUserListNetworkDataSource* _networkUsersDataSource;
	IGUserListLocalDataSource* _localUsersDataSource;
	IGTokenField* _tokenField;
	NSArray* _sections;
	NSArray* _headerViews;

}

@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                                        //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                    //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * tableHeaderView;                                               //@synthesize tableHeaderView=_tableHeaderView - In the implementation block
@property (nonatomic,retain) NSOrderedSet * groupThreads;                                            //@synthesize groupThreads=_groupThreads - In the implementation block
@property (nonatomic,retain) NSOrderedSet * singleUsers;                                             //@synthesize singleUsers=_singleUsers - In the implementation block
@property (nonatomic,retain) IGDirectThread * selectedGroup;                                         //@synthesize selectedGroup=_selectedGroup - In the implementation block
@property (assign,nonatomic) char collapseGroups;                                                    //@synthesize collapseGroups=_collapseGroups - In the implementation block
@property (assign,nonatomic) char forceHide;                                                         //@synthesize forceHide=_forceHide - In the implementation block
@property (assign,nonatomic) char isPerformingSearch;                                                //@synthesize isPerformingSearch=_isPerformingSearch - In the implementation block
@property (assign,nonatomic) char searchMode;                                                        //@synthesize searchMode=_searchMode - In the implementation block
@property (nonatomic,retain) IGUserListNetworkDataSource * networkUsersDataSource;                   //@synthesize networkUsersDataSource=_networkUsersDataSource - In the implementation block
@property (nonatomic,retain) IGUserListLocalDataSource * localUsersDataSource;                       //@synthesize localUsersDataSource=_localUsersDataSource - In the implementation block
@property (nonatomic,retain) IGTokenField * tokenField;                                              //@synthesize tokenField=_tokenField - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                     //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSArray * headerViews;                                                  //@synthesize headerViews=_headerViews - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * shareString;                                                   //@synthesize shareString=_shareString - In the implementation block
@property (nonatomic,readonly) char isReadyToShare; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic,__weak) UIViewController*<IGShareManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithMediaMetadata:(id)arg1 ;
-(void)dataSourceDidStartLoading:(id)arg1 ;
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)dataSourceDidFailLoad:(id)arg1 ;
-(char)isPerformingSearch;
-(void)setIsPerformingSearch:(char)arg1 ;
-(void)setTokenField:(IGTokenField *)arg1 ;
-(IGTokenField *)tokenField;
-(id)tokenFieldViewForTokenOverlay:(id)arg1 ;
-(void)tokenFieldWillFocusUser:(id)arg1 ;
-(void)tokenFieldDidBeginEditing:(id)arg1 ;
-(char)tokenFieldCanFinishEditing:(id)arg1 ;
-(void)tokenFieldDidRequestSearch:(id)arg1 ;
-(void)tokenField:(id)arg1 didChangeQuery:(id)arg2 ;
-(void)tokenField:(id)arg1 didDeleteToken:(id)arg2 ;
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
-(IGUserListNetworkDataSource *)networkUsersDataSource;
-(NSOrderedSet *)singleUsers;
-(id)headerForSectionWithTitle:(id)arg1 showSeeAll:(char)arg2 showHide:(char)arg3 addLine:(char)arg4 ;
-(char)multiSelectMode;
-(void)handleSelectionForThread:(id)arg1 atIndexPath:(id)arg2 ;
-(void)handleSelectionForUser:(id)arg1 atIndexPath:(id)arg2 fromSearch:(char)arg3 ;
-(void)setSelectedGroup:(IGDirectThread *)arg1 ;
-(void)setShareString:(NSString *)arg1 ;
-(IGUserListLocalDataSource *)localUsersDataSource;
-(NSString *)shareString;
-(char)isReadyToShare;
-(void)setNetworkUsersDataSource:(IGUserListNetworkDataSource *)arg1 ;
-(void)setLocalUsersDataSource:(IGUserListLocalDataSource *)arg1 ;
-(void)fetchData;
-(void)setDelegate:(UIViewController*<IGShareManagerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(UIViewController*<IGShareManagerDelegate>)delegate;
-(char)resignFirstResponder;
-(UIScrollView *)scrollView;
-(UIView *)tableHeaderView;
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

