
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@interface IGAlbumCarouselLayout : UICollectionViewLayout {

	float _unselectedItemWidth;
	float _selectedItemWidth;
	float _aspectRatio;
	float _padding;

}

@property (nonatomic,readonly) float unselectedItemWidth;              //@synthesize unselectedItemWidth=_unselectedItemWidth - In the implementation block
@property (nonatomic,readonly) float selectedItemWidth;                //@synthesize selectedItemWidth=_selectedItemWidth - In the implementation block
@property (nonatomic,readonly) float aspectRatio;                      //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) float padding;                          //@synthesize padding=_padding - In the implementation block
+(float)effectiveContentWidthForCarousel:(id)arg1 ;
+(int)selectedItemIndexForCarousel:(id)arg1 ;
+(CGPoint)contentOffsetForSelectedIndex:(int)arg1 inCarousel:(id)arg2 ;
-(float)mainContentWidth;
-(CGRect)frameForItemInSectionAtIndex:(int)arg1 ;
-(float)unselectedItemWidth;
-(float)selectedItemWidth;
-(id)initWithUnselectedWidth:(float)arg1 selectedWidth:(float)arg2 aspectRatio:(float)arg3 padding:(float)arg4 ;
-(float)aspectRatio;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(float)padding;
-(CGSize)collectionViewContentSize;
-(float)horizontalInset;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
@end

