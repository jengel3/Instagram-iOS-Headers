
#import <Instagram/FBViewController.h>
#import <Instagram/FBGraphObjectSelectionChangedDelegate.h>
#import <Instagram/FBGraphObjectViewControllerDelegate.h>
#import <Instagram/FBGraphObjectPagingLoaderDelegate.h>

@class UIActivityIndicatorView, UITableView, NSSet, FBSession, NSString, FBGraphObjectTableDataSource, FBGraphObjectTableSelection, FBGraphObjectPagingLoader, NSArray;

@interface FBFriendPickerViewController : FBViewController <FBGraphObjectSelectionChangedDelegate, FBGraphObjectViewControllerDelegate, FBGraphObjectPagingLoaderDelegate> {

	char _allowsMultipleSelection;
	char _trackActiveSession;
	UIActivityIndicatorView* _spinner;
	UITableView* _tableView;
	NSSet* _fieldsForRequest;
	FBSession* _session;
	NSString* _userID;
	unsigned _sortOrdering;
	unsigned _displayOrdering;
	FBGraphObjectTableDataSource* _dataSource;
	FBGraphObjectTableSelection* _selectionManager;
	FBGraphObjectPagingLoader* _loader;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;                           //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                     //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) char allowsMultipleSelection; 
@property (assign,nonatomic) char itemPicturesEnabled; 
@property (nonatomic,copy) NSSet * fieldsForRequest;                                      //@synthesize fieldsForRequest=_fieldsForRequest - In the implementation block
@property (nonatomic,retain) FBSession * session;                                         //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * userID;                                             //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSArray * selection; 
@property (assign,nonatomic) unsigned sortOrdering;                                       //@synthesize sortOrdering=_sortOrdering - In the implementation block
@property (assign,nonatomic) unsigned displayOrdering;                                    //@synthesize displayOrdering=_displayOrdering - In the implementation block
@property (nonatomic,retain) FBGraphObjectTableDataSource * dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) FBGraphObjectTableSelection * selectionManager;              //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,retain) FBGraphObjectPagingLoader * loader;                          //@synthesize loader=_loader - In the implementation block
@property (assign,nonatomic) char trackActiveSession;                                     //@synthesize trackActiveSession=_trackActiveSession - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestWithUserID:(id)arg1 fields:(id)arg2 dataSource:(id)arg3 session:(id)arg4 ;
+(id)cacheDescriptor;
+(id)cacheDescriptorWithUserID:(id)arg1 fieldsForRequest:(id)arg2 ;
-(char)graphObjectTableDataSource:(id)arg1 filterIncludesItem:(id)arg2 ;
-(id)graphObjectTableDataSource:(id)arg1 pictureUrlOfItem:(id)arg2 ;
-(char)itemPicturesEnabled;
-(id)graphObjectTableDataSource:(id)arg1 titleSuffixOfItem:(id)arg2 ;
-(id)graphObjectTableDataSource:(id)arg1 titleOfItem:(id)arg2 ;
-(void)graphObjectTableDataSource:(id)arg1 customizeTableCell:(id)arg2 ;
-(void)setItemPicturesEnabled:(char)arg1 ;
-(void)setSelectionManager:(FBGraphObjectTableSelection *)arg1 ;
-(void)setDisplayOrdering:(unsigned)arg1 ;
-(void)setTrackActiveSession:(char)arg1 ;
-(FBGraphObjectTableSelection *)selectionManager;
-(NSSet *)fieldsForRequest;
-(void)setFieldsForRequest:(NSSet *)arg1 ;
-(char)trackActiveSession;
-(void)loadDataSkippingRoundTripIfCached:(id)arg1 ;
-(id)requestForLoadData;
-(unsigned)displayOrdering;
-(void)centerAndStartSpinner;
-(void)graphObjectTableSelectionDidChange:(id)arg1 ;
-(void)pagingLoader:(id)arg1 willLoadURL:(id)arg2 ;
-(void)pagingLoader:(id)arg1 didLoadData:(id)arg2 ;
-(void)pagingLoaderDidFinishLoading:(id)arg1 ;
-(void)pagingLoader:(id)arg1 handleError:(id)arg2 ;
-(void)pagingLoaderWasCancelled:(id)arg1 ;
-(void)configureUsingCachedDescriptor:(id)arg1 ;
-(void)logAppEvents:(char)arg1 ;
-(unsigned)sortOrdering;
-(void)setSortOrdering:(unsigned)arg1 ;
-(FBGraphObjectPagingLoader *)loader;
-(FBSession *)session;
-(id)initWithCoder:(id)arg1 ;
-(void)setDataSource:(FBGraphObjectTableDataSource *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(FBGraphObjectTableDataSource *)dataSource;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)initialize;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(NSArray *)selection;
-(void)setSelection:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)clearSelection;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)updateView;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setLoader:(FBGraphObjectPagingLoader *)arg1 ;
-(void)setSession:(FBSession *)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(void)loadData;
-(void)addSessionObserver:(id)arg1 ;
-(void)removeSessionObserver:(id)arg1 ;
-(void)clearData;
@end

