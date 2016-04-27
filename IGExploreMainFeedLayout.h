
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@protocol IGExploreMainFeedLayoutDataSource;
@class IGExploreMainFeedLayoutConfiguration, NSMutableDictionary;

@interface IGExploreMainFeedLayout : UICollectionViewLayout {

	id<IGExploreMainFeedLayoutDataSource> _dataSource;
	IGExploreMainFeedLayoutConfiguration* _layoutConfig;
	NSMutableDictionary* _cachedItemFrames;
	NSMutableDictionary* _cachedItemPositions;

}

@property (assign,nonatomic,__weak) id<IGExploreMainFeedLayoutDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) IGExploreMainFeedLayoutConfiguration * layoutConfig;                //@synthesize layoutConfig=_layoutConfig - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedItemFrames;                             //@synthesize cachedItemFrames=_cachedItemFrames - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedItemPositions;                          //@synthesize cachedItemPositions=_cachedItemPositions - In the implementation block
-(IGExploreMainFeedLayoutConfiguration *)layoutConfig;
-(id)initWithLayoutConfiguration:(id)arg1 ;
-(void)clearLayoutCache;
-(id)lastCellIndexPath;
-(void)updateCacheWithPosition:(NSRange)arg1 atIndexPath:(id)arg2 ;
-(NSMutableDictionary *)cachedItemPositions;
-(CGRect)cellFrameForItemAtIndexPath:(id)arg1 ;
-(NSRange)positionForItemAtIndexPath:(id)arg1 ;
-(NSMutableDictionary *)cachedItemFrames;
-(void)configureItemLayoutAttributes:(id)arg1 ;
-(CGSize)cellSizeForItemAtIndexPath:(id)arg1 ;
-(CGPoint)cellPointForItemAtIndexPath:(id)arg1 ;
-(void)setDataSource:(id<IGExploreMainFeedLayoutDataSource>)arg1 ;
-(id)init;
-(id<IGExploreMainFeedLayoutDataSource>)dataSource;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)invalidateLayout;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(int)totalItemCount;
@end

