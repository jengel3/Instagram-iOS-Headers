
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@protocol IGEventViewerFeedLayoutDataSource, IGEventViewerFeedLayoutDelegate;
@class NSIndexPath, NSMutableDictionary;

@interface IGEventViewerFeedLayout : UICollectionViewLayout {

	char _lockContentOffsetForUpdates;
	id<IGEventViewerFeedLayoutDataSource> _dataSource;
	id<IGEventViewerFeedLayoutDelegate> _delegate;
	NSIndexPath* _currentlyCenteredIndexPath;
	NSMutableDictionary* _cachedItemFrames;
	NSIndexPath* _previousSpinnerIndexPath;
	CGPoint _lockedContentOffset;

}

@property (nonatomic,readonly) NSMutableDictionary * cachedItemFrames;                             //@synthesize cachedItemFrames=_cachedItemFrames - In the implementation block
@property (assign,nonatomic) CGPoint lockedContentOffset;                                          //@synthesize lockedContentOffset=_lockedContentOffset - In the implementation block
@property (nonatomic,retain) NSIndexPath * previousSpinnerIndexPath;                               //@synthesize previousSpinnerIndexPath=_previousSpinnerIndexPath - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerFeedLayoutDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerFeedLayoutDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentlyCenteredIndexPath;                             //@synthesize currentlyCenteredIndexPath=_currentlyCenteredIndexPath - In the implementation block
@property (assign,nonatomic) char lockContentOffsetForUpdates;                                     //@synthesize lockContentOffsetForUpdates=_lockContentOffsetForUpdates - In the implementation block
-(id)firstMediaIndexPath;
-(void)setLockedContentOffset:(CGPoint)arg1 ;
-(CGPoint)targetContentOffsetInScrollview:(id)arg1 forLayoutAttributes:(id)arg2 ;
-(id)spinnerIndexPath;
-(void)setPreviousSpinnerIndexPath:(NSIndexPath *)arg1 ;
-(id)lastItemIndexPath;
-(NSIndexPath *)previousSpinnerIndexPath;
-(CGRect)frameForMediaCellAtIndexPath:(id)arg1 ;
-(void)configureSpinnerCellSectionItemLayoutAttributes:(id)arg1 ;
-(void)configureHeaderCellItemLayoutAttributes:(id)arg1 ;
-(void)configureMediaCellItemLayoutAttributes:(id)arg1 ;
-(void)configureActionCellItemLayoutAttributes:(id)arg1 ;
-(CGRect)frameForSingleCellSectionAtIndexPath:(id)arg1 ;
-(CGRect)frameForHeaderCellAtIndexPath:(id)arg1 ;
-(CGRect)frameForActionCellAtIndexPath:(id)arg1 ;
-(char)lockContentOffsetForUpdates;
-(CGPoint)lockedContentOffset;
-(id)lastMediaIndexPath;
-(float)offsetPercentageOfItemForCenteredItemWithAttributes:(id)arg1 inCollectionView:(id)arg2 ;
-(float)verticalOffsetForCenteredItemWithAttributes:(id)arg1 inCollectionView:(id)arg2 ;
-(NSIndexPath *)currentlyCenteredIndexPath;
-(CGPoint)targetContentOffsetForLayoutAttributes:(id)arg1 ;
-(void)setCurrentlyCenteredIndexPath:(NSIndexPath *)arg1 ;
-(void)setLockContentOffsetForUpdates:(char)arg1 ;
-(void)clearLayoutCache;
-(NSMutableDictionary *)cachedItemFrames;
-(void)configureItemLayoutAttributes:(id)arg1 ;
-(void)setDataSource:(id<IGEventViewerFeedLayoutDataSource>)arg1 ;
-(void)setDelegate:(id<IGEventViewerFeedLayoutDelegate>)arg1 ;
-(id)init;
-(id<IGEventViewerFeedLayoutDataSource>)dataSource;
-(id<IGEventViewerFeedLayoutDelegate>)delegate;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)invalidateLayout;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)finalizeCollectionViewUpdates;
-(int)totalItemCount;
@end

