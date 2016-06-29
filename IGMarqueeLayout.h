
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class IGMarqueeViewLayoutSpec, NSIndexPath;

@interface IGMarqueeLayout : UICollectionViewFlowLayout {

	IGMarqueeViewLayoutSpec* _layoutSpec;
	NSIndexPath* _currentlyCenteredIndexPath;

}

@property (nonatomic,retain) NSIndexPath * currentlyCenteredIndexPath;              //@synthesize currentlyCenteredIndexPath=_currentlyCenteredIndexPath - In the implementation block
@property (nonatomic,readonly) IGMarqueeViewLayoutSpec * layoutSpec;                //@synthesize layoutSpec=_layoutSpec - In the implementation block
-(NSIndexPath *)currentlyCenteredIndexPath;
-(CGPoint)targetContentOffsetForLayoutAttributes:(id)arg1 ;
-(void)setCurrentlyCenteredIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithLayoutSpec:(id)arg1 ;
-(void)setScrollOffsetForIndexPath:(id)arg1 animated:(char)arg2 ;
-(IGMarqueeViewLayoutSpec *)layoutSpec;
-(CGPoint)targetContentOffsetInScrollview:(id)arg1 forLayoutAttributes:(id)arg2 ;
-(void)setScrollOffsetForNextIndexPath;
-(void)prepareLayout;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)scrollToItemAtIndexPath:(id)arg1 animated:(char)arg2 ;
@end

