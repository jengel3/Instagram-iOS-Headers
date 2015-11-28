
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@protocol IGEventViewerFeedLayoutDelegate;
@class NSIndexPath, NSMutableArray, NSMutableDictionary;

@interface IGEventViewerFeedLayout : UICollectionViewLayout {

	char _lockContentOffsetForUpdates;
	id<IGEventViewerFeedLayoutDelegate> _delegate;
	NSIndexPath* _currentlyCenteredIndexPath;
	NSMutableArray* _cachedItemSizes;
	NSMutableDictionary* _cachedItemFrames;
	CGSize _headerViewSize;
	CGPoint _lockedContentOffset;

}

@property (assign,nonatomic,__weak) id<IGEventViewerFeedLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentlyCenteredIndexPath;                         //@synthesize currentlyCenteredIndexPath=_currentlyCenteredIndexPath - In the implementation block
@property (assign,nonatomic) char lockContentOffsetForUpdates;                                 //@synthesize lockContentOffsetForUpdates=_lockContentOffsetForUpdates - In the implementation block
@property (nonatomic,readonly) NSMutableArray * cachedItemSizes;                               //@synthesize cachedItemSizes=_cachedItemSizes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedItemFrames;                         //@synthesize cachedItemFrames=_cachedItemFrames - In the implementation block
@property (assign,nonatomic) CGSize headerViewSize;                                            //@synthesize headerViewSize=_headerViewSize - In the implementation block
@property (assign,nonatomic) CGPoint lockedContentOffset;                                      //@synthesize lockedContentOffset=_lockedContentOffset - In the implementation block
-(id)firstIndexPath;
-(void)setLockedContentOffset:(CGPoint)arg1 ;
-(CGPoint)targetContentOffsetInScrollview:(id)arg1 forLayoutAttributes:(id)arg2 ;
-(void)clearLayoutCache;
-(void)setHeaderViewSize:(CGSize)arg1 ;
-(NSMutableArray *)cachedItemSizes;
-(id)lastIndexPath;
-(CGPoint)targetContentOffsetForLayoutAttributes:(id)arg1 ;
-(NSMutableDictionary *)cachedItemFrames;
-(void)configureItemLayoutAttributes:(id)arg1 ;
-(NSIndexPath *)currentlyCenteredIndexPath;
-(void)configureSupplementaryViewAttributes:(id)arg1 ;
-(CGSize)headerViewSize;
-(char)lockContentOffsetForUpdates;
-(CGPoint)lockedContentOffset;
-(void)setCurrentlyCenteredIndexPath:(NSIndexPath *)arg1 ;
-(void)setLockContentOffsetForUpdates:(char)arg1 ;
-(void)setDelegate:(id<IGEventViewerFeedLayoutDelegate>)arg1 ;
-(id)init;
-(id<IGEventViewerFeedLayoutDelegate>)delegate;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)invalidateLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(int)totalItemCount;
@end

