
#import <Instagram/IGSearchResultsTab.h>

@class NSString, IGPlacesAutocompleteDataSource;

@interface IGPlacesSearchResults : NSObject <IGSearchResultsTab> {

	char _enableNavState;
	char _canShowLocationCell;
	char _canShowPreviewMedia;
	char _shouldShowSectionHeader;
	char _enableFrequentItems;
	NSString* _moduleName;
	NSString* _searchType;
	NSString* _viewSubType;
	NSString* _noResultsMessage;
	NSString* _queryType;
	NSString* _tapEventName;
	NSString* _tapCancelEventName;
	IGPlacesAutocompleteDataSource* _dataSource;

}

@property (nonatomic,readonly) IGPlacesAutocompleteDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * moduleName;                               //@synthesize moduleName=_moduleName - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchType;                               //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewSubType;                              //@synthesize viewSubType=_viewSubType - In the implementation block
@property (nonatomic,readonly) char enableNavState;                                      //@synthesize enableNavState=_enableNavState - In the implementation block
@property (nonatomic,readonly) char canShowLocationCell;                                 //@synthesize canShowLocationCell=_canShowLocationCell - In the implementation block
@property (nonatomic,readonly) char canShowPreviewMedia;                                 //@synthesize canShowPreviewMedia=_canShowPreviewMedia - In the implementation block
@property (nonatomic,readonly) char shouldShowSectionHeader;                             //@synthesize shouldShowSectionHeader=_shouldShowSectionHeader - In the implementation block
@property (nonatomic,copy,readonly) NSString * noResultsMessage;                         //@synthesize noResultsMessage=_noResultsMessage - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryType;                                //@synthesize queryType=_queryType - In the implementation block
@property (nonatomic,copy,readonly) NSString * tapEventName;                             //@synthesize tapEventName=_tapEventName - In the implementation block
@property (nonatomic,copy,readonly) NSString * tapCancelEventName;                       //@synthesize tapCancelEventName=_tapCancelEventName - In the implementation block
@property (assign,nonatomic) char enableFrequentItems;                                   //@synthesize enableFrequentItems=_enableFrequentItems - In the implementation block
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(char)enableNavState;
-(NSString *)moduleName;
-(unsigned)numberOfLocalResults;
-(char)canShowLocationCell;
-(id)allSearchResults;
-(void)filterBySearchString:(id)arg1 searchInfo:(id)arg2 ;
-(char)isLocalItem:(id)arg1 ;
-(char)noSearchQuery:(id)arg1 ;
-(id)tableSectionsWithViewController:(id)arg1 ;
-(id)idResultsList;
-(void)clearFrequent;
-(void)frequentItemsLoaded;
-(id)filteredRecentItems;
-(int)filterResultState:(int)arg1 ;
-(void)addLoadedNotifications;
-(void)addLocationTracker;
-(char)shouldShowFrequentSection;
-(NSString *)viewSubType;
-(char)canShowPreviewMedia;
-(char)shouldShowSectionHeader;
-(NSString *)queryType;
-(NSString *)tapEventName;
-(NSString *)tapCancelEventName;
-(char)enableFrequentItems;
-(void)setEnableFrequentItems:(char)arg1 ;
-(id)searchBarPlaceholder;
-(void)onSearchTextDidChange:(id)arg1 ;
-(id)fallbackIcon;
-(IGPlacesAutocompleteDataSource *)dataSource;
-(id)title;
-(id)accessibilityIdentifier;
-(NSString *)noResultsMessage;
-(id)initWithDataSource:(id)arg1 ;
-(NSString *)searchType;
@end

