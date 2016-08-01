
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGTableViewInsetInfoViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Instagram/IGMegaphoneItemControllerDelegate.h>
#import <Instagram/IGActivityStoryItemControllerDelegate.h>
#import <Instagram/IGActivityFeedViewControllerProtocol.h>

@protocol IGActivityFeedViewControllerDelegate;
@class IGTableViewInsetInfoView, IGViewController, IGListCollectionView, IGListAdapter, IGRefreshControl, IGActivityPreviewingHandler, NSOrderedSet, IGGenericMegaphone, IGNuxTapOnCameraView, NSString;

@interface IGActivityFeedViewController2 : IGViewController <IGListAdapterDataSource, IGTableViewInsetInfoViewDelegate, UIScrollViewDelegate, IGMegaphoneItemControllerDelegate, IGActivityStoryItemControllerDelegate, IGActivityFeedViewControllerProtocol> {

	char _inboxIsDirty;
	char _loading;
	IGTableViewInsetInfoView* _infoView;
	id<IGActivityFeedViewControllerDelegate> delegate;
	IGViewController* containingViewController;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGRefreshControl* _refreshControl;
	IGActivityPreviewingHandler* _previewDelegate;
	NSOrderedSet* _megaphoneStories;
	NSOrderedSet* _directStories;
	NSOrderedSet* _friendRequestStories;
	NSOrderedSet* _freshStories;
	NSOrderedSet* _oldStories;
	IGGenericMegaphone* _megaphone;
	IGGenericMegaphone* _notificationMegaphone;
	IGNuxTapOnCameraView* _noMediaNux;
	double _lastMediaPostTime;

}

@property (nonatomic,readonly) IGListCollectionView * collectionView;                               //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                         //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGRefreshControl * refreshControl;                                   //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,readonly) IGTableViewInsetInfoView * infoView;                                 //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,readonly) IGActivityPreviewingHandler * previewDelegate;                       //@synthesize previewDelegate=_previewDelegate - In the implementation block
@property (nonatomic,retain) NSOrderedSet * megaphoneStories;                                       //@synthesize megaphoneStories=_megaphoneStories - In the implementation block
@property (nonatomic,retain) NSOrderedSet * directStories;                                          //@synthesize directStories=_directStories - In the implementation block
@property (nonatomic,retain) NSOrderedSet * friendRequestStories;                                   //@synthesize friendRequestStories=_friendRequestStories - In the implementation block
@property (nonatomic,retain) NSOrderedSet * freshStories;                                           //@synthesize freshStories=_freshStories - In the implementation block
@property (nonatomic,retain) NSOrderedSet * oldStories;                                             //@synthesize oldStories=_oldStories - In the implementation block
@property (nonatomic,retain) IGGenericMegaphone * megaphone;                                        //@synthesize megaphone=_megaphone - In the implementation block
@property (nonatomic,retain) IGGenericMegaphone * notificationMegaphone;                            //@synthesize notificationMegaphone=_notificationMegaphone - In the implementation block
@property (assign,nonatomic) char inboxIsDirty;                                                     //@synthesize inboxIsDirty=_inboxIsDirty - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                         //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) IGNuxTapOnCameraView * noMediaNux;                                     //@synthesize noMediaNux=_noMediaNux - In the implementation block
@property (assign,nonatomic) double lastMediaPostTime;                                              //@synthesize lastMediaPostTime=_lastMediaPostTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGActivityFeedViewControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) IGViewController * containingViewController; 
-(id)analyticsModule;
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 ;
-(IGGenericMegaphone *)megaphone;
-(void)setMegaphone:(IGGenericMegaphone *)arg1 ;
-(void)didDismissMegaphoneItemController:(id)arg1 ;
-(void)megaphoneItemController:(id)arg1 didSelectButton:(id)arg2 ;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)scrollViewWillScrollNearBottom:(id)arg1 ;
-(void)scrollViewWillScrollNearTop:(id)arg1 ;
-(void)tableViewInsetInfoViewDidTapOnView:(id)arg1 ;
-(void)onFetchFailed:(id)arg1 ;
-(id)newEmptyFeedView;
-(void)dismissNoMediaNux;
-(char)inboxIsDirty;
-(void)showNuxIfAppropriate;
-(void)onDataReceived:(id)arg1 ;
-(void)setInboxIsDirty:(char)arg1 ;
-(double)lastMediaPostTime;
-(IGNuxTapOnCameraView *)noMediaNux;
-(void)setLastMediaPostTime:(double)arg1 ;
-(void)setNoMediaNux:(IGNuxTapOnCameraView *)arg1 ;
-(float)fullOffsetAdjustmentWithVisibleNux;
-(void)setMegaphoneStories:(NSOrderedSet *)arg1 ;
-(void)setDirectStories:(NSOrderedSet *)arg1 ;
-(void)setFriendRequestStories:(NSOrderedSet *)arg1 ;
-(void)setFreshStories:(NSOrderedSet *)arg1 ;
-(void)setOldStories:(NSOrderedSet *)arg1 ;
-(void)setNotificationMegaphone:(IGGenericMegaphone *)arg1 ;
-(IGGenericMegaphone *)notificationMegaphone;
-(NSOrderedSet *)megaphoneStories;
-(NSOrderedSet *)directStories;
-(NSOrderedSet *)friendRequestStories;
-(NSOrderedSet *)freshStories;
-(NSOrderedSet *)oldStories;
-(void)dismissNotificationMegaphone;
-(id)analyticsMetadataForActivityStoryItemController:(id)arg1 ;
-(IGActivityPreviewingHandler *)previewDelegate;
-(void)fetchData;
-(IGTableViewInsetInfoView *)infoView;
-(void)setDelegate:(id<IGActivityFeedViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id<IGActivityFeedViewControllerDelegate>)delegate;
-(id)scrollView;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(UIEdgeInsets)preferredContentInsets;
-(char)isLoading;
-(IGRefreshControl *)refreshControl;
-(void)setContainingViewController:(IGViewController *)arg1 ;
-(IGViewController *)containingViewController;
-(void)setLoading:(char)arg1 ;
@end

