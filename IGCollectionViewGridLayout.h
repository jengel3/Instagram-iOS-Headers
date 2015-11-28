
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class UIView, NSDictionary;

@interface IGCollectionViewGridLayout : UICollectionViewLayout {

	int _numberOfColumns;
	float _margin;
	float _spacing;
	UIView* _headerView;
	UIView* _footerView;
	float _itemSize;
	NSDictionary* _layoutInfo;
	id _headerViewKVOHandler;
	id _footerViewKVOHandler;

}

@property (assign,nonatomic) int numberOfColumns;                    //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) float margin;                           //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) float spacing;                          //@synthesize spacing=_spacing - In the implementation block
@property (nonatomic,retain) UIView * headerView;                    //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                    //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) float itemSize;                         //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,retain) NSDictionary * layoutInfo;              //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (nonatomic,retain) id headerViewKVOHandler;                //@synthesize headerViewKVOHandler=_headerViewKVOHandler - In the implementation block
@property (nonatomic,retain) id footerViewKVOHandler;                //@synthesize footerViewKVOHandler=_footerViewKVOHandler - In the implementation block
-(id)headerViewKVOHandler;
-(id)footerViewKVOHandler;
-(id)observeHeightForView:(id)arg1 ;
-(void)setHeaderViewKVOHandler:(id)arg1 ;
-(void)setFooterViewKVOHandler:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(int)numberOfColumns;
-(void)setItemSize:(float)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)invalidateLayout;
-(void)prepareLayout;
-(void)setMargin:(float)arg1 ;
-(float)margin;
-(void)setSpacing:(float)arg1 ;
-(float)spacing;
-(float)itemSize;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setNumberOfColumns:(int)arg1 ;
-(NSDictionary *)layoutInfo;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(void)setLayoutInfo:(NSDictionary *)arg1 ;
@end

