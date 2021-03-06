
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGNewsDataSourceSectionDelegate.h>
#import <Instagram/IGTableViewInsetInfoViewDelegate.h>
#import <Instagram/IGActivityFeedViewControllerProtocol.h>

@protocol IGActivityFeedViewControllerDelegate;
@class IGViewController, NSArray, IGRefreshControl, IGTableViewInsetInfoView, NSMutableDictionary, IGNewsEmptyFeedView, UIView, IGActivityPreviewingHandler, NSString;

@interface IGNewsTableViewController : IGGroupedTableViewController <UITableViewDataSource, UITableViewDelegate, IGNewsDataSourceSectionDelegate, IGTableViewInsetInfoViewDelegate, IGActivityFeedViewControllerProtocol> {

	char _loading;
	id<IGActivityFeedViewControllerDelegate> delegate;
	IGViewController* containingViewController;
	int _segment;
	NSArray* _sections;
	float _pullToRefreshYInset;
	IGRefreshControl* _refreshControl;
	IGTableViewInsetInfoView* _infoView;
	NSMutableDictionary* _webViewCellSizes;
	IGNewsEmptyFeedView* _emptyFeedView;
	UIView* _lineView;
	IGActivityPreviewingHandler* _previewDelegate;

}

@property (nonatomic,retain) IGRefreshControl * refreshControl;                                     //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) IGTableViewInsetInfoView * infoView;                                   //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * webViewCellSizes;                                //@synthesize webViewCellSizes=_webViewCellSizes - In the implementation block
@property (nonatomic,retain) IGNewsEmptyFeedView * emptyFeedView;                                   //@synthesize emptyFeedView=_emptyFeedView - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                                     //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) IGActivityPreviewingHandler * previewDelegate;                         //@synthesize previewDelegate=_previewDelegate - In the implementation block
@property (nonatomic,readonly) int segment;                                                         //@synthesize segment=_segment - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                    //@synthesize sections=_sections - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                         //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) float pullToRefreshYInset;                                             //@synthesize pullToRefreshYInset=_pullToRefreshYInset - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGActivityFeedViewControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) IGViewController * containingViewController; 
-(id)analyticsModule;
-(void)reloadDataFromPullToRefresh;
-(void)setLineView:(UIView *)arg1 ;
-(void)tableViewInsetInfoViewDidTapOnView:(id)arg1 ;
-(void)onFetchFailed:(id)arg1 ;
-(void)finishedLoadingData;
-(id)newEmptyFeedView;
-(void)showNuxIfAppropriate;
-(void)onDataReceived:(id)arg1 ;
-(id)sectionAtSectionIndex:(unsigned)arg1 ;
-(IGNewsEmptyFeedView *)emptyFeedView;
-(float)pullToRefreshYInset;
-(void)setPullToRefreshYInset:(float)arg1 ;
-(void)setWebViewCellSizes:(NSMutableDictionary *)arg1 ;
-(void)setEmptyFeedView:(IGNewsEmptyFeedView *)arg1 ;
-(NSMutableDictionary *)webViewCellSizes;
-(void)newsDataSection:(id)arg1 pushViewController:(id)arg2 ;
-(void)newsDataSection:(id)arg1 presentViewController:(id)arg2 ;
-(void)newsDataSection:(id)arg1 openURL:(id)arg2 ;
-(void)needsUpdateHeightsWithNewsDataSection:(id)arg1 ;
-(void)logFollowEvent:(id)arg1 isFollow:(char)arg2 targetID:(id)arg3 clickPoint:(id)arg4 ;
-(id)labelForHeaderInSection:(int)arg1 ;
-(IGActivityPreviewingHandler *)previewDelegate;
-(void)setPreviewDelegate:(IGActivityPreviewingHandler *)arg1 ;
-(void)fetchData;
-(IGTableViewInsetInfoView *)infoView;
-(void)setInfoView:(IGTableViewInsetInfoView *)arg1 ;
-(void)setDelegate:(id<IGActivityFeedViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGActivityFeedViewControllerDelegate>)delegate;
-(id)scrollView;
-(void)viewDidLoad;
-(UIEdgeInsets)preferredContentInsets;
-(char)isLoading;
-(void)setRefreshControl:(IGRefreshControl *)arg1 ;
-(IGRefreshControl *)refreshControl;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(int)segment;
-(UIView *)lineView;
-(void)setContainingViewController:(IGViewController *)arg1 ;
-(IGViewController *)containingViewController;
-(void)setLoading:(char)arg1 ;
-(id)titleForHeaderInSection:(int)arg1 ;
@end

