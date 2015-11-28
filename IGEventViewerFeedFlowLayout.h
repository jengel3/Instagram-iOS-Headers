
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@protocol IGEventViewerFeedLayoutDelegate;
@class NSIndexPath;

@interface IGEventViewerFeedFlowLayout : UICollectionViewFlowLayout {

	id<IGEventViewerFeedLayoutDelegate> _delegate;
	NSIndexPath* _currentlyCenteredIndexPath;

}

@property (assign,nonatomic,__weak) id<IGEventViewerFeedLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentlyCenteredIndexPath;                         //@synthesize currentlyCenteredIndexPath=_currentlyCenteredIndexPath - In the implementation block
-(id)firstIndexPath;
-(CGPoint)targetContentOffsetInScrollview:(id)arg1 forLayoutAttributes:(id)arg2 ;
-(id)lastIndexPath;
-(void)configureItemLayoutAttributes:(id)arg1 ;
-(void)setCurrentlyCenteredIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)currentlyCenteredIndexPath;
-(CGPoint)targetContentOffsetForLayoutAttributes:(id)arg1 ;
-(void)setDelegate:(id<IGEventViewerFeedLayoutDelegate>)arg1 ;
-(id)init;
-(id<IGEventViewerFeedLayoutDelegate>)delegate;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(int)totalItemCount;
@end

