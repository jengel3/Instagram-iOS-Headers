
#import <Instagram/IGSearchResultsViewController.h>

@class IGPlacesAutocompleteDataSource;

@interface IGSearchNearbyPlacesViewController : IGSearchResultsViewController

@property (nonatomic,readonly) IGPlacesAutocompleteDataSource * dataSource; 
-(void)reloadTableView;
-(void)filterBySearchString:(id)arg1 ;
-(void)logRaindropSearchQueryEvent;
-(int)searchResultState;
-(char)noSearchQuery;
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(void)reload;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(int)searchType;
@end

