
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGItemDiffingDelegate.h>
#import <Instagram/IGFeedItemVisibilityTracking.h>

@class UICollectionView, IGItemDiffing, NSDictionary, IGMainFeedNetworkSource, NSString;

@interface IGFeedItemSectionImpressionTracker : NSObject <IGItemDiffingDelegate, IGFeedItemVisibilityTracking> {

	UICollectionView* _collectionView;
	IGItemDiffing* _indexPathTracker;
	NSDictionary* _indexToFeedItemMap;
	IGMainFeedNetworkSource* _feedNetworkSource;

}

@property (nonatomic,readonly) IGItemDiffing * indexPathTracker;                              //@synthesize indexPathTracker=_indexPathTracker - In the implementation block
@property (nonatomic,retain) NSDictionary * indexToFeedItemMap;                               //@synthesize indexToFeedItemMap=_indexToFeedItemMap - In the implementation block
@property (assign,nonatomic,__weak) IGMainFeedNetworkSource * feedNetworkSource;              //@synthesize feedNetworkSource=_feedNetworkSource - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                        //@synthesize collectionView=_collectionView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGItemDiffing *)indexPathTracker;
-(void)itemDiffing:(id)arg1 didChangeWithItemAdded:(id)arg2 ;
-(void)itemDiffing:(id)arg1 didChangeWithItemRemoved:(id)arg2 ;
-(void)updateWithTrackingData:(id)arg1 visibleContentRect:(CGRect)arg2 ;
-(id)initWithFeedNetworkSource:(id)arg1 ;
-(NSDictionary *)indexToFeedItemMap;
-(void)setIndexToFeedItemMap:(NSDictionary *)arg1 ;
-(void)setFeedNetworkSource:(IGMainFeedNetworkSource *)arg1 ;
-(IGMainFeedNetworkSource *)feedNetworkSource;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

