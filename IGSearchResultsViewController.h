/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:02 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPlainTableViewController.h>
#import <Instagram/IGAutocompleteAsyncDataSourceDelegate.h>

@protocol IGAutocompleteAsyncDataSourceIGAutocompleteNetworkDataSourceAnalytics, IGSearchResultsViewControllerDelegate;
@class NSString, IGExploreSearchViewController, NSOrderedSet, NSMutableArray;

@interface IGSearchResultsViewController : IGPlainTableViewController <IGAutocompleteAsyncDataSourceDelegate> {

	char _isSearching;
	char _isBackSpace;
	char _hasInteraction;
	id<IGAutocompleteAsyncDataSource><IGAutocompleteNetworkDataSourceAnalytics> _dataSource;
	id<IGSearchResultsViewControllerDelegate> _delegate;
	NSString* _searchText;
	NSString* _noResultsMessage;
	IGExploreSearchViewController* _hostingViewController;
	unsigned _minUnSeenRow;
	NSOrderedSet* _sectionControllers;
	NSMutableArray* _searchQueryArray;

}

@property (nonatomic,readonly) id<IGAutocompleteAsyncDataSource><IGAutocompleteNetworkDataSourceAnalytics> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGSearchResultsViewControllerDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                                                   //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain) NSString * noResultsMessage;                                                                           //@synthesize noResultsMessage=_noResultsMessage - In the implementation block
@property (nonatomic,readonly) char isSearching;                                                                                    //@synthesize isSearching=_isSearching - In the implementation block
@property (assign,nonatomic,__weak) IGExploreSearchViewController * hostingViewController;                                          //@synthesize hostingViewController=_hostingViewController - In the implementation block
@property (assign,nonatomic) unsigned minUnSeenRow;                                                                                 //@synthesize minUnSeenRow=_minUnSeenRow - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * sectionControllers;                                                                   //@synthesize sectionControllers=_sectionControllers - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchQueryArray;                                                                     //@synthesize searchQueryArray=_searchQueryArray - In the implementation block
@property (assign,nonatomic) char isBackSpace;                                                                                      //@synthesize isBackSpace=_isBackSpace - In the implementation block
@property (assign,nonatomic) char hasInteraction;                                                                                   //@synthesize hasInteraction=_hasInteraction - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getRaindropInstagramEntityFromItem:(id)arg1 ;
+(id)getRaindropResultIdFromItem:(id)arg1 ;
-(char)prefersNavigationBarHidden;
-(id)searchingCellForTableView:(id)arg1 ;
-(void)autocompleteDataSourceDidFinishLoading:(id)arg1 ;
-(void)autocompleteDataSourceDidStartLoading:(id)arg1 ;
-(void)autocompleteDataSourceDidFailLoad:(id)arg1 ;
-(void)configure;
-(id)initWithHostingViewController:(id)arg1 dataSource:(id)arg2 ;
-(void)reloadTableView;
-(void)logItemTap:(id)arg1 atRow:(int)arg2 searchString:(id)arg3 ;
-(unsigned)minUnSeenRow;
-(void)onSearchTextDidChange:(id)arg1 ;
-(void)filterBySearchString:(id)arg1 ;
-(void)logSearchCancelEventForSearchString:(id)arg1 ;
-(void)logSearchCancelRaindropEvent;
-(void)logRaindropSearchQueryEvent;
-(void)prepareLoggingForQueryText:(id)arg1 ;
-(int)searchResultState;
-(char)noSearchQuery;
-(char)isSearchingIndicatorSection:(int)arg1 ;
-(void)searchDidEnd;
-(void)searchDidStart;
-(void)transitionToVisibleState;
-(void)logSearchCancelEvent;
-(void)onClearSearchNotification:(id)arg1 ;
-(void)reloadSearchView;
-(void)setHasInteraction:(char)arg1 ;
-(char)hasInteraction;
-(void)resetSearchRankTokenInfo;
-(void)logSearchBeginEvent;
-(void)logSearchInitiated;
-(void)setMinUnSeenRow:(unsigned)arg1 ;
-(void)logSearchBackSpaceRaindropEvent;
-(void)saveSearchQueryText:(id)arg1 ;
-(NSOrderedSet *)sectionControllers;
-(id)sectionControllerForSection:(unsigned)arg1 ;
-(void)logSearchTypingRaindropEvent;
-(void)logSearchResponseToSearchText:(id)arg1 rankToken:(id)arg2 ;
-(id)noResultsCellForTableView:(id)arg1 ;
-(id)tableView:(id)arg1 resultCellForIndexPath:(id)arg2 ;
-(void)didSelectResultRowAtIndexPath:(id)arg1 ;
-(void)logUserSearchQuery;
-(void)setHostingViewController:(IGExploreSearchViewController *)arg1 ;
-(NSMutableArray *)searchQueryArray;
-(void)setSearchQueryArray:(NSMutableArray *)arg1 ;
-(char)isBackSpace;
-(void)setIsBackSpace:(char)arg1 ;
-(char)isSearching;
-(void)setSearchText:(NSString *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGSearchResultsViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGAutocompleteAsyncDataSource><IGAutocompleteNetworkDataSourceAnalytics>)dataSource;
-(id<IGSearchResultsViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(NSString *)searchText;
-(NSString *)noResultsMessage;
-(void)setNoResultsMessage:(NSString *)arg1 ;
-(IGExploreSearchViewController *)hostingViewController;
-(void)setSections:(id)arg1 ;
-(int)searchType;
@end

