
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGGraphQLParsing.h>
#import <Instagram/IGBusinessConversionNoPagesViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGBusinessConversionFlowStep.h>

@protocol IGBusinessConversionViewControllerDelegate;
@class FBSDKAccessToken, NSArray, UIView, IGFacebookPageInfo, IGBusinessConversionLoggingHelper, NSString;

@interface IGBusinessConversionPageSelectionViewController : IGGroupedTableViewController <IGGraphQLParsing, IGBusinessConversionNoPagesViewDelegate, UITableViewDataSource, UITableViewDelegate, IGBusinessConversionFlowStep> {

	char _isFetchingPages;
	char _loadedZeroPages;
	char _needsRefresh;
	id<IGBusinessConversionViewControllerDelegate> _delegate;
	FBSDKAccessToken* _accessToken;
	NSArray* _pageInfoObjects;
	UIView* _headerView;
	IGFacebookPageInfo* _selectedPageInfo;
	IGBusinessConversionLoggingHelper* _loggingHelper;

}

@property (nonatomic,retain) FBSDKAccessToken * accessToken;                                              //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,retain) NSArray * pageInfoObjects;                                                   //@synthesize pageInfoObjects=_pageInfoObjects - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGFacebookPageInfo * selectedPageInfo;                                       //@synthesize selectedPageInfo=_selectedPageInfo - In the implementation block
@property (assign,nonatomic) char isFetchingPages;                                                        //@synthesize isFetchingPages=_isFetchingPages - In the implementation block
@property (nonatomic,retain) IGBusinessConversionLoggingHelper * loggingHelper;                           //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (assign,nonatomic) char loadedZeroPages;                                                        //@synthesize loadedZeroPages=_loadedZeroPages - In the implementation block
@property (assign,nonatomic) char needsRefresh;                                                           //@synthesize needsRefresh=_needsRefresh - In the implementation block
@property (assign,nonatomic,__weak) id<IGBusinessConversionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)parseGraphQLResponseWithResult:(id)arg1 error:(id*)arg2 ;
-(IGBusinessConversionLoggingHelper *)loggingHelper;
-(id)titleForFooterInSection:(int)arg1 ;
-(void)fetchPages;
-(id)newDefaultHeaderView;
-(char)loadedZeroPages;
-(char)isFetchingPages;
-(NSArray *)pageInfoObjects;
-(void)progressToNextViewController;
-(IGFacebookPageInfo *)selectedPageInfo;
-(id)analyticsFlowStep;
-(void)setSelectedPageInfo:(IGFacebookPageInfo *)arg1 ;
-(void)setIsFetchingPages:(char)arg1 ;
-(void)setPageInfoObjects:(NSArray *)arg1 ;
-(void)setLoadedZeroPages:(char)arg1 ;
-(void)updateUIAfterCreatePageButtonTapped;
-(void)businessConversionCreatePageButtonTapped:(id)arg1 ;
-(id)initWithFacebookAccessToken:(id)arg1 loggingHelper:(id)arg2 ;
-(void)setLoggingHelper:(IGBusinessConversionLoggingHelper *)arg1 ;
-(void)setDelegate:(id<IGBusinessConversionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGBusinessConversionViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)updateLayout;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)updateHeaderView;
-(FBSDKAccessToken *)accessToken;
-(char)needsRefresh;
-(void)setNeedsRefresh:(char)arg1 ;
-(void)updateNextButton;
-(void)willBecomeActive;
-(void)setAccessToken:(FBSDKAccessToken *)arg1 ;
-(id)titleForHeaderInSection:(int)arg1 ;
@end

