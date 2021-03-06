
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol IGRelatedItemsHeaderViewDelegate;
@class UICollectionView, UIView, NSArray, NSString, NSMutableDictionary;

@interface IGRelatedItemsHeaderView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {

	id<IGRelatedItemsHeaderViewDelegate> _delegate;
	UICollectionView* _collectionView;
	UIView* _separatorView;
	NSArray* _relatedItems;
	NSString* _headerTitle;
	NSMutableDictionary* _cellTextToSizesCache;

}

@property (nonatomic,__weak,readonly) UICollectionView * collectionView;                        //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * separatorView;                                   //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * relatedItems;                                     //@synthesize relatedItems=_relatedItems - In the implementation block
@property (nonatomic,readonly) NSString * headerTitle;                                          //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cellTextToSizesCache;                      //@synthesize cellTextToSizesCache=_cellTextToSizesCache - In the implementation block
@property (assign,nonatomic,__weak) id<IGRelatedItemsHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addAllSubviews;
-(id)initWithWidth:(float)arg1 title:(id)arg2 items:(id)arg3 ;
-(NSArray *)relatedItems;
-(CGSize)sizeForText:(id)arg1 collectionView:(id)arg2 layout:(id)arg3 ;
-(NSMutableDictionary *)cellTextToSizesCache;
-(void)setDelegate:(id<IGRelatedItemsHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGRelatedItemsHeaderViewDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(UIView *)separatorView;
-(NSString *)headerTitle;
@end

