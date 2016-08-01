
#import <Instagram/IGViewController.h>
#import <Instagram/IGAdRatingWebViewItemControllerDelegate.h>
#import <Instagram/IGFeedItemDirectResponseLoggingProviderDelegate.h>
#import <Instagram/IGFeedItemLoggingProviderDelegate.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol IGFeedItemConfigurationType, IGFeedConfigurationType;
@class IGUser, IGListCollectionView, IGListAdapter, IGFeedNetworkSource, IGFeedVideoCellManager, IGCollectionViewVisibility, IGFeedHeartAnimator, IGListAdapterScrollingContext, IGFeedItemLogger, IGFeedViewControllerTracker, NSString;

@interface IGAdRatingFeedViewController : IGViewController <IGAdRatingWebViewItemControllerDelegate, IGFeedItemDirectResponseLoggingProviderDelegate, IGFeedItemLoggingProviderDelegate, IGFeedNetworkSourceDelegate, IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate> {

	id<IGFeedItemConfigurationType> _itemConfiguration;
	id<IGFeedConfigurationType> _configuration;
	IGUser* _currentUser;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGFeedNetworkSource* _feedNetworkSource;
	IGFeedVideoCellManager* _videoCellManager;
	IGCollectionViewVisibility* _collectionViewVisibility;
	IGFeedHeartAnimator* _heartAnimator;
	IGListAdapterScrollingContext* _scrollingContext;
	IGFeedItemLogger* _feedItemLogger;
	IGFeedViewControllerTracker* _impressionTracker;

}

@property (nonatomic,readonly) id<IGFeedItemConfigurationType> itemConfiguration;                  //@synthesize itemConfiguration=_itemConfiguration - In the implementation block
@property (nonatomic,readonly) id<IGFeedConfigurationType> configuration;                          //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) IGUser * currentUser;                                               //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                        //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGFeedNetworkSource * feedNetworkSource;                            //@synthesize feedNetworkSource=_feedNetworkSource - In the implementation block
@property (nonatomic,readonly) IGFeedVideoCellManager * videoCellManager;                          //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,readonly) IGCollectionViewVisibility * collectionViewVisibility;              //@synthesize collectionViewVisibility=_collectionViewVisibility - In the implementation block
@property (nonatomic,readonly) IGFeedHeartAnimator * heartAnimator;                                //@synthesize heartAnimator=_heartAnimator - In the implementation block
@property (nonatomic,readonly) IGListAdapterScrollingContext * scrollingContext;                   //@synthesize scrollingContext=_scrollingContext - In the implementation block
@property (nonatomic,readonly) IGFeedItemLogger * feedItemLogger;                                  //@synthesize feedItemLogger=_feedItemLogger - In the implementation block
@property (nonatomic,readonly) IGFeedViewControllerTracker * impressionTracker;                    //@synthesize impressionTracker=_impressionTracker - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)setupCollectionViewAndAdapter;
-(id)extraDictionaryForFeedItem:(id)arg1 ;
-(IGFeedVideoCellManager *)videoCellManager;
-(void)refreshDataIfNotFullyLoaded;
-(IGFeedViewControllerTracker *)impressionTracker;
-(IGCollectionViewVisibility *)collectionViewVisibility;
-(IGFeedHeartAnimator *)heartAnimator;
-(IGListAdapterScrollingContext *)scrollingContext;
-(void)adRatingWebViewItemControllerDidFinishCurrentRating:(id)arg1 ;
-(void)adRatingWebViewItemControllerDidRequestHONRatingStart:(id)arg1 ;
-(id)extraDictionaryForFeedItem:(id)arg1 directResponseInfo:(id)arg2 ;
-(id)initWithCurrentUser:(id)arg1 ;
-(IGFeedItemLogger *)feedItemLogger;
-(id<IGFeedItemConfigurationType>)itemConfiguration;
-(IGFeedNetworkSource *)feedNetworkSource;
-(void)scrollViewDidScroll:(id)arg1 ;
-(IGListCollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id<IGFeedConfigurationType>)configuration;
-(IGUser *)currentUser;
@end

