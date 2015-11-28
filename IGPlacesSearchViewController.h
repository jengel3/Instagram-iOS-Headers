
#import <Instagram/IGSearchResultsViewController.h>
#import <Instagram/IGExploreSearchChildViewController.h>

@class IGSearchResultsEnableLocationCell, IGPlacesAutocompleteDataSource, NSString;

@interface IGPlacesSearchViewController : IGSearchResultsViewController <IGExploreSearchChildViewController> {

	IGSearchResultsEnableLocationCell* _enableLocationCell;

}

@property (nonatomic,readonly) IGPlacesAutocompleteDataSource * dataSource; 
@property (nonatomic,readonly) IGSearchResultsEnableLocationCell * enableLocationCell;              //@synthesize enableLocationCell=_enableLocationCell - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsExtras;
-(char)enableNavState;
-(id)fallbackIcon;
-(id)initWithHostingViewController:(id)arg1 dataSource:(id)arg2 ;
-(char)shouldShowSuggestedSection;
-(void)reloadTableView;
-(void)logItemTap:(id)arg1 atRow:(int)arg2 searchString:(id)arg3 ;
-(id)searchBarPlaceholder;
-(void)filterBySearchString:(id)arg1 ;
-(void)clearSearchHistory;
-(void)logSearchCancelEventForSearchString:(id)arg1 ;
-(void)logSearchCancelRaindropEvent;
-(void)logRaindropSearchQueryEvent;
-(void)prepareLoggingForQueryText:(id)arg1 ;
-(char)shouldShowLocationCellInSection:(int)arg1 ;
-(IGSearchResultsEnableLocationCell *)enableLocationCell;
-(id)nearbyTitle;
-(char)shouldShowSectionHeader;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)accessibilityIdentifier;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(int)searchType;
@end

