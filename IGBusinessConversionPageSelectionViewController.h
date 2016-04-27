
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGGraphQLParsing.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGBusinessConversionFlowStep.h>

@protocol IGBusinessConversionViewControllerDelegate;
@class FBSDKAccessToken, NSArray, IGBusinessConversionHeaderView, IGFacebookPageInfo, IGBusinessConversionLoggingHelper, NSString;

@interface IGBusinessConversionPageSelectionViewController : IGGroupedTableViewController <IGGraphQLParsing, UITableViewDataSource, UITableViewDelegate, IGBusinessConversionFlowStep> {

	char _isFetchingPages;
	id<IGBusinessConversionViewControllerDelegate> _delegate;
	FBSDKAccessToken* _accessToken;
	NSArray* _pageInfoObjects;
	IGBusinessConversionHeaderView* _headerView;
	IGFacebookPageInfo* _selectedPageInfo;
	IGBusinessConversionLoggingHelper* _loggingHelper;

}

@property (assign,nonatomic,__weak) id<IGBusinessConversionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBSDKAccessToken * accessToken;                                              //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,retain) NSArray * pageInfoObjects;                                                   //@synthesize pageInfoObjects=_pageInfoObjects - In the implementation block
@property (nonatomic,retain) IGBusinessConversionHeaderView * headerView;                                 //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGFacebookPageInfo * selectedPageInfo;                                       //@synthesize selectedPageInfo=_selectedPageInfo - In the implementation block
@property (assign,nonatomic) char isFetchingPages;                                                        //@synthesize isFetchingPages=_isFetchingPages - In the implementation block
@property (nonatomic,retain) IGBusinessConversionLoggingHelper * loggingHelper;                           //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)parseGraphQLResponseWithResult:(id)arg1 error:(id*)arg2 ;
-(id)titleForFooterInSection:(int)arg1 ;
-(IGBusinessConversionLoggingHelper *)loggingHelper;
-(void)setLoggingHelper:(IGBusinessConversionLoggingHelper *)arg1 ;
-(id)analyticsFlowStep;
-(void)fetchPages;
-(char)isFetchingPages;
-(NSArray *)pageInfoObjects;
-(void)progressToNextViewController;
-(IGFacebookPageInfo *)selectedPageInfo;
-(void)setSelectedPageInfo:(IGFacebookPageInfo *)arg1 ;
-(void)setIsFetchingPages:(char)arg1 ;
-(void)setPageInfoObjects:(NSArray *)arg1 ;
-(id)initWithFacebookAccessToken:(id)arg1 loggingHelper:(id)arg2 ;
-(id)newHeaderView;
-(void)setDelegate:(id<IGBusinessConversionViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGBusinessConversionViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(IGBusinessConversionHeaderView *)headerView;
-(void)setHeaderView:(IGBusinessConversionHeaderView *)arg1 ;
-(FBSDKAccessToken *)accessToken;
-(void)updateNextButton;
-(void)setAccessToken:(FBSDKAccessToken *)arg1 ;
-(id)titleForHeaderInSection:(int)arg1 ;
@end

