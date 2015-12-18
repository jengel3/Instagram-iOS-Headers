
#import <Instagram/IGViewController.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGPreviewingAction.h>

@class UINavigationController, IGPreviewEventManager, IGHashtagModel, IGFeedNetworkSource, NSArray, IGHashtagPreviewView, NSString;

@interface IGHashtagPreviewController : IGViewController <IGFeedNetworkSourceDelegate, IGPreviewingAction> {

	float _previewWidth;
	UINavigationController* _navigationControllerForPushing;
	IGPreviewEventManager* _logger;
	IGHashtagModel* _hashtag;
	IGFeedNetworkSource* _feedSource;
	NSArray* _previewItems;
	IGHashtagPreviewView* _hashtagView;

}

@property (assign,nonatomic) float previewWidth;                                                   //@synthesize previewWidth=_previewWidth - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationControllerForPushing;              //@synthesize navigationControllerForPushing=_navigationControllerForPushing - In the implementation block
@property (nonatomic,retain) IGPreviewEventManager * logger;                                       //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) IGHashtagModel * hashtag;                                             //@synthesize hashtag=_hashtag - In the implementation block
@property (nonatomic,retain) IGFeedNetworkSource * feedSource;                                     //@synthesize feedSource=_feedSource - In the implementation block
@property (nonatomic,retain) NSArray * previewItems;                                               //@synthesize previewItems=_previewItems - In the implementation block
@property (nonatomic,retain) IGHashtagPreviewView * hashtagView;                                   //@synthesize hashtagView=_hashtagView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHashtag:(id)arg1 ;
-(IGFeedNetworkSource *)feedSource;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)setFeedSource:(IGFeedNetworkSource *)arg1 ;
-(IGHashtagModel *)hashtag;
-(void)setHashtag:(IGHashtagModel *)arg1 ;
-(id)previewActionBarItems;
-(void)showDirectShare;
-(float)previewWidth;
-(UINavigationController *)navigationControllerForPushing;
-(void)setPreviewWidth:(float)arg1 ;
-(void)setNavigationControllerForPushing:(UINavigationController *)arg1 ;
-(void)setHashtagView:(IGHashtagPreviewView *)arg1 ;
-(IGHashtagPreviewView *)hashtagView;
-(void)updateHashtagView;
-(void)hashtagFetchedAdditionalInfo:(id)arg1 ;
-(IGPreviewEventManager *)logger;
-(void)setLogger:(IGPreviewEventManager *)arg1 ;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(id)previewActionItems;
-(void)setPreviewItems:(NSArray *)arg1 ;
-(NSArray *)previewItems;
@end

