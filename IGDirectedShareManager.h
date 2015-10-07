/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:09 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGUserListNetworkDataSourceDelegate.h>
#import <Instagram/IGSectionIndexViewDelegate.h>
#import <Instagram/IGTokenFieldDelegate.h>
#import <Instagram/IGShareManager.h>

@protocol IGShareManagerDelegate, IGAutocompleteDataSource;
@class IGKVOHandle, NSString, UIViewController, IGMediaMetadata, NSArray, IGUserListLocalDataSource, IGUserListNetworkDataSource, NSObject, UIView, IGSectionIndexView, IGTokenField, NSCountedSet, UIScrollView;

@interface IGDirectedShareManager : IGGroupedTableViewController <UITableViewDataSource, UITableViewDelegate, IGUserListNetworkDataSourceDelegate, IGSectionIndexViewDelegate, IGTokenFieldDelegate, IGShareManager> {

	IGKVOHandle* _contentOffsetObserver;
	char _isSearching;
	NSString* _shareString;
	UIViewController*<IGShareManagerDelegate> _delegate;
	IGMediaMetadata* _mediaMetadata;
	NSArray* _recentRecipientSets;
	IGUserListLocalDataSource* _localUsersDataSource;
	IGUserListNetworkDataSource* _networkUsersDataSource;
	NSObject*<IGAutocompleteDataSource> _currentDataSource;
	UIView* _headerView;
	UIView* _tableHeaderView;
	UIView* _recentsLabelHeaderView;
	UIView* _followingLabelHeaderView;
	IGSectionIndexView* _indexView;
	IGTokenField* _tokenField;
	UIView* _overlayView;
	NSCountedSet* _visibleUsernameLetters;

}

@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                                        //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (nonatomic,retain) NSArray * recentRecipientSets;                                          //@synthesize recentRecipientSets=_recentRecipientSets - In the implementation block
@property (nonatomic,retain) IGUserListLocalDataSource * localUsersDataSource;                       //@synthesize localUsersDataSource=_localUsersDataSource - In the implementation block
@property (nonatomic,retain) IGUserListNetworkDataSource * networkUsersDataSource;                   //@synthesize networkUsersDataSource=_networkUsersDataSource - In the implementation block
@property (assign,nonatomic) NSObject*<IGAutocompleteDataSource> currentDataSource;                  //@synthesize currentDataSource=_currentDataSource - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                    //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * tableHeaderView;                                               //@synthesize tableHeaderView=_tableHeaderView - In the implementation block
@property (nonatomic,retain) UIView * recentsLabelHeaderView;                                        //@synthesize recentsLabelHeaderView=_recentsLabelHeaderView - In the implementation block
@property (nonatomic,retain) UIView * followingLabelHeaderView;                                      //@synthesize followingLabelHeaderView=_followingLabelHeaderView - In the implementation block
@property (nonatomic,retain) IGSectionIndexView * indexView;                                         //@synthesize indexView=_indexView - In the implementation block
@property (nonatomic,retain) IGTokenField * tokenField;                                              //@synthesize tokenField=_tokenField - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                   //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) char isSearching;                                                       //@synthesize isSearching=_isSearching - In the implementation block
@property (nonatomic,retain) NSCountedSet * visibleUsernameLetters;                                  //@synthesize visibleUsernameLetters=_visibleUsernameLetters - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * shareString;                                                   //@synthesize shareString=_shareString - In the implementation block
@property (nonatomic,readonly) char isReadyToShare; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic,__weak) UIViewController*<IGShareManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithMediaMetadata:(id)arg1 ;
-(void)updateQuery:(id)arg1 ;
-(IGUserListLocalDataSource *)localUsersDataSource;
-(id)newHeaderViewWithTitle:(id)arg1 bottomLine:(char)arg2 ;
-(IGUserListNetworkDataSource *)networkUsersDataSource;
-(void)setCurrentDataSource:(NSObject*<IGAutocompleteDataSource>)arg1 ;
-(void)reloadFullUserList;
-(int)numberOfRecentsToShow;
-(NSObject*<IGAutocompleteDataSource>)currentDataSource;
-(UIView *)recentsLabelHeaderView;
-(UIView *)followingLabelHeaderView;
-(void)setIsSearching:(char)arg1 ;
-(id)searchPromptCellForIndexPath:(id)arg1 ;
-(id)noResultsCellForIndexPath:(id)arg1 ;
-(void)reloadNetworkUserList;
-(void)dataSourceDidStartLoading:(id)arg1 ;
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)dataSourceDidFailLoad:(id)arg1 ;
-(void)setLocalUsersDataSource:(IGUserListLocalDataSource *)arg1 ;
-(void)setNetworkUsersDataSource:(IGUserListNetworkDataSource *)arg1 ;
-(void)setRecentsLabelHeaderView:(UIView *)arg1 ;
-(void)setFollowingLabelHeaderView:(UIView *)arg1 ;
-(void)setTokenField:(IGTokenField *)arg1 ;
-(IGTokenField *)tokenField;
-(id)tokenFieldViewForTokenOverlay:(id)arg1 ;
-(void)tokenFieldWillFocusUser:(id)arg1 ;
-(void)tokenFieldDidBeginEditing:(id)arg1 ;
-(char)tokenFieldCanFinishEditing:(id)arg1 ;
-(void)tokenFieldDidRequestSearch:(id)arg1 ;
-(void)tokenField:(id)arg1 didChangeQuery:(id)arg2 ;
-(void)tokenField:(id)arg1 didDeleteToken:(id)arg2 ;
-(void)setShareString:(NSString *)arg1 ;
-(NSString *)shareString;
-(char)isReadyToShare;
-(NSArray *)recentRecipientSets;
-(void)setRecentRecipientSets:(NSArray *)arg1 ;
-(void)indexView:(id)arg1 didSelectIndex:(unsigned)arg2 ;
-(void)updateShareString;
-(IGSectionIndexView *)indexView;
-(void)updateTokenFrame;
-(void)updateIndexViewFrame;
-(void)updateVisibleIndexRange;
-(float)tokenOffsetY;
-(void)enterSearchMode;
-(void)logRecipientsUpdatedWithUser:(id)arg1 fromSource:(int)arg2 wasAdded:(char)arg3 ;
-(void)exitSearchMode;
-(id)letterForUser:(id)arg1 ;
-(float)tokenViewOverlapForContentOffsetY:(float)arg1 ;
-(NSCountedSet *)visibleUsernameLetters;
-(id)userCellForUsers:(id)arg1 ;
-(void)addUserToVisibleUsers:(id)arg1 ;
-(void)removeUserFromVisibleUsers:(id)arg1 ;
-(void)tableViewDidSelectUsers:(id)arg1 fromSection:(int)arg2 ;
-(void)setIndexView:(IGSectionIndexView *)arg1 ;
-(void)setVisibleUsernameLetters:(NSCountedSet *)arg1 ;
-(char)isSearching;
-(UIView *)overlayView;
-(void)dealloc;
-(void)setDelegate:(UIViewController*<IGShareManagerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(UIViewController*<IGShareManagerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(char)resignFirstResponder;
-(UIView *)tableHeaderView;
-(void)setTableHeaderView:(UIView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(UIScrollView *)scrollView;
-(UIEdgeInsets)preferredContentInsets;
-(void)keyboardDidShow:(id)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)updateMetadata;
-(IGMediaMetadata *)mediaMetadata;
-(void)setMediaMetadata:(IGMediaMetadata *)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

