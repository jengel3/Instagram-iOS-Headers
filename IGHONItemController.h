
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGFeedScrollViewListener.h>
#import <Instagram/IGFeedItemLoggingProviderDelegate.h>
#import <Instagram/IGFeedItemDirectResponseLoggingProviderDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGHONMediaBundle, NSMutableIndexSet, IGListCollectionView, IGFeedScrollViewAnnouncer, IGListAdapter, IGFeedVideoCellManager, IGFeedItemLogger, NSString;

@interface IGHONItemController : IGListItemController <IGListAdapterDataSource, IGFeedScrollViewListener, IGFeedItemLoggingProviderDelegate, IGFeedItemDirectResponseLoggingProviderDelegate, IGListItemType> {

	IGHONMediaBundle* _mediaBundle;
	int _currentItemIndex;
	NSMutableIndexSet* _seenIndexes;
	IGListCollectionView* _collectionView;
	IGFeedScrollViewAnnouncer* _scrollViewAnnouncer;
	IGListAdapter* _listAdapter;
	IGFeedVideoCellManager* _videoCellManager;
	IGFeedItemLogger* _feedItemLogger;
	NSString* _analyticsModule;

}

@property (nonatomic,retain) IGHONMediaBundle * mediaBundle;                                 //@synthesize mediaBundle=_mediaBundle - In the implementation block
@property (assign,nonatomic) int currentItemIndex;                                           //@synthesize currentItemIndex=_currentItemIndex - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * seenIndexes;                              //@synthesize seenIndexes=_seenIndexes - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                        //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGFeedScrollViewAnnouncer * scrollViewAnnouncer;              //@synthesize scrollViewAnnouncer=_scrollViewAnnouncer - In the implementation block
@property (nonatomic,retain) IGListAdapter * listAdapter;                                    //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGFeedVideoCellManager * videoCellManager;                    //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,retain) IGFeedItemLogger * feedItemLogger;                              //@synthesize feedItemLogger=_feedItemLogger - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                              //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)analyticsModule;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(IGListAdapter *)listAdapter;
-(void)setListAdapter:(IGListAdapter *)arg1 ;
-(int)currentItemIndex;
-(void)scrollViewDidEndDragging:(id)arg1 ;
-(IGFeedVideoCellManager *)videoCellManager;
-(id)extraDictionaryForFeedItem:(id)arg1 ;
-(id)extraDictionaryForFeedItem:(id)arg1 directResponseInfo:(id)arg2 ;
-(void)setCurrentItemIndex:(int)arg1 ;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)scrollViewWillScrollNearBottom:(id)arg1 ;
-(void)scrollViewWillScrollNearTop:(id)arg1 ;
-(void)setupVideoCellManager;
-(void)setFeedItemLogger:(IGFeedItemLogger *)arg1 ;
-(NSMutableIndexSet *)seenIndexes;
-(IGHONMediaBundle *)mediaBundle;
-(void)logEventForItemController:(id)arg1 eventType:(id)arg2 ;
-(void)executeForEachIndex:(id)arg1 action:(/*^block*/id)arg2 ;
-(id)feedItemControllerForIndex:(int)arg1 ;
-(void)finalizeBeforeProgressing;
-(void)setupListAdapter;
-(IGFeedItemLogger *)feedItemLogger;
-(id)initWithAnalyticsModule:(id)arg1 ;
-(void)switchCurrentSetToIndex:(int)arg1 ;
-(void)selectItemAtIndex:(int)arg1 ;
-(void)skipItems;
-(void)logAttemptedToComplete;
-(char)allItemsViewed;
-(void)setMediaBundle:(IGHONMediaBundle *)arg1 ;
-(IGFeedScrollViewAnnouncer *)scrollViewAnnouncer;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(IGListCollectionView *)collectionView;
-(unsigned)numberOfItems;
-(void)setupCollectionView;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end
