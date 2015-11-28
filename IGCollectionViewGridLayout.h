
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary;

@interface IGCollectionViewGridLayout : UICollectionViewLayout {

	int _numberOfColumns;
	float _margin;
	float _spacing;
	float _itemSize;
	NSDictionary* _layoutInfo;

}

@property (assign,nonatomic) int numberOfColumns;                    //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) float margin;                           //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) float spacing;                          //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) float itemSize;                         //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,retain) NSDictionary * layoutInfo;              //@synthesize layoutInfo=_layoutInfo - In the implementation block
-(id)init;
-(int)numberOfColumns;
-(void)setItemSize:(float)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)invalidateLayout;
-(void)prepareLayout;
-(void)setMargin:(float)arg1 ;
-(float)margin;
-(void)setSpacing:(float)arg1 ;
-(float)spacing;
-(float)itemSize;
-(void)setNumberOfColumns:(int)arg1 ;
-(NSDictionary *)layoutInfo;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(void)setLayoutInfo:(NSDictionary *)arg1 ;
@end

